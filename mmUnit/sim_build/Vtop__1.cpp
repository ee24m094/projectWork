// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop::_sequent__TOP__16(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__16\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_ETC___05F_d36872 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3272197) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3272198)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3271926) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3271927)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36871)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3272560 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3272198) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3272197));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_ETC___05F_d34374 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3052050) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052051)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3051779) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3051780)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34373)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3052413 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052051) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3052050));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_ETC___05F_d31876 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831903) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831904)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831632) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831633)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31875)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2832266 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2831904) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2831903));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_ETC___05F_d29378 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2611733) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2611734)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2611462) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2611463)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29377)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2612096 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2611734) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2611733));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT___05FETC___05F_d9394 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh850511) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850512)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh850240) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850241)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9393)));
    vlTOPp->mkMmUnit__DOT__y___05Fh850874 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850512) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh850511));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT___05FETC___05F_d4398 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh410211) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh410212)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh409940) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh409941)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4397)));
    vlTOPp->mkMmUnit__DOT__y___05Fh410574 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh410212) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh410211));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_ETC___05F_d11892 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1070681) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070682)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1070410) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070411)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11891)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1071044 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070682) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1070681));
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
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_ETC___05F_d14390 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290828) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290829)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290557) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290558)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14389)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1291191 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1290829) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1290828));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT___05FETC___05F_d6896 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh630361) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630362)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh630090) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630091)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6895)));
    vlTOPp->mkMmUnit__DOT__y___05Fh630724 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630362) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh630361));
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
    vlTOPp->mkMmUnit__DOT__y___05Fh3135224 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BI_ETC___05Fq574 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3134864));
    vlTOPp->mkMmUnit__DOT__y___05Fh2915077 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BI_ETC___05Fq539 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2914717));
    vlTOPp->mkMmUnit__DOT__y___05Fh2694930 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BI_ETC___05Fq504 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2694570));
    vlTOPp->mkMmUnit__DOT__y___05Fh2474760 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BI_ETC___05Fq469 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2474400));
    vlTOPp->mkMmUnit__DOT__y___05Fh713538 = ((IData)(
                                                     (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_ETC___05Fq189 
                                                      >> 2U)) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713178));
    vlTOPp->mkMmUnit__DOT__y___05Fh3355371 = ((IData)(
                                                      (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BI_ETC___05Fq609 
                                                       >> 2U)) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355011));
    vlTOPp->mkMmUnit__DOT__y___05Fh53084 = ((IData)(
                                                    (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_T_ETC___05Fq84 
                                                     >> 2U)) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh52724));
    vlTOPp->mkMmUnit__DOT__y___05Fh933708 = ((IData)(
                                                     (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_ETC___05Fq224 
                                                      >> 2U)) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh933348));
    vlTOPp->mkMmUnit__DOT__y___05Fh273238 = ((IData)(
                                                     (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_ETC___05Fq118 
                                                      >> 2U)) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh272878));
    vlTOPp->mkMmUnit__DOT__y___05Fh493388 = ((IData)(
                                                     (vlTOPp->mkMmUnit__DOT__IF_IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_ETC___05Fq154 
                                                      >> 2U)) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493028));
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
    vlTOPp->mkMmUnit__DOT__y___05Fh3272469 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3272560)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3052322 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052413)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2832175 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2832266)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2612005 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2612096)));
    vlTOPp->mkMmUnit__DOT__y___05Fh850783 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                    >> 9U) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850874)));
    vlTOPp->mkMmUnit__DOT__y___05Fh410483 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                    >> 9U) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh410574)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1070953 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1071044)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3492616 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3492707)));
    vlTOPp->mkMmUnit__DOT__y___05Fh190329 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                    >> 9U) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh190420)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1291100 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                >> 9U) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1291191)));
    vlTOPp->mkMmUnit__DOT__y___05Fh630633 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
                                                    >> 9U) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630724)));
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
    vlTOPp->mkMmUnit__DOT__y___05Fh3135133 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135223) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135224));
    vlTOPp->mkMmUnit__DOT__y___05Fh2914986 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915076) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915077));
    vlTOPp->mkMmUnit__DOT__y___05Fh2694839 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2694929) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2694930));
    vlTOPp->mkMmUnit__DOT__y___05Fh2474669 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2474759) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2474760));
    vlTOPp->mkMmUnit__DOT__y___05Fh713447 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713537) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh713538));
    vlTOPp->mkMmUnit__DOT__y___05Fh3355280 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355370) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355371));
    vlTOPp->mkMmUnit__DOT__y___05Fh52993 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53083) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53084));
    vlTOPp->mkMmUnit__DOT__y___05Fh933617 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh933707) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh933708));
    vlTOPp->mkMmUnit__DOT__y___05Fh273147 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273237) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273238));
    vlTOPp->mkMmUnit__DOT__y___05Fh493297 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493387) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh493388));
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
    vlTOPp->mkMmUnit__DOT__y___05Fh3272740 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3272469) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3052593 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052322) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2832446 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2832175) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2612276 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2612005) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh851054 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh850783) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh410754 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh410483) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1071224 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1070953) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3492887 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3492616) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh190600 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh190329) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1291371 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1291100) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                 >> 0xaU));
    vlTOPp->mkMmUnit__DOT__y___05Fh630904 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630633) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
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
    vlTOPp->mkMmUnit__DOT__y___05Fh3273011 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3272740) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3052864 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052593) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2832717 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2832446) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2612547 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2612276) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh851325 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh851054) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh411025 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh410754) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1071495 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1071224) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3493158 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3492887) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh190871 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh190600) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1291642 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1291371) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh631175 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh630904) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
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
    vlTOPp->mkMmUnit__DOT__y___05Fh3135405 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135495) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135496));
    vlTOPp->mkMmUnit__DOT__y___05Fh2915258 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915348) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915349));
    vlTOPp->mkMmUnit__DOT__y___05Fh2695111 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695201) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695202));
    vlTOPp->mkMmUnit__DOT__y___05Fh2474941 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475031) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475032));
    vlTOPp->mkMmUnit__DOT__y___05Fh713719 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713809) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh713810));
    vlTOPp->mkMmUnit__DOT__y___05Fh3355552 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355642) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355643));
    vlTOPp->mkMmUnit__DOT__y___05Fh53265 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53355) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53356));
    vlTOPp->mkMmUnit__DOT__y___05Fh933889 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh933979) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh933980));
    vlTOPp->mkMmUnit__DOT__y___05Fh273419 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273509) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273510));
    vlTOPp->mkMmUnit__DOT__y___05Fh493569 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493659) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh493660));
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
    vlTOPp->mkMmUnit__DOT__y___05Fh3273282 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3273011) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3053135 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3052864) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2832988 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2832717) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2612818 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2612547) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh851596 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh851325) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh411296 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh411025) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1071766 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1071495) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3493429 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3493158) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh191142 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh190871) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1291913 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1291642) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh631446 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh631175) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
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
    vlTOPp->mkMmUnit__DOT__y___05Fh3135767 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135405) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135404));
    vlTOPp->mkMmUnit__DOT__y___05Fh2915620 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915258) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915257));
    vlTOPp->mkMmUnit__DOT__y___05Fh2695473 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695111) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695110));
    vlTOPp->mkMmUnit__DOT__y___05Fh2475303 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2474941) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2474940));
    vlTOPp->mkMmUnit__DOT__y___05Fh714081 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh713719) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713718));
    vlTOPp->mkMmUnit__DOT__y___05Fh3355914 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355552) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355551));
    vlTOPp->mkMmUnit__DOT__y___05Fh53627 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53265) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53264));
    vlTOPp->mkMmUnit__DOT__y___05Fh934251 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh933889) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh933888));
    vlTOPp->mkMmUnit__DOT__y___05Fh273781 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273419) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273418));
    vlTOPp->mkMmUnit__DOT__y___05Fh493931 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh493569) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493568));
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
    vlTOPp->mkMmUnit__DOT__y___05Fh3135676 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135766) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135767));
    vlTOPp->mkMmUnit__DOT__y___05Fh2915529 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915619) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915620));
    vlTOPp->mkMmUnit__DOT__y___05Fh2695382 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695472) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695473));
    vlTOPp->mkMmUnit__DOT__y___05Fh2475212 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475302) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475303));
    vlTOPp->mkMmUnit__DOT__y___05Fh713990 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh714080) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh714081));
    vlTOPp->mkMmUnit__DOT__y___05Fh3355823 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355913) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355914));
    vlTOPp->mkMmUnit__DOT__y___05Fh53536 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53626) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53627));
    vlTOPp->mkMmUnit__DOT__y___05Fh934160 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934250) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934251));
    vlTOPp->mkMmUnit__DOT__y___05Fh273690 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273780) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273781));
    vlTOPp->mkMmUnit__DOT__y___05Fh493840 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh493930) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh493931));
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
    vlTOPp->mkMmUnit__DOT__y___05Fh3273824 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3273553) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3053677 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3053406) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2833530 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2833259) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2613360 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2613089) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh852138 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh851867) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh411838 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh411567) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1072308 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1072037) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3493971 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3493700) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh191684 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh191413) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1292455 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1292184) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh631988 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh631717) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824) 
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
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35359 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135675) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135676)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135404) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135405)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35358)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3136038 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135676) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135675));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32861 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915528) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915529)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915257) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915258)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32860)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2915891 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915529) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915528));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30363 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695381) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695382)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695110) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695111)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30362)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2695744 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695382) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695381));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27865 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475211) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475212)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2474940) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2474941)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27864)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2475574 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475212) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475211));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7881 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713989) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh713990)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713718) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh713719)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7880)));
    vlTOPp->mkMmUnit__DOT__y___05Fh714352 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh713990) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh713989));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37857 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355822) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355823)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355551) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355552)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37856)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3356185 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3355823) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3355822));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d387 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53535) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53536)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53264) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53265)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d386)));
    vlTOPp->mkMmUnit__DOT__y___05Fh53898 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53536) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53535));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10379 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934159) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934160)) 
            << 5U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh933888) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh933889)) 
                       << 4U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10378)));
    vlTOPp->mkMmUnit__DOT__y___05Fh934522 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934160) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934159));
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
    vlTOPp->mkMmUnit__DOT__product___05Fh3260513 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3273824) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3273553) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36874)));
    vlTOPp->mkMmUnit__DOT__product___05Fh3040366 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3053677) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3053406) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34376)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2820219 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2833530) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2833259) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31878)));
    vlTOPp->mkMmUnit__DOT__product___05Fh2600049 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2613360) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2613089) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29380)));
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
    vlTOPp->mkMmUnit__DOT__product___05Fh1058997 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1072308) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1072037) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11894)));
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
    vlTOPp->mkMmUnit__DOT__product___05Fh1279144 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1292455) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1292184) 
                                                   << 0xeU))) 
                                      | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14392)));
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
    vlTOPp->mkMmUnit__DOT__y___05Fh3135947 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3136037) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3136038));
    vlTOPp->mkMmUnit__DOT__y___05Fh2915800 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915890) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915891));
    vlTOPp->mkMmUnit__DOT__y___05Fh2695653 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695743) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695744));
    vlTOPp->mkMmUnit__DOT__y___05Fh2475483 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475573) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475574));
    vlTOPp->mkMmUnit__DOT__y___05Fh714261 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh714351) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh714352));
    vlTOPp->mkMmUnit__DOT__y___05Fh3356094 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3356184) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3356185));
    vlTOPp->mkMmUnit__DOT__y___05Fh53807 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53897) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53898));
    vlTOPp->mkMmUnit__DOT__y___05Fh934431 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934521) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934522));
    vlTOPp->mkMmUnit__DOT__y___05Fh273961 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh274051) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh274052));
    vlTOPp->mkMmUnit__DOT__y___05Fh494111 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh494201) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh494202));
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
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3260513)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_1_6_ETC___05F_d36800));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3040366)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_1_4_ETC___05F_d34302));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2820219)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_1_1_ETC___05F_d31804));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2600049)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_1_9_ETC___05F_d29306));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh838827)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_1_23_ETC___05F_d9322));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh398527)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_1_23_ETC___05F_d4326));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1058997)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_1_1_ETC___05F_d11820));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3480660)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_1_9_ETC___05F_d39298));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh178373)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_1_73_ETC___05F_d1828));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1279144)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_1_4_ETC___05F_d14318));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900 
        = ((4U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh618677)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_1_73_ETC___05F_d6824));
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
    vlTOPp->mkMmUnit__DOT__y___05Fh3136309 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135947) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135946));
    vlTOPp->mkMmUnit__DOT__y___05Fh2916162 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915800) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915799));
    vlTOPp->mkMmUnit__DOT__y___05Fh2696015 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695653) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695652));
    vlTOPp->mkMmUnit__DOT__y___05Fh2475845 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475483) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475482));
    vlTOPp->mkMmUnit__DOT__y___05Fh714623 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh714261) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh714260));
    vlTOPp->mkMmUnit__DOT__y___05Fh3356456 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3356094) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3356093));
    vlTOPp->mkMmUnit__DOT__y___05Fh54169 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53807) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53806));
    vlTOPp->mkMmUnit__DOT__y___05Fh934793 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934431) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934430));
    vlTOPp->mkMmUnit__DOT__y___05Fh274323 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273961) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273960));
    vlTOPp->mkMmUnit__DOT__y___05Fh494473 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh494111) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh494110));
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
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq594 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3276587 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3276678 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3276316 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3276407 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3276045 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3276136 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3275774 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3275865 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3275503 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3275594 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3275231 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3275322 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq593 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3274963 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq559 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3056440 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3056531 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3056169 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3056260 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3055898 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3055989 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3055627 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3055718 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3055356 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3055447 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3055084 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3055175 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq558 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3054816 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq524 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2836293 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2836384 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2836022 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2836113 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2835751 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2835842 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2835480 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2835571 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2835209 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2835300 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2834937 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2835028 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq523 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2834669 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq489 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2616123 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2616214 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2615852 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2615943 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2615581 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2615672 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2615310 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2615401 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2615039 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2615130 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2614767 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2614858 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq488 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2614499 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
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
    vlTOPp->mkMmUnit__DOT__x___05Fh1074800 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1074891 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1074529 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1074620 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1074258 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1074349 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1073987 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1074078 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1073715 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1073806 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq243 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1073447 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq629 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3496734 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3496825 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3496463 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3496554 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3496192 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3496283 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3495921 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3496012 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3495650 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3495741 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3495378 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3495469 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq628 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3495110 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_ETC___05Fq104 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh194447 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                    >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh194538 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh194176 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh194267 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh193905 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh193996 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh193634 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh193725 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh193363 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh193454 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh193091 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh193182 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_ETC___05Fq103 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh192823 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                    >> 4U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq279 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1295218 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1295309 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1294947 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1295038 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1294676 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1294767 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1294405 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1294496 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1294134 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1294225 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1293862 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1293953 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq278 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1293594 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
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
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq314 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1515365 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1515456 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1515094 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1515185 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1514823 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1514914 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1514552 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1514643 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1514281 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1514372 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1514009 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1514100 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq313 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1513741 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq349 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1735512 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1735603 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1735241 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1735332 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1734970 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1735061 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1734699 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1734790 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1734428 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1734519 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1734156 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1734247 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq348 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1733888 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq384 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1955682 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1955773 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1955411 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1955502 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1955140 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1955231 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1954869 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1954960 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1954598 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1954689 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1954326 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1954417 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq383 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1954058 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq419 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2175829 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2175920 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2175558 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2175649 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2175287 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2175378 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2175016 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2175107 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2174745 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2174836 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2174473 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2174564 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq418 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2174205 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq454 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2395976 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                  >> 0xaU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2396067 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2395705 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2395796 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2395434 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2395525 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2395163 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2395254 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2394892 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2394983 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2394620 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2394711 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq453 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                   >> 3U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A)))
            ? 0x10U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2394352 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                >> 4U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3136218 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3136308) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3136309));
    vlTOPp->mkMmUnit__DOT__y___05Fh2916071 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2916161) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2916162));
    vlTOPp->mkMmUnit__DOT__y___05Fh2695924 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2696014) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2696015));
    vlTOPp->mkMmUnit__DOT__y___05Fh2475754 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475844) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475845));
    vlTOPp->mkMmUnit__DOT__y___05Fh714532 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh714622) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh714623));
    vlTOPp->mkMmUnit__DOT__y___05Fh3356365 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3356455) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3356456));
    vlTOPp->mkMmUnit__DOT__y___05Fh54078 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh54168) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh54169));
    vlTOPp->mkMmUnit__DOT__y___05Fh934702 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934792) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934793));
    vlTOPp->mkMmUnit__DOT__y___05Fh274232 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh274322) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh274323));
    vlTOPp->mkMmUnit__DOT__y___05Fh494382 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh494472) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh494473));
    vlTOPp->mkMmUnit__DOT__y___05Fh1154849 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1154939) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1154940));
    vlTOPp->mkMmUnit__DOT__y___05Fh1374996 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1375086) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1375087));
    vlTOPp->mkMmUnit__DOT__y___05Fh1595143 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1595233) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1595234));
    vlTOPp->mkMmUnit__DOT__y___05Fh1815313 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1815403) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1815404));
    vlTOPp->mkMmUnit__DOT__y___05Fh2035460 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2035550) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2035551));
    vlTOPp->mkMmUnit__DOT__y___05Fh2255607 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2255697) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2255698));
    vlTOPp->mkMmUnit__DOT__y___05Fh3275323 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq593 
                                               >> 4U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3274963));
    vlTOPp->mkMmUnit__DOT__y___05Fh3055176 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq558 
                                               >> 4U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3054816));
    vlTOPp->mkMmUnit__DOT__y___05Fh2835029 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq523 
                                               >> 4U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2834669));
    vlTOPp->mkMmUnit__DOT__y___05Fh2614859 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq488 
                                               >> 4U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2614499));
    vlTOPp->mkMmUnit__DOT__y___05Fh853637 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_ETC___05Fq208 
                                              >> 4U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh853277));
    vlTOPp->mkMmUnit__DOT__y___05Fh413337 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_ETC___05Fq137 
                                              >> 4U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh412977));
    vlTOPp->mkMmUnit__DOT__y___05Fh1073807 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq243 
                                               >> 4U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1073447));
    vlTOPp->mkMmUnit__DOT__y___05Fh3495470 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq628 
                                               >> 4U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3495110));
    vlTOPp->mkMmUnit__DOT__y___05Fh193183 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_ETC___05Fq103 
                                              >> 4U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh192823));
    vlTOPp->mkMmUnit__DOT__y___05Fh1293954 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq278 
                                               >> 4U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1293594));
    vlTOPp->mkMmUnit__DOT__y___05Fh633487 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_ETC___05Fq173 
                                              >> 4U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh633127));
    vlTOPp->mkMmUnit__DOT__y___05Fh1514101 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq313 
                                               >> 4U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1513741));
    vlTOPp->mkMmUnit__DOT__y___05Fh1734248 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq348 
                                               >> 4U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1733888));
    vlTOPp->mkMmUnit__DOT__y___05Fh1954418 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq383 
                                               >> 4U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1954058));
    vlTOPp->mkMmUnit__DOT__y___05Fh2174565 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq418 
                                               >> 4U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2174205));
    vlTOPp->mkMmUnit__DOT__y___05Fh2394712 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq453 
                                               >> 4U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2394352));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35360 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3136217) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3136218)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3135946) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3135947)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35359)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3136580 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3136218) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3136217));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32862 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2916070) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2916071)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2915799) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2915800)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32861)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2916433 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2916071) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2916070));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30364 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695923) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695924)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695652) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695653)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30363)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2696286 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2695924) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2695923));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27866 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475753) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475754)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475482) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475483)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27865)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2476116 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2475754) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2475753));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7882 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh714531) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh714532)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh714260) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh714261)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7881)));
    vlTOPp->mkMmUnit__DOT__y___05Fh714894 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh714532) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh714531));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37858 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3356364) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3356365)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3356093) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3356094)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37857)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3356727 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3356365) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3356364));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d388 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh54077) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh54078)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh53806) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh53807)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d387)));
    vlTOPp->mkMmUnit__DOT__y___05Fh54440 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh54078) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh54077));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10380 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934701) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934702)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934430) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934431)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10379)));
    vlTOPp->mkMmUnit__DOT__y___05Fh935064 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934702) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934701));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2886 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh274231) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh274232)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh273960) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh273961)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2885)));
    vlTOPp->mkMmUnit__DOT__y___05Fh274594 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh274232) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh274231));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5384 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh494381) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh494382)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh494110) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh494111)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5383)));
    vlTOPp->mkMmUnit__DOT__y___05Fh494744 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh494382) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh494381));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12878 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1154848) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1154849)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1154577) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1154578)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12877)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1155211 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1154849) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1154848));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15376 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1374995) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1374996)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1374724) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1374725)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15375)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1375358 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1374996) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1374995));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17874 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1595142) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1595143)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1594871) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1594872)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17873)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1595505 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1595143) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1595142));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20372 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1815312) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1815313)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1815041) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1815042)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20371)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1815675 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1815313) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1815312));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22870 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2035459) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2035460)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2035188) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2035189)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22869)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2035822 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2035460) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2035459));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25368 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2255606) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2255607)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2255335) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2255336)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25367)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2255969 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2255607) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2255606));
    vlTOPp->mkMmUnit__DOT__y___05Fh3275232 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3275322) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3275323));
    vlTOPp->mkMmUnit__DOT__y___05Fh3055085 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3055175) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3055176));
    vlTOPp->mkMmUnit__DOT__y___05Fh2834938 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2835028) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2835029));
    vlTOPp->mkMmUnit__DOT__y___05Fh2614768 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2614858) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2614859));
    vlTOPp->mkMmUnit__DOT__y___05Fh853546 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh853636) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh853637));
    vlTOPp->mkMmUnit__DOT__y___05Fh413246 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh413336) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh413337));
    vlTOPp->mkMmUnit__DOT__y___05Fh1073716 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1073806) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1073807));
    vlTOPp->mkMmUnit__DOT__y___05Fh3495379 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3495469) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3495470));
    vlTOPp->mkMmUnit__DOT__y___05Fh193092 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh193182) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh193183));
    vlTOPp->mkMmUnit__DOT__y___05Fh1293863 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1293953) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1293954));
    vlTOPp->mkMmUnit__DOT__y___05Fh633396 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh633486) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh633487));
    vlTOPp->mkMmUnit__DOT__y___05Fh1514010 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1514100) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1514101));
    vlTOPp->mkMmUnit__DOT__y___05Fh1734157 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1734247) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1734248));
    vlTOPp->mkMmUnit__DOT__y___05Fh1954327 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1954417) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1954418));
    vlTOPp->mkMmUnit__DOT__y___05Fh2174474 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2174564) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2174565));
    vlTOPp->mkMmUnit__DOT__y___05Fh2394621 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2394711) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2394712));
    vlTOPp->mkMmUnit__DOT__y___05Fh3136489 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3136579) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3136580));
    vlTOPp->mkMmUnit__DOT__y___05Fh2916342 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2916432) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2916433));
    vlTOPp->mkMmUnit__DOT__y___05Fh2696195 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2696285) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2696286));
    vlTOPp->mkMmUnit__DOT__y___05Fh2476025 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2476115) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2476116));
    vlTOPp->mkMmUnit__DOT__y___05Fh714803 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh714893) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh714894));
    vlTOPp->mkMmUnit__DOT__y___05Fh3356636 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3356726) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3356727));
    vlTOPp->mkMmUnit__DOT__y___05Fh54349 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh54439) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh54440));
    vlTOPp->mkMmUnit__DOT__y___05Fh934973 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh935063) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh935064));
    vlTOPp->mkMmUnit__DOT__y___05Fh274503 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh274593) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh274594));
    vlTOPp->mkMmUnit__DOT__y___05Fh494653 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh494743) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh494744));
    vlTOPp->mkMmUnit__DOT__y___05Fh1155120 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1155210) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1155211));
    vlTOPp->mkMmUnit__DOT__y___05Fh1375267 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1375357) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1375358));
    vlTOPp->mkMmUnit__DOT__y___05Fh1595414 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1595504) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1595505));
    vlTOPp->mkMmUnit__DOT__y___05Fh1815584 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1815674) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1815675));
    vlTOPp->mkMmUnit__DOT__y___05Fh2035731 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2035821) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2035822));
    vlTOPp->mkMmUnit__DOT__y___05Fh2255878 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2255968) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2255969));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36942 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3275231) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3275232)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3274963) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq593))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq594))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3275595 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3275232) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3275231));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34444 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3055084) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3055085)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3054816) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq558))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq559))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3055448 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3055085) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3055084));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31946 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2834937) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2834938)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2834669) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq523))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq524))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2835301 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2834938) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2834937));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29448 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2614767) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2614768)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2614499) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq488))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq489))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2615131 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2614768) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2614767));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9464 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh853545) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh853546)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh853277) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_ETC___05Fq208))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_ETC___05Fq209))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh853909 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh853546) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh853545));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4468 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh413245) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh413246)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh412977) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_ETC___05Fq137))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_ETC___05Fq138))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh413609 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh413246) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh413245));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11962 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1073715) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1073716)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1073447) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq243))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq244))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1074079 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1073716) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1073715));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39440 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3495378) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3495379)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3495110) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq628))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq629))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3495742 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3495379) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3495378));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1970 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh193091) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh193092)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh192823) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_ETC___05Fq103))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_ETC___05Fq104))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh193455 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh193092) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh193091));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14460 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1293862) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1293863)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1293594) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq278))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq279))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1294226 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1293863) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1293862));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6966 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh633395) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh633396)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh633127) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_ETC___05Fq173))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_ETC___05Fq174))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh633759 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh633396) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh633395));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16958 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1514009) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1514010)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1513741) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq313))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq314))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1514373 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1514010) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1514009));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19456 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1734156) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1734157)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1733888) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq348))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq349))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1734520 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1734157) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1734156));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21954 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1954326) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1954327)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1954058) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq383))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq384))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1954690 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1954327) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1954326));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24452 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2174473) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2174474)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2174205) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq418))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq419))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2174837 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2174474) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2174473));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26950 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2394620) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2394621)) 
            << 5U) | ((0x10U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2394352) 
                                 << 4U) ^ (0xfffffff0U 
                                           & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq453))) 
                      | ((8U & ((0xfffffff8U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884)) 
                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                   << 3U))) | ((6U 
                                                & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884)) 
                                               | (1U 
                                                  & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq454))))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2394984 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2394621) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2394620));
    vlTOPp->mkMmUnit__DOT__y___05Fh3136851 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3136489) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3136488));
    vlTOPp->mkMmUnit__DOT__y___05Fh2916704 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2916342) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2916341));
    vlTOPp->mkMmUnit__DOT__y___05Fh2696557 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2696195) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2696194));
    vlTOPp->mkMmUnit__DOT__y___05Fh2476387 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2476025) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2476024));
    vlTOPp->mkMmUnit__DOT__y___05Fh715165 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh714803) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh714802));
    vlTOPp->mkMmUnit__DOT__y___05Fh3356998 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3356636) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3356635));
    vlTOPp->mkMmUnit__DOT__y___05Fh54711 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh54349) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh54348));
    vlTOPp->mkMmUnit__DOT__y___05Fh935335 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934973) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934972));
    vlTOPp->mkMmUnit__DOT__y___05Fh274865 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh274503) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh274502));
    vlTOPp->mkMmUnit__DOT__y___05Fh495015 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh494653) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh494652));
    vlTOPp->mkMmUnit__DOT__y___05Fh1155482 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1155120) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1155119));
    vlTOPp->mkMmUnit__DOT__y___05Fh1375629 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1375267) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1375266));
    vlTOPp->mkMmUnit__DOT__y___05Fh1595776 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1595414) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1595413));
    vlTOPp->mkMmUnit__DOT__y___05Fh1815946 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1815584) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1815583));
    vlTOPp->mkMmUnit__DOT__y___05Fh2036093 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2035731) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2035730));
    vlTOPp->mkMmUnit__DOT__y___05Fh2256240 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2255878) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2255877));
    vlTOPp->mkMmUnit__DOT__y___05Fh3275504 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3275594) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3275595));
    vlTOPp->mkMmUnit__DOT__y___05Fh3055357 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3055447) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3055448));
    vlTOPp->mkMmUnit__DOT__y___05Fh2835210 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2835300) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2835301));
    vlTOPp->mkMmUnit__DOT__y___05Fh2615040 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2615130) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2615131));
    vlTOPp->mkMmUnit__DOT__y___05Fh853818 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh853908) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh853909));
    vlTOPp->mkMmUnit__DOT__y___05Fh413518 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh413608) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh413609));
    vlTOPp->mkMmUnit__DOT__y___05Fh1073988 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1074078) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1074079));
    vlTOPp->mkMmUnit__DOT__y___05Fh3495651 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3495741) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3495742));
    vlTOPp->mkMmUnit__DOT__y___05Fh193364 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh193454) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh193455));
    vlTOPp->mkMmUnit__DOT__y___05Fh1294135 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1294225) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1294226));
    vlTOPp->mkMmUnit__DOT__y___05Fh633668 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh633758) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh633759));
    vlTOPp->mkMmUnit__DOT__y___05Fh1514282 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1514372) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1514373));
    vlTOPp->mkMmUnit__DOT__y___05Fh1734429 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1734519) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1734520));
    vlTOPp->mkMmUnit__DOT__y___05Fh1954599 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1954689) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1954690));
    vlTOPp->mkMmUnit__DOT__y___05Fh2174746 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2174836) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2174837));
    vlTOPp->mkMmUnit__DOT__y___05Fh2394893 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2394983) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2394984));
    vlTOPp->mkMmUnit__DOT__y___05Fh3136760 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3136850) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3136851));
    vlTOPp->mkMmUnit__DOT__y___05Fh2916613 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2916703) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2916704));
    vlTOPp->mkMmUnit__DOT__y___05Fh2696466 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2696556) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2696557));
    vlTOPp->mkMmUnit__DOT__y___05Fh2476296 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2476386) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2476387));
    vlTOPp->mkMmUnit__DOT__y___05Fh715074 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh715164) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh715165));
    vlTOPp->mkMmUnit__DOT__y___05Fh3356907 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3356997) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3356998));
    vlTOPp->mkMmUnit__DOT__y___05Fh54620 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh54710) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh54711));
    vlTOPp->mkMmUnit__DOT__y___05Fh935244 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh935334) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh935335));
    vlTOPp->mkMmUnit__DOT__y___05Fh274774 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh274864) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh274865));
    vlTOPp->mkMmUnit__DOT__y___05Fh494924 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh495014) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh495015));
    vlTOPp->mkMmUnit__DOT__y___05Fh1155391 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1155481) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1155482));
    vlTOPp->mkMmUnit__DOT__y___05Fh1375538 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1375628) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1375629));
    vlTOPp->mkMmUnit__DOT__y___05Fh1595685 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1595775) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1595776));
    vlTOPp->mkMmUnit__DOT__y___05Fh1815855 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1815945) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1815946));
    vlTOPp->mkMmUnit__DOT__y___05Fh2036002 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2036092) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2036093));
    vlTOPp->mkMmUnit__DOT__y___05Fh2256149 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2256239) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2256240));
    vlTOPp->mkMmUnit__DOT__y___05Fh3275866 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3275504) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3275503));
    vlTOPp->mkMmUnit__DOT__y___05Fh3055719 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3055357) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3055356));
    vlTOPp->mkMmUnit__DOT__y___05Fh2835572 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2835210) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2835209));
    vlTOPp->mkMmUnit__DOT__y___05Fh2615402 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2615040) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2615039));
    vlTOPp->mkMmUnit__DOT__y___05Fh854180 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh853818) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh853817));
    vlTOPp->mkMmUnit__DOT__y___05Fh413880 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh413518) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh413517));
    vlTOPp->mkMmUnit__DOT__y___05Fh1074350 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1073988) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1073987));
    vlTOPp->mkMmUnit__DOT__y___05Fh3496013 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3495651) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3495650));
    vlTOPp->mkMmUnit__DOT__y___05Fh193726 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh193364) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh193363));
    vlTOPp->mkMmUnit__DOT__y___05Fh1294497 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1294135) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1294134));
    vlTOPp->mkMmUnit__DOT__y___05Fh634030 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh633668) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh633667));
    vlTOPp->mkMmUnit__DOT__y___05Fh1514644 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1514282) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1514281));
    vlTOPp->mkMmUnit__DOT__y___05Fh1734791 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1734429) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1734428));
    vlTOPp->mkMmUnit__DOT__y___05Fh1954961 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1954599) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1954598));
    vlTOPp->mkMmUnit__DOT__y___05Fh2175108 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2174746) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2174745));
    vlTOPp->mkMmUnit__DOT__y___05Fh2395255 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2394893) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2394892));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35361 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3136759) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3136760)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3136488) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3136489)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35360)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3137122 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3136760) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3136759));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32863 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2916612) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2916613)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2916341) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2916342)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32862)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2916975 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2916613) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2916612));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30365 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2696465) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2696466)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2696194) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2696195)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30364)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2696828 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2696466) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2696465));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27867 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2476295) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2476296)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2476024) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2476025)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27866)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2476658 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2476296) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2476295));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7883 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh715073) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh715074)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh714802) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh714803)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7882)));
    vlTOPp->mkMmUnit__DOT__y___05Fh715436 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh715074) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh715073));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37859 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3356906) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3356907)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3356635) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3356636)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37858)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3357269 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3356907) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3356906));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d389 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh54619) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh54620)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh54348) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh54349)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d388)));
    vlTOPp->mkMmUnit__DOT__y___05Fh54982 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh54620) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh54619));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10381 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh935243) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh935244)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh934972) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh934973)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10380)));
    vlTOPp->mkMmUnit__DOT__y___05Fh935606 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh935244) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh935243));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2887 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh274773) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh274774)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh274502) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh274503)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2886)));
    vlTOPp->mkMmUnit__DOT__y___05Fh275136 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh274774) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh274773));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5385 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh494923) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh494924)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh494652) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh494653)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5384)));
    vlTOPp->mkMmUnit__DOT__y___05Fh495286 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh494924) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh494923));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12879 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1155390) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1155391)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1155119) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1155120)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12878)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1155753 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1155391) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1155390));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15377 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1375537) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1375538)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1375266) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1375267)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15376)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1375900 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1375538) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1375537));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17875 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1595684) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1595685)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1595413) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1595414)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17874)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1596047 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1595685) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1595684));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20373 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1815854) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1815855)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1815583) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1815584)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20372)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1816217 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1815855) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1815854));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22871 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2036001) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2036002)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2035730) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2035731)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22870)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2036364 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2036002) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2036001));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25369 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2256148) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2256149)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2255877) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2255878)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25368)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2256511 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2256149) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2256148));
    vlTOPp->mkMmUnit__DOT__y___05Fh3275775 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3275865) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3275866));
    vlTOPp->mkMmUnit__DOT__y___05Fh3055628 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3055718) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3055719));
    vlTOPp->mkMmUnit__DOT__y___05Fh2835481 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2835571) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2835572));
    vlTOPp->mkMmUnit__DOT__y___05Fh2615311 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2615401) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2615402));
    vlTOPp->mkMmUnit__DOT__y___05Fh854089 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh854179) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh854180));
    vlTOPp->mkMmUnit__DOT__y___05Fh413789 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh413879) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh413880));
    vlTOPp->mkMmUnit__DOT__y___05Fh1074259 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1074349) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1074350));
    vlTOPp->mkMmUnit__DOT__y___05Fh3495922 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3496012) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3496013));
    vlTOPp->mkMmUnit__DOT__y___05Fh193635 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh193725) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh193726));
    vlTOPp->mkMmUnit__DOT__y___05Fh1294406 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1294496) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1294497));
    vlTOPp->mkMmUnit__DOT__y___05Fh633939 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh634029) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh634030));
    vlTOPp->mkMmUnit__DOT__y___05Fh1514553 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1514643) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1514644));
    vlTOPp->mkMmUnit__DOT__y___05Fh1734700 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1734790) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1734791));
    vlTOPp->mkMmUnit__DOT__y___05Fh1954870 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1954960) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1954961));
    vlTOPp->mkMmUnit__DOT__y___05Fh2175017 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2175107) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2175108));
    vlTOPp->mkMmUnit__DOT__y___05Fh2395164 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2395254) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2395255));
    vlTOPp->mkMmUnit__DOT__y___05Fh3137031 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3137121) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3137122));
    vlTOPp->mkMmUnit__DOT__y___05Fh2916884 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2916974) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2916975));
    vlTOPp->mkMmUnit__DOT__y___05Fh2696737 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2696827) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2696828));
    vlTOPp->mkMmUnit__DOT__y___05Fh2476567 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2476657) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2476658));
    vlTOPp->mkMmUnit__DOT__y___05Fh715345 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh715435) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh715436));
    vlTOPp->mkMmUnit__DOT__y___05Fh3357178 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3357268) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3357269));
    vlTOPp->mkMmUnit__DOT__y___05Fh54891 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh54981) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh54982));
    vlTOPp->mkMmUnit__DOT__y___05Fh935515 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh935605) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh935606));
    vlTOPp->mkMmUnit__DOT__y___05Fh275045 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh275135) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh275136));
    vlTOPp->mkMmUnit__DOT__y___05Fh495195 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh495285) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh495286));
    vlTOPp->mkMmUnit__DOT__y___05Fh1155662 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1155752) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1155753));
    vlTOPp->mkMmUnit__DOT__y___05Fh1375809 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1375899) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1375900));
    vlTOPp->mkMmUnit__DOT__y___05Fh1595956 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1596046) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1596047));
    vlTOPp->mkMmUnit__DOT__y___05Fh1816126 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1816216) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1816217));
    vlTOPp->mkMmUnit__DOT__y___05Fh2036273 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2036363) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2036364));
    vlTOPp->mkMmUnit__DOT__y___05Fh2256420 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2256510) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2256511));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36943 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3275774) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3275775)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3275503) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3275504)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36942)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3276137 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3275775) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3275774));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34445 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3055627) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3055628)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3055356) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3055357)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34444)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3055990 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3055628) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3055627));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31947 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2835480) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2835481)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2835209) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2835210)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31946)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2835843 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2835481) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2835480));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29449 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2615310) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2615311)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2615039) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2615040)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29448)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2615673 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2615311) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2615310));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9465 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh854088) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh854089)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh853817) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh853818)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9464)));
    vlTOPp->mkMmUnit__DOT__y___05Fh854451 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh854089) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh854088));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4469 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh413788) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh413789)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh413517) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh413518)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4468)));
    vlTOPp->mkMmUnit__DOT__y___05Fh414151 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh413789) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh413788));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11963 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1074258) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1074259)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1073987) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1073988)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11962)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1074621 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1074259) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1074258));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39441 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3495921) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3495922)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3495650) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3495651)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39440)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3496284 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3495922) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3495921));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1971 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh193634) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh193635)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh193363) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh193364)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1970)));
    vlTOPp->mkMmUnit__DOT__y___05Fh193997 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh193635) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh193634));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14461 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1294405) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1294406)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1294134) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1294135)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14460)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1294768 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1294406) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1294405));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6967 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh633938) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh633939)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh633667) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh633668)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6966)));
    vlTOPp->mkMmUnit__DOT__y___05Fh634301 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh633939) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh633938));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16959 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1514552) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1514553)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1514281) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1514282)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16958)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1514915 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1514553) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1514552));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19457 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1734699) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1734700)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1734428) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1734429)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19456)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1735062 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1734700) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1734699));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21955 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1954869) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1954870)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1954598) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1954599)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21954)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1955232 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1954870) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1954869));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24453 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2175016) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2175017)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2174745) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2174746)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24452)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2175379 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2175017) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2175016));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26951 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2395163) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2395164)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2394892) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2394893)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26950)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2395526 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2395164) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2395163));
    vlTOPp->mkMmUnit__DOT__y___05Fh3137393 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3137031) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3137030));
    vlTOPp->mkMmUnit__DOT__y___05Fh2917246 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2916884) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2916883));
    vlTOPp->mkMmUnit__DOT__y___05Fh2697099 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2696737) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2696736));
    vlTOPp->mkMmUnit__DOT__y___05Fh2476929 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2476567) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2476566));
    vlTOPp->mkMmUnit__DOT__y___05Fh715707 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh715345) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh715344));
    vlTOPp->mkMmUnit__DOT__y___05Fh3357540 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3357178) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3357177));
    vlTOPp->mkMmUnit__DOT__y___05Fh55253 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh54891) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh54890));
    vlTOPp->mkMmUnit__DOT__y___05Fh935877 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh935515) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh935514));
    vlTOPp->mkMmUnit__DOT__y___05Fh275407 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh275045) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh275044));
    vlTOPp->mkMmUnit__DOT__y___05Fh495557 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh495195) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh495194));
    vlTOPp->mkMmUnit__DOT__y___05Fh1156024 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1155662) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1155661));
    vlTOPp->mkMmUnit__DOT__y___05Fh1376171 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1375809) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1375808));
    vlTOPp->mkMmUnit__DOT__y___05Fh1596318 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1595956) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1595955));
    vlTOPp->mkMmUnit__DOT__y___05Fh1816488 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1816126) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1816125));
    vlTOPp->mkMmUnit__DOT__y___05Fh2036635 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2036273) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2036272));
    vlTOPp->mkMmUnit__DOT__y___05Fh2256782 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2256420) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2256419));
    vlTOPp->mkMmUnit__DOT__y___05Fh3276046 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3276136) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3276137));
    vlTOPp->mkMmUnit__DOT__y___05Fh3055899 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3055989) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3055990));
    vlTOPp->mkMmUnit__DOT__y___05Fh2835752 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2835842) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2835843));
    vlTOPp->mkMmUnit__DOT__y___05Fh2615582 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2615672) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2615673));
    vlTOPp->mkMmUnit__DOT__y___05Fh854360 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh854450) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh854451));
    vlTOPp->mkMmUnit__DOT__y___05Fh414060 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh414150) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh414151));
    vlTOPp->mkMmUnit__DOT__y___05Fh1074530 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1074620) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1074621));
    vlTOPp->mkMmUnit__DOT__y___05Fh3496193 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3496283) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3496284));
    vlTOPp->mkMmUnit__DOT__y___05Fh193906 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh193996) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh193997));
    vlTOPp->mkMmUnit__DOT__y___05Fh1294677 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1294767) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1294768));
    vlTOPp->mkMmUnit__DOT__y___05Fh634210 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh634300) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh634301));
    vlTOPp->mkMmUnit__DOT__y___05Fh1514824 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1514914) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1514915));
    vlTOPp->mkMmUnit__DOT__y___05Fh1734971 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1735061) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1735062));
    vlTOPp->mkMmUnit__DOT__y___05Fh1955141 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1955231) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1955232));
    vlTOPp->mkMmUnit__DOT__y___05Fh2175288 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2175378) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2175379));
    vlTOPp->mkMmUnit__DOT__y___05Fh2395435 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2395525) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2395526));
    vlTOPp->mkMmUnit__DOT__y___05Fh3137302 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3137392) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3137393));
    vlTOPp->mkMmUnit__DOT__y___05Fh2917155 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2917245) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2917246));
    vlTOPp->mkMmUnit__DOT__y___05Fh2697008 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2697098) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2697099));
    vlTOPp->mkMmUnit__DOT__y___05Fh2476838 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2476928) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2476929));
    vlTOPp->mkMmUnit__DOT__y___05Fh715616 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh715706) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh715707));
    vlTOPp->mkMmUnit__DOT__y___05Fh3357449 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3357539) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3357540));
    vlTOPp->mkMmUnit__DOT__y___05Fh55162 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh55252) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh55253));
    vlTOPp->mkMmUnit__DOT__y___05Fh935786 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh935876) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh935877));
    vlTOPp->mkMmUnit__DOT__y___05Fh275316 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh275406) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh275407));
    vlTOPp->mkMmUnit__DOT__y___05Fh495466 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh495556) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh495557));
    vlTOPp->mkMmUnit__DOT__y___05Fh1155933 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1156023) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1156024));
    vlTOPp->mkMmUnit__DOT__y___05Fh1376080 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1376170) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1376171));
    vlTOPp->mkMmUnit__DOT__y___05Fh1596227 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1596317) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1596318));
    vlTOPp->mkMmUnit__DOT__y___05Fh1816397 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1816487) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1816488));
    vlTOPp->mkMmUnit__DOT__y___05Fh2036544 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2036634) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2036635));
    vlTOPp->mkMmUnit__DOT__y___05Fh2256691 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2256781) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2256782));
    vlTOPp->mkMmUnit__DOT__y___05Fh3276408 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3276046) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3276045));
    vlTOPp->mkMmUnit__DOT__y___05Fh3056261 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3055899) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3055898));
    vlTOPp->mkMmUnit__DOT__y___05Fh2836114 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2835752) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2835751));
    vlTOPp->mkMmUnit__DOT__y___05Fh2615944 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2615582) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2615581));
    vlTOPp->mkMmUnit__DOT__y___05Fh854722 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh854360) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh854359));
    vlTOPp->mkMmUnit__DOT__y___05Fh414422 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh414060) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh414059));
    vlTOPp->mkMmUnit__DOT__y___05Fh1074892 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1074530) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1074529));
    vlTOPp->mkMmUnit__DOT__y___05Fh3496555 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3496193) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3496192));
    vlTOPp->mkMmUnit__DOT__y___05Fh194268 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh193906) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh193905));
    vlTOPp->mkMmUnit__DOT__y___05Fh1295039 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1294677) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1294676));
    vlTOPp->mkMmUnit__DOT__y___05Fh634572 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh634210) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh634209));
    vlTOPp->mkMmUnit__DOT__y___05Fh1515186 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1514824) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1514823));
    vlTOPp->mkMmUnit__DOT__y___05Fh1735333 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1734971) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1734970));
    vlTOPp->mkMmUnit__DOT__y___05Fh1955503 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1955141) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1955140));
    vlTOPp->mkMmUnit__DOT__y___05Fh2175650 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2175288) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2175287));
    vlTOPp->mkMmUnit__DOT__y___05Fh2395797 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2395435) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2395434));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35362 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3137301) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3137302)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3137030) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3137031)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35361)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3137664 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3137302) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3137301));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32864 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2917154) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2917155)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2916883) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2916884)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32863)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2917517 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2917155) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2917154));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30366 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2697007) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2697008)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2696736) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2696737)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30365)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2697370 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2697008) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2697007));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27868 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2476837) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2476838)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2476566) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2476567)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27867)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2477200 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2476838) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2476837));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7884 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh715615) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh715616)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh715344) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh715345)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7883)));
    vlTOPp->mkMmUnit__DOT__y___05Fh715978 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh715616) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh715615));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37860 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3357448) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3357449)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3357177) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3357178)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37859)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3357811 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3357449) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3357448));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d390 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh55161) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh55162)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh54890) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh54891)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d389)));
    vlTOPp->mkMmUnit__DOT__y___05Fh55524 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh55162) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh55161));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10382 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh935785) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh935786)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh935514) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh935515)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10381)));
    vlTOPp->mkMmUnit__DOT__y___05Fh936148 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh935786) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh935785));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2888 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh275315) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh275316)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh275044) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh275045)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2887)));
    vlTOPp->mkMmUnit__DOT__y___05Fh275678 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh275316) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh275315));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5386 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh495465) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh495466)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh495194) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh495195)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5385)));
    vlTOPp->mkMmUnit__DOT__y___05Fh495828 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh495466) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh495465));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12880 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1155932) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1155933)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1155661) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1155662)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12879)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1156295 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1155933) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1155932));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15378 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1376079) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1376080)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1375808) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1375809)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15377)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1376442 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1376080) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1376079));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17876 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1596226) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1596227)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1595955) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1595956)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17875)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1596589 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1596227) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1596226));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20374 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1816396) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1816397)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1816125) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1816126)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20373)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1816759 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1816397) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1816396));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22872 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2036543) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2036544)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2036272) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2036273)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22871)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2036906 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2036544) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2036543));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25370 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2256690) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2256691)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2256419) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2256420)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25369)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2257053 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2256691) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2256690));
    vlTOPp->mkMmUnit__DOT__y___05Fh3276317 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3276407) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3276408));
    vlTOPp->mkMmUnit__DOT__y___05Fh3056170 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3056260) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3056261));
    vlTOPp->mkMmUnit__DOT__y___05Fh2836023 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2836113) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2836114));
    vlTOPp->mkMmUnit__DOT__y___05Fh2615853 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2615943) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2615944));
    vlTOPp->mkMmUnit__DOT__y___05Fh854631 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh854721) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh854722));
    vlTOPp->mkMmUnit__DOT__y___05Fh414331 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh414421) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh414422));
    vlTOPp->mkMmUnit__DOT__y___05Fh1074801 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1074891) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1074892));
    vlTOPp->mkMmUnit__DOT__y___05Fh3496464 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3496554) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3496555));
    vlTOPp->mkMmUnit__DOT__y___05Fh194177 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh194267) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh194268));
    vlTOPp->mkMmUnit__DOT__y___05Fh1294948 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1295038) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1295039));
    vlTOPp->mkMmUnit__DOT__y___05Fh634481 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh634571) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh634572));
    vlTOPp->mkMmUnit__DOT__y___05Fh1515095 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1515185) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1515186));
    vlTOPp->mkMmUnit__DOT__y___05Fh1735242 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1735332) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1735333));
    vlTOPp->mkMmUnit__DOT__y___05Fh1955412 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1955502) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1955503));
    vlTOPp->mkMmUnit__DOT__y___05Fh2175559 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2175649) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2175650));
    vlTOPp->mkMmUnit__DOT__y___05Fh2395706 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2395796) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2395797));
    vlTOPp->mkMmUnit__DOT__y___05Fh3137573 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3137663) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3137664));
    vlTOPp->mkMmUnit__DOT__y___05Fh2917426 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2917516) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2917517));
    vlTOPp->mkMmUnit__DOT__y___05Fh2697279 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2697369) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2697370));
    vlTOPp->mkMmUnit__DOT__y___05Fh2477109 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2477199) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2477200));
    vlTOPp->mkMmUnit__DOT__y___05Fh715887 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh715977) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh715978));
    vlTOPp->mkMmUnit__DOT__y___05Fh3357720 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3357810) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3357811));
    vlTOPp->mkMmUnit__DOT__y___05Fh55433 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh55523) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh55524));
    vlTOPp->mkMmUnit__DOT__y___05Fh936057 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh936147) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh936148));
    vlTOPp->mkMmUnit__DOT__y___05Fh275587 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh275677) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh275678));
    vlTOPp->mkMmUnit__DOT__y___05Fh495737 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh495827) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh495828));
    vlTOPp->mkMmUnit__DOT__y___05Fh1156204 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1156294) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1156295));
    vlTOPp->mkMmUnit__DOT__y___05Fh1376351 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1376441) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1376442));
    vlTOPp->mkMmUnit__DOT__y___05Fh1596498 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1596588) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1596589));
    vlTOPp->mkMmUnit__DOT__y___05Fh1816668 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1816758) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1816759));
    vlTOPp->mkMmUnit__DOT__y___05Fh2036815 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2036905) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2036906));
    vlTOPp->mkMmUnit__DOT__y___05Fh2256962 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2257052) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2257053));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36944 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3276316) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3276317)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3276045) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3276046)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36943)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3276679 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3276317) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3276316));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34446 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3056169) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3056170)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3055898) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3055899)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34445)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3056532 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3056170) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3056169));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31948 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2836022) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2836023)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2835751) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2835752)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31947)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2836385 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2836023) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2836022));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29450 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2615852) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2615853)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2615581) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2615582)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29449)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2616215 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2615853) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2615852));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9466 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh854630) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh854631)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh854359) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh854360)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9465)));
    vlTOPp->mkMmUnit__DOT__y___05Fh854993 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh854631) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh854630));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4470 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh414330) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh414331)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh414059) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh414060)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4469)));
    vlTOPp->mkMmUnit__DOT__y___05Fh414693 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh414331) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh414330));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11964 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1074800) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1074801)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1074529) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1074530)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11963)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1075163 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1074801) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1074800));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39442 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3496463) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3496464)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3496192) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3496193)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39441)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3496826 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3496464) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3496463));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1972 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh194176) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh194177)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh193905) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh193906)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1971)));
    vlTOPp->mkMmUnit__DOT__y___05Fh194539 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh194177) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh194176));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14462 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1294947) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1294948)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1294676) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1294677)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14461)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1295310 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1294948) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1294947));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6968 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh634480) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh634481)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh634209) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh634210)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6967)));
    vlTOPp->mkMmUnit__DOT__y___05Fh634843 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh634481) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh634480));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16960 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1515094) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1515095)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1514823) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1514824)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16959)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1515457 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1515095) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1515094));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19458 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1735241) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1735242)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1734970) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1734971)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19457)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1735604 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1735242) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1735241));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21956 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1955411) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1955412)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1955140) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1955141)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21955)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1955774 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1955412) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1955411));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24454 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2175558) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2175559)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2175287) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2175288)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24453)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2175921 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2175559) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2175558));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26952 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2395705) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2395706)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2395434) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2395435)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26951)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2396068 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2395706) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2395705));
    vlTOPp->mkMmUnit__DOT__y___05Fh3137935 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3137573) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3137572));
    vlTOPp->mkMmUnit__DOT__y___05Fh2917788 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2917426) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2917425));
    vlTOPp->mkMmUnit__DOT__y___05Fh2697641 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2697279) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2697278));
    vlTOPp->mkMmUnit__DOT__y___05Fh2477471 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2477109) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2477108));
    vlTOPp->mkMmUnit__DOT__y___05Fh716249 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh715887) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh715886));
    vlTOPp->mkMmUnit__DOT__y___05Fh3358082 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3357720) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3357719));
    vlTOPp->mkMmUnit__DOT__y___05Fh55795 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh55433) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh55432));
    vlTOPp->mkMmUnit__DOT__y___05Fh936419 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh936057) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh936056));
    vlTOPp->mkMmUnit__DOT__y___05Fh275949 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh275587) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh275586));
    vlTOPp->mkMmUnit__DOT__y___05Fh496099 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh495737) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh495736));
    vlTOPp->mkMmUnit__DOT__y___05Fh1156566 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1156204) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1156203));
    vlTOPp->mkMmUnit__DOT__y___05Fh1376713 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1376351) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1376350));
    vlTOPp->mkMmUnit__DOT__y___05Fh1596860 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1596498) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1596497));
    vlTOPp->mkMmUnit__DOT__y___05Fh1817030 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1816668) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1816667));
    vlTOPp->mkMmUnit__DOT__y___05Fh2037177 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2036815) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2036814));
    vlTOPp->mkMmUnit__DOT__y___05Fh2257324 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2256962) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2256961));
    vlTOPp->mkMmUnit__DOT__y___05Fh3276588 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3276678) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3276679));
    vlTOPp->mkMmUnit__DOT__y___05Fh3056441 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3056531) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3056532));
    vlTOPp->mkMmUnit__DOT__y___05Fh2836294 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2836384) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2836385));
    vlTOPp->mkMmUnit__DOT__y___05Fh2616124 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2616214) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2616215));
    vlTOPp->mkMmUnit__DOT__y___05Fh854902 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh854992) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh854993));
    vlTOPp->mkMmUnit__DOT__y___05Fh414602 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh414692) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh414693));
    vlTOPp->mkMmUnit__DOT__y___05Fh1075072 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1075162) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1075163));
    vlTOPp->mkMmUnit__DOT__y___05Fh3496735 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3496825) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3496826));
    vlTOPp->mkMmUnit__DOT__y___05Fh194448 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh194538) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh194539));
    vlTOPp->mkMmUnit__DOT__y___05Fh1295219 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1295309) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1295310));
    vlTOPp->mkMmUnit__DOT__y___05Fh634752 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh634842) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh634843));
    vlTOPp->mkMmUnit__DOT__y___05Fh1515366 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1515456) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1515457));
    vlTOPp->mkMmUnit__DOT__y___05Fh1735513 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1735603) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1735604));
    vlTOPp->mkMmUnit__DOT__y___05Fh1955683 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1955773) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1955774));
    vlTOPp->mkMmUnit__DOT__y___05Fh2175830 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2175920) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2175921));
    vlTOPp->mkMmUnit__DOT__y___05Fh2395977 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2396067) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2396068));
    vlTOPp->mkMmUnit__DOT__y___05Fh3137844 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3137934) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3137935));
    vlTOPp->mkMmUnit__DOT__y___05Fh2917697 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2917787) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2917788));
    vlTOPp->mkMmUnit__DOT__y___05Fh2697550 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2697640) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2697641));
    vlTOPp->mkMmUnit__DOT__y___05Fh2477380 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2477470) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2477471));
    vlTOPp->mkMmUnit__DOT__y___05Fh716158 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh716248) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh716249));
    vlTOPp->mkMmUnit__DOT__y___05Fh3357991 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3358081) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3358082));
    vlTOPp->mkMmUnit__DOT__y___05Fh55704 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh55794) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh55795));
    vlTOPp->mkMmUnit__DOT__y___05Fh936328 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh936418) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh936419));
    vlTOPp->mkMmUnit__DOT__y___05Fh275858 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh275948) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh275949));
    vlTOPp->mkMmUnit__DOT__y___05Fh496008 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh496098) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh496099));
    vlTOPp->mkMmUnit__DOT__y___05Fh1156475 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1156565) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1156566));
    vlTOPp->mkMmUnit__DOT__y___05Fh1376622 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1376712) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1376713));
    vlTOPp->mkMmUnit__DOT__y___05Fh1596769 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1596859) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1596860));
    vlTOPp->mkMmUnit__DOT__y___05Fh1816939 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1817029) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1817030));
    vlTOPp->mkMmUnit__DOT__y___05Fh2037086 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2037176) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2037177));
    vlTOPp->mkMmUnit__DOT__y___05Fh2257233 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2257323) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2257324));
    vlTOPp->mkMmUnit__DOT__y___05Fh3276950 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3276588) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3276587));
    vlTOPp->mkMmUnit__DOT__y___05Fh3056803 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3056441) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3056440));
    vlTOPp->mkMmUnit__DOT__y___05Fh2836656 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2836294) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2836293));
    vlTOPp->mkMmUnit__DOT__y___05Fh2616486 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2616124) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2616123));
    vlTOPp->mkMmUnit__DOT__y___05Fh855264 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh854902) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh854901));
    vlTOPp->mkMmUnit__DOT__y___05Fh414964 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh414602) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh414601));
    vlTOPp->mkMmUnit__DOT__y___05Fh1075434 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1075072) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1075071));
    vlTOPp->mkMmUnit__DOT__y___05Fh3497097 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3496735) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3496734));
    vlTOPp->mkMmUnit__DOT__y___05Fh194810 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh194448) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh194447));
    vlTOPp->mkMmUnit__DOT__y___05Fh1295581 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1295219) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1295218));
    vlTOPp->mkMmUnit__DOT__y___05Fh635114 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh634752) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh634751));
    vlTOPp->mkMmUnit__DOT__y___05Fh1515728 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1515366) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1515365));
    vlTOPp->mkMmUnit__DOT__y___05Fh1735875 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1735513) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1735512));
    vlTOPp->mkMmUnit__DOT__y___05Fh1956045 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1955683) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1955682));
    vlTOPp->mkMmUnit__DOT__y___05Fh2176192 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2175830) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2175829));
    vlTOPp->mkMmUnit__DOT__y___05Fh2396339 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2395977) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2395976));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35363 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3137843) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3137844)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3137572) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3137573)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35362)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3138206 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3137844) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3137843));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32865 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2917696) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2917697)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2917425) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2917426)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32864)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2918059 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2917697) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2917696));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30367 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2697549) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2697550)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2697278) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2697279)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30366)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2697912 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2697550) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2697549));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27869 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2477379) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2477380)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2477108) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2477109)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27868)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2477742 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2477380) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2477379));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7885 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh716157) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh716158)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh715886) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh715887)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7884)));
    vlTOPp->mkMmUnit__DOT__y___05Fh716520 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh716158) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh716157));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37861 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3357990) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3357991)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3357719) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3357720)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37860)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3358353 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3357991) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3357990));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d391 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh55703) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh55704)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh55432) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh55433)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d390)));
    vlTOPp->mkMmUnit__DOT__y___05Fh56066 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh55704) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh55703));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10383 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh936327) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh936328)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh936056) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh936057)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10382)));
    vlTOPp->mkMmUnit__DOT__y___05Fh936690 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh936328) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh936327));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2889 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh275857) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh275858)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh275586) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh275587)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2888)));
    vlTOPp->mkMmUnit__DOT__y___05Fh276220 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh275858) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh275857));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5387 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh496007) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh496008)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh495736) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh495737)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5386)));
    vlTOPp->mkMmUnit__DOT__y___05Fh496370 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh496008) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh496007));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12881 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1156474) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1156475)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1156203) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1156204)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12880)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1156837 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1156475) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1156474));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15379 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1376621) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1376622)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1376350) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1376351)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15378)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1376984 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1376622) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1376621));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17877 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1596768) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1596769)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1596497) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1596498)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17876)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1597131 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1596769) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1596768));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20375 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1816938) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1816939)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1816667) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1816668)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20374)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1817301 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1816939) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1816938));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22873 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2037085) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2037086)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2036814) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2036815)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22872)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2037448 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2037086) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2037085));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25371 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2257232) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2257233)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2256961) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2256962)) 
                         << 0xcU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25370)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2257595 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2257233) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2257232));
    vlTOPp->mkMmUnit__DOT__y___05Fh3276859 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                >> 0xaU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3276950)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3056712 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                >> 0xaU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3056803)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2836565 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                >> 0xaU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2836656)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2616395 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                >> 0xaU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2616486)));
    vlTOPp->mkMmUnit__DOT__y___05Fh855173 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                    >> 0xaU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh855264)));
    vlTOPp->mkMmUnit__DOT__y___05Fh414873 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                    >> 0xaU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh414964)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1075343 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                >> 0xaU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1075434)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3497006 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                >> 0xaU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3497097)));
    vlTOPp->mkMmUnit__DOT__y___05Fh194719 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                    >> 0xaU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh194810)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1295490 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                >> 0xaU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1295581)));
    vlTOPp->mkMmUnit__DOT__y___05Fh635023 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                    >> 0xaU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh635114)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1515637 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                >> 0xaU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1515728)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1735784 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                >> 0xaU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1735875)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1955954 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                >> 0xaU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1956045)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2176101 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                >> 0xaU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2176192)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2396248 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                >> 0xaU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2396339)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3138115 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3138205) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3138206));
    vlTOPp->mkMmUnit__DOT__y___05Fh2917968 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2918058) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2918059));
    vlTOPp->mkMmUnit__DOT__y___05Fh2697821 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2697911) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2697912));
    vlTOPp->mkMmUnit__DOT__y___05Fh2477651 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2477741) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2477742));
    vlTOPp->mkMmUnit__DOT__y___05Fh716429 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh716519) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh716520));
    vlTOPp->mkMmUnit__DOT__y___05Fh3358262 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3358352) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3358353));
    vlTOPp->mkMmUnit__DOT__y___05Fh55975 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh56065) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh56066));
    vlTOPp->mkMmUnit__DOT__y___05Fh936599 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh936689) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh936690));
    vlTOPp->mkMmUnit__DOT__y___05Fh276129 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh276219) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh276220));
    vlTOPp->mkMmUnit__DOT__y___05Fh496279 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh496369) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh496370));
    vlTOPp->mkMmUnit__DOT__y___05Fh1156746 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1156836) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1156837));
    vlTOPp->mkMmUnit__DOT__y___05Fh1376893 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1376983) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1376984));
    vlTOPp->mkMmUnit__DOT__y___05Fh1597040 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1597130) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1597131));
    vlTOPp->mkMmUnit__DOT__y___05Fh1817210 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1817300) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1817301));
    vlTOPp->mkMmUnit__DOT__y___05Fh2037357 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2037447) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2037448));
    vlTOPp->mkMmUnit__DOT__y___05Fh2257504 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2257594) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2257595));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36945 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3276859) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3276587) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3276588)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36944)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3277130 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3276859) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34447 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3056712) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3056440) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3056441)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34446)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3056983 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3056712) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31949 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2836565) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2836293) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2836294)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31948)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2836836 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2836565) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29451 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2616395) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2616123) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2616124)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29450)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2616666 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2616395) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9467 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh855173) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh854901) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh854902)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9466)));
    vlTOPp->mkMmUnit__DOT__y___05Fh855444 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh855173) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4471 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh414873) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh414601) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh414602)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4470)));
    vlTOPp->mkMmUnit__DOT__y___05Fh415144 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh414873) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11965 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1075343) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1075071) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1075072)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11964)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1075614 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1075343) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39443 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3497006) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3496734) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3496735)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39442)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3497277 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3497006) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1973 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh194719) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh194447) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh194448)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1972)));
    vlTOPp->mkMmUnit__DOT__y___05Fh194990 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh194719) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14463 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1295490) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1295218) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1295219)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14462)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1295761 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1295490) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6969 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh635023) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh634751) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh634752)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6968)));
    vlTOPp->mkMmUnit__DOT__y___05Fh635294 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh635023) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16961 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1515637) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1515365) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1515366)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16960)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1515908 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1515637) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19459 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1735784) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1735512) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1735513)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19458)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1736055 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1735784) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21957 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1955954) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1955682) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1955683)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21956)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1956225 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1955954) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24455 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2176101) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2175829) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2175830)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24454)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2176372 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2176101) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26953 
        = ((0x800U & ((0xfffff800U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884)) 
                      ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2396248) 
                         << 0xbU))) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2395976) 
                                         ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2395977)) 
                                        << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26952)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2396519 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2396248) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                 >> 0xbU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3138477 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3138115) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3138114));
    vlTOPp->mkMmUnit__DOT__y___05Fh2918330 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2917968) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2917967));
    vlTOPp->mkMmUnit__DOT__y___05Fh2698183 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2697821) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2697820));
    vlTOPp->mkMmUnit__DOT__y___05Fh2478013 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2477651) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2477650));
    vlTOPp->mkMmUnit__DOT__y___05Fh716791 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh716429) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh716428));
    vlTOPp->mkMmUnit__DOT__y___05Fh3358624 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3358262) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3358261));
    vlTOPp->mkMmUnit__DOT__y___05Fh56337 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh55975) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh55974));
    vlTOPp->mkMmUnit__DOT__y___05Fh936961 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh936599) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh936598));
    vlTOPp->mkMmUnit__DOT__y___05Fh276491 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh276129) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh276128));
    vlTOPp->mkMmUnit__DOT__y___05Fh496641 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh496279) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh496278));
    vlTOPp->mkMmUnit__DOT__y___05Fh1157108 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1156746) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1156745));
    vlTOPp->mkMmUnit__DOT__y___05Fh1377255 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1376893) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1376892));
    vlTOPp->mkMmUnit__DOT__y___05Fh1597402 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1597040) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1597039));
    vlTOPp->mkMmUnit__DOT__y___05Fh1817572 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1817210) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1817209));
    vlTOPp->mkMmUnit__DOT__y___05Fh2037719 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2037357) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2037356));
    vlTOPp->mkMmUnit__DOT__y___05Fh2257866 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2257504) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2257503));
    vlTOPp->mkMmUnit__DOT__y___05Fh3277401 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3277130) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3057254 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3056983) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2837107 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2836836) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2616937 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2616666) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh855715 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh855444) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh415415 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh415144) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1075885 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1075614) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3497548 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3497277) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh195261 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh194990) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1296032 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1295761) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh635565 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh635294) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1516179 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1515908) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1736326 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1736055) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1956496 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1956225) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2176643 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2176372) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2396790 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2396519) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3138386 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3138476) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3138477));
    vlTOPp->mkMmUnit__DOT__y___05Fh2918239 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2918329) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2918330));
    vlTOPp->mkMmUnit__DOT__y___05Fh2698092 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2698182) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2698183));
    vlTOPp->mkMmUnit__DOT__y___05Fh2477922 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2478012) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2478013));
    vlTOPp->mkMmUnit__DOT__y___05Fh716700 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh716790) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh716791));
    vlTOPp->mkMmUnit__DOT__y___05Fh3358533 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3358623) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3358624));
    vlTOPp->mkMmUnit__DOT__y___05Fh56246 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh56336) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh56337));
    vlTOPp->mkMmUnit__DOT__y___05Fh936870 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh936960) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh936961));
    vlTOPp->mkMmUnit__DOT__y___05Fh276400 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh276490) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh276491));
    vlTOPp->mkMmUnit__DOT__y___05Fh496550 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh496640) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh496641));
    vlTOPp->mkMmUnit__DOT__y___05Fh1157017 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1157107) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1157108));
    vlTOPp->mkMmUnit__DOT__y___05Fh1377164 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1377254) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1377255));
    vlTOPp->mkMmUnit__DOT__y___05Fh1597311 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1597401) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1597402));
    vlTOPp->mkMmUnit__DOT__y___05Fh1817481 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1817571) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1817572));
    vlTOPp->mkMmUnit__DOT__y___05Fh2037628 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2037718) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2037719));
    vlTOPp->mkMmUnit__DOT__y___05Fh2257775 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2257865) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2257866));
    vlTOPp->mkMmUnit__DOT__y___05Fh3277672 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3277401) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3057525 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3057254) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2837378 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2837107) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2617208 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2616937) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh855986 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh855715) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh415686 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh415415) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1076156 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1075885) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3497819 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3497548) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh195532 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh195261) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1296303 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1296032) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh635836 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh635565) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1516450 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1516179) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1736597 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1736326) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1956767 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1956496) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2176914 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2176643) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2397061 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2396790) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35364 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3138385) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3138386)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3138114) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3138115)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35363)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3138748 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3138386) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3138385));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32866 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2918238) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2918239)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2917967) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2917968)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32865)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2918601 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2918239) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2918238));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30368 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2698091) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2698092)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2697820) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2697821)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30367)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2698454 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2698092) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2698091));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27870 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2477921) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2477922)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2477650) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2477651)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27869)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2478284 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2477922) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2477921));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7886 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh716699) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh716700)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh716428) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh716429)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7885)));
    vlTOPp->mkMmUnit__DOT__y___05Fh717062 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh716700) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh716699));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37862 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3358532) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3358533)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3358261) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3358262)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37861)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3358895 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3358533) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3358532));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d392 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh56245) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh56246)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh55974) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh55975)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d391)));
    vlTOPp->mkMmUnit__DOT__y___05Fh56608 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh56246) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh56245));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10384 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh936869) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh936870)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh936598) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh936599)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10383)));
    vlTOPp->mkMmUnit__DOT__y___05Fh937232 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh936870) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh936869));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2890 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh276399) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh276400)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh276128) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh276129)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2889)));
    vlTOPp->mkMmUnit__DOT__y___05Fh276762 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh276400) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh276399));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5388 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh496549) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh496550)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh496278) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh496279)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5387)));
    vlTOPp->mkMmUnit__DOT__y___05Fh496912 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh496550) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh496549));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12882 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1157016) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1157017)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1156745) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1156746)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12881)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1157379 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1157017) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1157016));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15380 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1377163) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1377164)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1376892) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1376893)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15379)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1377526 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1377164) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1377163));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17878 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1597310) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1597311)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1597039) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1597040)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17877)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1597673 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1597311) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1597310));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20376 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1817480) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1817481)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1817209) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1817210)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20375)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1817843 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1817481) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1817480));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22874 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2037627) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2037628)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2037356) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2037357)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22873)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2037990 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2037628) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2037627));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25372 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2257774) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2257775)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2257503) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2257504)) 
                         << 0xeU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25371)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2258137 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2257775) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2257774));
    vlTOPp->mkMmUnit__DOT__y___05Fh3277943 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3277672) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3057796 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3057525) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2837649 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2837378) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2617479 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2617208) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh856257 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh855986) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh415957 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh415686) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1076427 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1076156) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3498090 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3497819) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh195803 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh195532) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1296574 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1296303) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh636107 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh635836) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900) 
                                                >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1516721 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1516450) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1736868 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1736597) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1957038 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1956767) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2177185 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2176914) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2397332 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2397061) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884) 
                                                 >> 0xeU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3138657 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3138747) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3138748));
    vlTOPp->mkMmUnit__DOT__y___05Fh2918510 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2918600) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2918601));
    vlTOPp->mkMmUnit__DOT__y___05Fh2698363 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2698453) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2698454));
    vlTOPp->mkMmUnit__DOT__y___05Fh2478193 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2478283) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2478284));
    vlTOPp->mkMmUnit__DOT__y___05Fh716971 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh717061) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh717062));
    vlTOPp->mkMmUnit__DOT__y___05Fh3358804 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3358894) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3358895));
    vlTOPp->mkMmUnit__DOT__y___05Fh56517 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh56607) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh56608));
    vlTOPp->mkMmUnit__DOT__y___05Fh937141 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh937231) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh937232));
    vlTOPp->mkMmUnit__DOT__y___05Fh276671 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh276761) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh276762));
    vlTOPp->mkMmUnit__DOT__y___05Fh496821 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh496911) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh496912));
    vlTOPp->mkMmUnit__DOT__y___05Fh1157288 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1157378) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1157379));
    vlTOPp->mkMmUnit__DOT__y___05Fh1377435 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1377525) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1377526));
    vlTOPp->mkMmUnit__DOT__y___05Fh1597582 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1597672) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1597673));
    vlTOPp->mkMmUnit__DOT__y___05Fh1817752 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1817842) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1817843));
    vlTOPp->mkMmUnit__DOT__y___05Fh2037899 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2037989) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2037990));
    vlTOPp->mkMmUnit__DOT__y___05Fh2258046 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2258136) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2258137));
    vlTOPp->mkMmUnit__DOT__product___05Fh3260070 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3277943) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3277672) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3277401) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3277130) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36945)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh3039923 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3057796) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3057525) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3057254) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3056983) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34447)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh2819776 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2837649) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2837378) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2837107) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2836836) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31949)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh2599606 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2617479) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2617208) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2616937) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2616666) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29451)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh838384 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh856257) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh855986) 
                                                           << 0xeU))) 
                                                      | ((0x2000U 
                                                          & ((0xffffe000U 
                                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398)) 
                                                             ^ 
                                                             ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh855715) 
                                                              << 0xdU))) 
                                                         | ((0x1000U 
                                                             & ((0xfffff000U 
                                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398)) 
                                                                ^ 
                                                                ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh855444) 
                                                                 << 0xcU))) 
                                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9467)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh398084 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh415957) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh415686) 
                                                           << 0xeU))) 
                                                      | ((0x2000U 
                                                          & ((0xffffe000U 
                                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402)) 
                                                             ^ 
                                                             ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh415415) 
                                                              << 0xdU))) 
                                                         | ((0x1000U 
                                                             & ((0xfffff000U 
                                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402)) 
                                                                ^ 
                                                                ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh415144) 
                                                                 << 0xcU))) 
                                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4471)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh1058554 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1076427) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1076156) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1075885) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1075614) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11965)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh3480217 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3498090) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3497819) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3497548) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3497277) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39443)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh177930 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh195803) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh195532) 
                                                           << 0xeU))) 
                                                      | ((0x2000U 
                                                          & ((0xffffe000U 
                                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904)) 
                                                             ^ 
                                                             ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh195261) 
                                                              << 0xdU))) 
                                                         | ((0x1000U 
                                                             & ((0xfffff000U 
                                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904)) 
                                                                ^ 
                                                                ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh194990) 
                                                                 << 0xcU))) 
                                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1973)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh1278701 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1296574) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1296303) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1296032) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1295761) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14463)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh618234 = (
                                                   (0x8000U 
                                                    & ((0xffff8000U 
                                                        & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh636107) 
                                                        << 0xfU))) 
                                                   | ((0x4000U 
                                                       & ((0xffffc000U 
                                                           & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh635836) 
                                                           << 0xeU))) 
                                                      | ((0x2000U 
                                                          & ((0xffffe000U 
                                                              & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900)) 
                                                             ^ 
                                                             ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh635565) 
                                                              << 0xdU))) 
                                                         | ((0x1000U 
                                                             & ((0xfffff000U 
                                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900)) 
                                                                ^ 
                                                                ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh635294) 
                                                                 << 0xcU))) 
                                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6969)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh1498848 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1516721) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1516450) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1516179) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1515908) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16961)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh1718995 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1736868) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1736597) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1736326) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1736055) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19459)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh1939165 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1957038) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1956767) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1956496) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1956225) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21957)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh2159312 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2177185) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2176914) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2176643) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2176372) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24455)))));
    vlTOPp->mkMmUnit__DOT__product___05Fh2379459 = 
        ((0x8000U & ((0xffff8000U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884)) 
                     ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2397332) 
                        << 0xfU))) | ((0x4000U & ((0xffffc000U 
                                                   & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884)) 
                                                  ^ 
                                                  ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2397061) 
                                                   << 0xeU))) 
                                      | ((0x2000U & 
                                          ((0xffffe000U 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884)) 
                                           ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2396790) 
                                              << 0xdU))) 
                                         | ((0x1000U 
                                             & ((0xfffff000U 
                                                 & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884)) 
                                                ^ ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2396519) 
                                                   << 0xcU))) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26953)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3139019 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3138657) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3138656));
    vlTOPp->mkMmUnit__DOT__y___05Fh2918872 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2918510) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2918509));
    vlTOPp->mkMmUnit__DOT__y___05Fh2698725 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2698363) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2698362));
    vlTOPp->mkMmUnit__DOT__y___05Fh2478555 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2478193) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2478192));
    vlTOPp->mkMmUnit__DOT__y___05Fh717333 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh716971) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh716970));
    vlTOPp->mkMmUnit__DOT__y___05Fh3359166 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3358804) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3358803));
    vlTOPp->mkMmUnit__DOT__y___05Fh56879 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh56517) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh56516));
    vlTOPp->mkMmUnit__DOT__y___05Fh937503 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh937141) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh937140));
    vlTOPp->mkMmUnit__DOT__y___05Fh277033 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh276671) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh276670));
    vlTOPp->mkMmUnit__DOT__y___05Fh497183 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh496821) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh496820));
    vlTOPp->mkMmUnit__DOT__y___05Fh1157650 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1157288) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1157287));
    vlTOPp->mkMmUnit__DOT__y___05Fh1377797 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1377435) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1377434));
    vlTOPp->mkMmUnit__DOT__y___05Fh1597944 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1597582) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1597581));
    vlTOPp->mkMmUnit__DOT__y___05Fh1818114 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1817752) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1817751));
    vlTOPp->mkMmUnit__DOT__y___05Fh2038261 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2037899) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2037898));
    vlTOPp->mkMmUnit__DOT__y___05Fh2258408 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2258046) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2258045));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3260070)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_2_6_ETC___05F_d36876));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3039923)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_2_4_ETC___05F_d34378));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2819776)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_2_1_ETC___05F_d31880));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2599606)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_2_9_ETC___05F_d29382));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh838384)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_2_23_ETC___05F_d9398));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh398084)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_2_23_ETC___05F_d4402));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1058554)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_2_1_ETC___05F_d11896));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh3480217)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_2_9_ETC___05F_d39374));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh177930)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_2_73_ETC___05F_d1904));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1278701)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_2_4_ETC___05F_d14394));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh618234)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_2_73_ETC___05F_d6900));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1498848)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_2_6_ETC___05F_d16892));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1718995)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_2_9_ETC___05F_d19390));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh1939165)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_2_1_ETC___05F_d21888));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2159312)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_2_4_ETC___05F_d24386));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956 
        = ((8U & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_B))
            ? (IData)(vlTOPp->mkMmUnit__DOT__product___05Fh2379459)
            : (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_2_6_ETC___05F_d26884));
    vlTOPp->mkMmUnit__DOT__y___05Fh3138928 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3139018) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3139019));
    vlTOPp->mkMmUnit__DOT__y___05Fh2918781 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2918871) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2918872));
    vlTOPp->mkMmUnit__DOT__y___05Fh2698634 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2698724) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2698725));
    vlTOPp->mkMmUnit__DOT__y___05Fh2478464 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2478554) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2478555));
    vlTOPp->mkMmUnit__DOT__y___05Fh717242 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh717332) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh717333));
    vlTOPp->mkMmUnit__DOT__y___05Fh3359075 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3359165) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3359166));
    vlTOPp->mkMmUnit__DOT__y___05Fh56788 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh56878) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh56879));
    vlTOPp->mkMmUnit__DOT__y___05Fh937412 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh937502) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh937503));
    vlTOPp->mkMmUnit__DOT__y___05Fh276942 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh277032) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh277033));
    vlTOPp->mkMmUnit__DOT__y___05Fh497092 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh497182) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh497183));
    vlTOPp->mkMmUnit__DOT__y___05Fh1157559 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1157649) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1157650));
    vlTOPp->mkMmUnit__DOT__y___05Fh1377706 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1377796) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1377797));
    vlTOPp->mkMmUnit__DOT__y___05Fh1597853 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1597943) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1597944));
    vlTOPp->mkMmUnit__DOT__y___05Fh1818023 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1818113) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1818114));
    vlTOPp->mkMmUnit__DOT__y___05Fh2038170 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2038260) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2038261));
    vlTOPp->mkMmUnit__DOT__y___05Fh2258317 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2258407) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2258408));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq596 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3280972 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3281063 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3280701 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3280792 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3280430 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3280521 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3280159 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3280250 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3279888 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3279979 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3279616 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3279707 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq595 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3279348 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq561 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3060825 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3060916 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3060554 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3060645 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3060283 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3060374 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3060012 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3060103 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3059741 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3059832 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3059469 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3059560 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq560 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3059201 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq526 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2840678 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2840769 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2840407 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2840498 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2840136 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2840227 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2839865 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2839956 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2839594 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2839685 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2839322 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2839413 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq525 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2839054 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq491 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2620508 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2620599 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2620237 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2620328 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2619966 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2620057 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2619695 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2619786 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2619424 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2619515 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2619152 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2619243 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq490 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2618884 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_ETC___05Fq211 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh859286 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                    >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh859377 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                    >> 0xaU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh859015 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh859106 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh858744 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh858835 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh858473 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh858564 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh858202 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh858293 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh857930 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh858021 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_ETC___05Fq210 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh857662 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_ETC___05Fq140 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh418986 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                    >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh419077 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                    >> 0xaU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh418715 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh418806 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh418444 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh418535 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh418173 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh418264 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh417902 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh417993 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh417630 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh417721 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_ETC___05Fq139 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh417362 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq246 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1079456 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1079547 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1079185 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1079276 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1078914 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1079005 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1078643 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1078734 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1078372 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1078463 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1078100 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1078191 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq245 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1077832 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq631 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3501119 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3501210 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3500848 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3500939 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3500577 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3500668 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3500306 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3500397 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3500035 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3500126 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3499763 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh3499854 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq630 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh3499495 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_ETC___05Fq106 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh198832 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                    >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh198923 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                    >> 0xaU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh198561 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh198652 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh198290 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh198381 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh198019 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh198110 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh197748 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh197839 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh197476 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh197567 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_ETC___05Fq105 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh197208 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq281 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1299603 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1299694 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1299332 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1299423 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1299061 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1299152 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1298790 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1298881 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1298519 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1298610 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1298247 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1298338 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq280 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1297979 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_ETC___05Fq176 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh639136 = (1U & (~ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                    >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh639227 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                    >> 0xaU) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh638865 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh638956 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                    >> 9U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh638594 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                    >> 9U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh638685 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                    >> 8U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh638323 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                    >> 8U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh638414 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                    >> 7U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh638052 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                    >> 7U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh638143 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                    >> 6U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh637780 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh637871 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                    >> 5U) 
                                                   & ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                      >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_ETC___05Fq175 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh637512 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                                                    >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq316 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1519750 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1519841 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1519479 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1519570 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1519208 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1519299 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1518937 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1519028 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1518666 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1518757 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1518394 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1518485 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq315 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1518126 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq351 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1739897 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1739988 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1739626 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1739717 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1739355 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1739446 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1739084 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1739175 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1738813 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1738904 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1738541 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1738632 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq350 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1738273 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq386 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1960067 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1960158 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1959796 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1959887 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1959525 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1959616 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1959254 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1959345 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1958983 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1959074 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1958711 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh1958802 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq385 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh1958443 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq421 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2180214 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2180305 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2179943 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2180034 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2179672 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2179763 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2179401 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2179492 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2179130 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2179221 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2178858 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2178949 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq420 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2178590 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq456 
        = ((1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956))
            ? 1U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2400361 = (1U & 
                                              (~ ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                  >> 0xbU)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2400452 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                >> 0xaU) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2400090 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                >> 0xaU) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 6U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2400181 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2399819 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                >> 9U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 5U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2399910 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2399548 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                >> 8U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 4U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2399639 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                >> 7U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2399277 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                >> 7U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 3U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2399368 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2399005 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                >> 6U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 2U)));
    vlTOPp->mkMmUnit__DOT__x___05Fh2399096 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                >> 5U) 
                                               & ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq455 
        = ((1U & (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                   >> 4U) & (IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A)))
            ? 0x20U : 0U);
    vlTOPp->mkMmUnit__DOT__x___05Fh2398737 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                >> 5U) 
                                               ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                                                  >> 1U)));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35365 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3138927) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3138928)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3138656) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3138657)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35364)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3139290 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3138928) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3138927));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32867 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2918780) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2918781)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2918509) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2918510)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32866)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2919143 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2918781) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2918780));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30369 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2698633) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2698634)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2698362) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2698363)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30368)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2698996 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2698634) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2698633));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27871 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2478463) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2478464)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2478192) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2478193)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27870)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2478826 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2478464) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2478463));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7887 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh717241) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh717242)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh716970) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh716971)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7886)));
    vlTOPp->mkMmUnit__DOT__y___05Fh717604 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh717242) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh717241));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37863 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3359074) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3359075)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3358803) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3358804)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37862)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3359437 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3359075) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3359074));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d393 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh56787) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh56788)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh56516) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh56517)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d392)));
    vlTOPp->mkMmUnit__DOT__y___05Fh57150 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh56788) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh56787));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10385 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh937411) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh937412)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh937140) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh937141)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10384)));
    vlTOPp->mkMmUnit__DOT__y___05Fh937774 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh937412) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh937411));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2891 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh276941) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh276942)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh276670) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh276671)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2890)));
    vlTOPp->mkMmUnit__DOT__y___05Fh277304 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh276942) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh276941));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5389 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh497091) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh497092)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh496820) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh496821)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5388)));
    vlTOPp->mkMmUnit__DOT__y___05Fh497454 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh497092) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh497091));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12883 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1157558) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1157559)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1157287) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1157288)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12882)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1157921 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1157559) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1157558));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15381 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1377705) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1377706)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1377434) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1377435)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15380)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1378068 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1377706) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1377705));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17879 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1597852) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1597853)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1597581) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1597582)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17878)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1598215 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1597853) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1597852));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20377 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1818022) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1818023)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1817751) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1817752)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20376)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1818385 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1818023) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1818022));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22875 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2038169) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2038170)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2037898) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2037899)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22874)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2038532 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2038170) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2038169));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25373 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2258316) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2258317)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2258045) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2258046)) 
                          << 0x10U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25372)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2258679 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2258317) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2258316));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d37011 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3279348) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq595))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_2_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq596)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3279708 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT___05FETC___05Fq595 
                                               >> 5U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3279348));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34513 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3059201) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq560))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_1_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq561)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3059561 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT___05FETC___05Fq560 
                                               >> 5U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3059201));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d32015 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2839054) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq525))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_0_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq526)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2839414 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT___05FETC___05Fq525 
                                               >> 5U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2839054));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29517 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2618884) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq490))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_3_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq491)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2619244 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT___05FETC___05Fq490 
                                               >> 5U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2618884));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9533 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh857662) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_ETC___05Fq210))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_3_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_ETC___05Fq211)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh858022 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_ETC___05Fq210 
                                              >> 5U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh857662));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4537 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh417362) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_ETC___05Fq139))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_1_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_ETC___05Fq140)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh417722 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_ETC___05Fq139 
                                              >> 5U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh417362));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d12031 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1077832) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq245))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_0_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq246)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1078192 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT___05FETC___05Fq245 
                                               >> 5U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1077832));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39509 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3499495) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq630))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_3_3_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq631)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh3499855 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT___05FETC___05Fq630 
                                               >> 5U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3499495));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d2039 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh197208) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_ETC___05Fq105))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_0_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_ETC___05Fq106)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh197568 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_ETC___05Fq105 
                                              >> 5U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh197208));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14529 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1297979) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq280))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_1_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq281)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1298339 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT___05FETC___05Fq280 
                                               >> 5U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1297979));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d7035 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh637512) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_ETC___05Fq175))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_0_2_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_ETC___05Fq176)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh637872 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_ETC___05Fq175 
                                              >> 5U) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh637512));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d17027 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1518126) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq315))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_2_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq316)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1518486 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT___05FETC___05Fq315 
                                               >> 5U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1518126));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19525 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1738273) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq350))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_1_3_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq351)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1738633 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT___05FETC___05Fq350 
                                               >> 5U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1738273));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d22023 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1958443) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq385))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_0_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq386)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh1958803 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT___05FETC___05Fq385 
                                               >> 5U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1958443));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24521 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2178590) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq420))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_1_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq421)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2178950 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT___05FETC___05Fq420 
                                               >> 5U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2178590));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d27019 
        = ((0x20U & (((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2398737) 
                      << 5U) ^ (0xffffffe0U & vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq455))) 
           | ((0x10U & ((0xfffffff0U & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956)) 
                        ^ ((IData)(vlTOPp->mkMmUnit__DOT__pes_2_2_macunit_bf16_Mac_reg_A) 
                           << 4U))) | ((0xeU & (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956)) 
                                       | (1U & (IData)(vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq456)))));
    vlTOPp->mkMmUnit__DOT__y___05Fh2399097 = ((vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT___05FETC___05Fq455 
                                               >> 5U) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2398737));
    vlTOPp->mkMmUnit__DOT__y___05Fh3139199 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3139289) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3139290));
    vlTOPp->mkMmUnit__DOT__y___05Fh2919052 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2919142) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2919143));
    vlTOPp->mkMmUnit__DOT__y___05Fh2698905 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2698995) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2698996));
    vlTOPp->mkMmUnit__DOT__y___05Fh2478735 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2478825) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2478826));
    vlTOPp->mkMmUnit__DOT__y___05Fh717513 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh717603) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh717604));
    vlTOPp->mkMmUnit__DOT__y___05Fh3359346 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3359436) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3359437));
    vlTOPp->mkMmUnit__DOT__y___05Fh57059 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh57149) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh57150));
    vlTOPp->mkMmUnit__DOT__y___05Fh937683 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh937773) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh937774));
    vlTOPp->mkMmUnit__DOT__y___05Fh277213 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh277303) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh277304));
    vlTOPp->mkMmUnit__DOT__y___05Fh497363 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh497453) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh497454));
    vlTOPp->mkMmUnit__DOT__y___05Fh1157830 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1157920) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1157921));
    vlTOPp->mkMmUnit__DOT__y___05Fh1377977 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1378067) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1378068));
    vlTOPp->mkMmUnit__DOT__y___05Fh1598124 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1598214) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1598215));
    vlTOPp->mkMmUnit__DOT__y___05Fh1818294 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1818384) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1818385));
    vlTOPp->mkMmUnit__DOT__y___05Fh2038441 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2038531) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2038532));
    vlTOPp->mkMmUnit__DOT__y___05Fh2258588 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2258678) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2258679));
    vlTOPp->mkMmUnit__DOT__y___05Fh3279617 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3279707) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3279708));
    vlTOPp->mkMmUnit__DOT__y___05Fh3059470 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3059560) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3059561));
    vlTOPp->mkMmUnit__DOT__y___05Fh2839323 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2839413) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2839414));
    vlTOPp->mkMmUnit__DOT__y___05Fh2619153 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2619243) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2619244));
    vlTOPp->mkMmUnit__DOT__y___05Fh857931 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh858021) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh858022));
    vlTOPp->mkMmUnit__DOT__y___05Fh417631 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh417721) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh417722));
    vlTOPp->mkMmUnit__DOT__y___05Fh1078101 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1078191) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1078192));
    vlTOPp->mkMmUnit__DOT__y___05Fh3499764 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3499854) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3499855));
    vlTOPp->mkMmUnit__DOT__y___05Fh197477 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh197567) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh197568));
    vlTOPp->mkMmUnit__DOT__y___05Fh1298248 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1298338) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1298339));
    vlTOPp->mkMmUnit__DOT__y___05Fh637781 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh637871) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh637872));
    vlTOPp->mkMmUnit__DOT__y___05Fh1518395 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1518485) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1518486));
    vlTOPp->mkMmUnit__DOT__y___05Fh1738542 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1738632) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1738633));
    vlTOPp->mkMmUnit__DOT__y___05Fh1958712 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1958802) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1958803));
    vlTOPp->mkMmUnit__DOT__y___05Fh2178859 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2178949) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2178950));
    vlTOPp->mkMmUnit__DOT__y___05Fh2399006 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2399096) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2399097));
    vlTOPp->mkMmUnit__DOT__y___05Fh3139561 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3139199) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3139198));
    vlTOPp->mkMmUnit__DOT__y___05Fh2919414 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2919052) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2919051));
    vlTOPp->mkMmUnit__DOT__y___05Fh2699267 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2698905) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2698904));
    vlTOPp->mkMmUnit__DOT__y___05Fh2479097 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2478735) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2478734));
    vlTOPp->mkMmUnit__DOT__y___05Fh717875 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh717513) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh717512));
    vlTOPp->mkMmUnit__DOT__y___05Fh3359708 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3359346) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3359345));
    vlTOPp->mkMmUnit__DOT__y___05Fh57421 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh57059) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh57058));
    vlTOPp->mkMmUnit__DOT__y___05Fh938045 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh937683) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh937682));
    vlTOPp->mkMmUnit__DOT__y___05Fh277575 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh277213) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh277212));
    vlTOPp->mkMmUnit__DOT__y___05Fh497725 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh497363) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh497362));
    vlTOPp->mkMmUnit__DOT__y___05Fh1158192 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1157830) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1157829));
    vlTOPp->mkMmUnit__DOT__y___05Fh1378339 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1377977) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1377976));
    vlTOPp->mkMmUnit__DOT__y___05Fh1598486 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1598124) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1598123));
    vlTOPp->mkMmUnit__DOT__y___05Fh1818656 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1818294) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1818293));
    vlTOPp->mkMmUnit__DOT__y___05Fh2038803 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2038441) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2038440));
    vlTOPp->mkMmUnit__DOT__y___05Fh2258950 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2258588) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2258587));
    vlTOPp->mkMmUnit__DOT__y___05Fh3279980 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3279617) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3279616));
    vlTOPp->mkMmUnit__DOT__y___05Fh3059833 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3059470) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3059469));
    vlTOPp->mkMmUnit__DOT__y___05Fh2839686 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2839323) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2839322));
    vlTOPp->mkMmUnit__DOT__y___05Fh2619516 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2619153) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2619152));
    vlTOPp->mkMmUnit__DOT__y___05Fh858294 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh857931) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh857930));
    vlTOPp->mkMmUnit__DOT__y___05Fh417994 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh417631) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh417630));
    vlTOPp->mkMmUnit__DOT__y___05Fh1078464 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1078101) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1078100));
    vlTOPp->mkMmUnit__DOT__y___05Fh3500127 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3499764) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3499763));
    vlTOPp->mkMmUnit__DOT__y___05Fh197840 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh197477) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh197476));
    vlTOPp->mkMmUnit__DOT__y___05Fh1298611 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1298248) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1298247));
    vlTOPp->mkMmUnit__DOT__y___05Fh638144 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh637781) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh637780));
    vlTOPp->mkMmUnit__DOT__y___05Fh1518758 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1518395) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1518394));
    vlTOPp->mkMmUnit__DOT__y___05Fh1738905 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1738542) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1738541));
    vlTOPp->mkMmUnit__DOT__y___05Fh1959075 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1958712) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1958711));
    vlTOPp->mkMmUnit__DOT__y___05Fh2179222 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2178859) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2178858));
    vlTOPp->mkMmUnit__DOT__y___05Fh2399369 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2399006) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2399005));
    vlTOPp->mkMmUnit__DOT__y___05Fh3139470 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3139560) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3139561));
    vlTOPp->mkMmUnit__DOT__y___05Fh2919323 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2919413) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2919414));
    vlTOPp->mkMmUnit__DOT__y___05Fh2699176 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2699266) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2699267));
    vlTOPp->mkMmUnit__DOT__y___05Fh2479006 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2479096) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2479097));
    vlTOPp->mkMmUnit__DOT__y___05Fh717784 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh717874) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh717875));
    vlTOPp->mkMmUnit__DOT__y___05Fh3359617 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3359707) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3359708));
    vlTOPp->mkMmUnit__DOT__y___05Fh57330 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh57420) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh57421));
    vlTOPp->mkMmUnit__DOT__y___05Fh937954 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh938044) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh938045));
    vlTOPp->mkMmUnit__DOT__y___05Fh277484 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh277574) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh277575));
    vlTOPp->mkMmUnit__DOT__y___05Fh497634 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh497724) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh497725));
    vlTOPp->mkMmUnit__DOT__y___05Fh1158101 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1158191) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1158192));
    vlTOPp->mkMmUnit__DOT__y___05Fh1378248 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1378338) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1378339));
    vlTOPp->mkMmUnit__DOT__y___05Fh1598395 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1598485) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1598486));
    vlTOPp->mkMmUnit__DOT__y___05Fh1818565 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1818655) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1818656));
    vlTOPp->mkMmUnit__DOT__y___05Fh2038712 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2038802) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2038803));
    vlTOPp->mkMmUnit__DOT__y___05Fh2258859 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2258949) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2258950));
    vlTOPp->mkMmUnit__DOT__y___05Fh3279889 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3279979) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3279980));
    vlTOPp->mkMmUnit__DOT__y___05Fh3059742 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3059832) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3059833));
    vlTOPp->mkMmUnit__DOT__y___05Fh2839595 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2839685) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2839686));
    vlTOPp->mkMmUnit__DOT__y___05Fh2619425 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2619515) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2619516));
    vlTOPp->mkMmUnit__DOT__y___05Fh858203 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh858293) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh858294));
    vlTOPp->mkMmUnit__DOT__y___05Fh417903 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh417993) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh417994));
    vlTOPp->mkMmUnit__DOT__y___05Fh1078373 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1078463) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1078464));
    vlTOPp->mkMmUnit__DOT__y___05Fh3500036 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3500126) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3500127));
    vlTOPp->mkMmUnit__DOT__y___05Fh197749 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh197839) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh197840));
    vlTOPp->mkMmUnit__DOT__y___05Fh1298520 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1298610) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1298611));
    vlTOPp->mkMmUnit__DOT__y___05Fh638053 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh638143) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh638144));
    vlTOPp->mkMmUnit__DOT__y___05Fh1518667 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1518757) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1518758));
    vlTOPp->mkMmUnit__DOT__y___05Fh1738814 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1738904) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1738905));
    vlTOPp->mkMmUnit__DOT__y___05Fh1958984 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1959074) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1959075));
    vlTOPp->mkMmUnit__DOT__y___05Fh2179131 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2179221) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2179222));
    vlTOPp->mkMmUnit__DOT__y___05Fh2399278 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2399368) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2399369));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35366 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3139469) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3139470)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3139198) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3139199)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35365));
    vlTOPp->mkMmUnit__DOT__y___05Fh3139832 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3139470) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3139469));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32868 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2919322) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2919323)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2919051) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2919052)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32867));
    vlTOPp->mkMmUnit__DOT__y___05Fh2919685 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2919323) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2919322));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30370 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2699175) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2699176)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2698904) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2698905)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30369));
    vlTOPp->mkMmUnit__DOT__y___05Fh2699538 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2699176) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2699175));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27872 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2479005) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2479006)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2478734) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2478735)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27871));
    vlTOPp->mkMmUnit__DOT__y___05Fh2479368 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2479006) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2479005));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7888 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh717783) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh717784)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh717512) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh717513)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7887));
    vlTOPp->mkMmUnit__DOT__y___05Fh718146 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh717784) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh717783));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37864 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3359616) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3359617)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3359345) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3359346)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37863));
    vlTOPp->mkMmUnit__DOT__y___05Fh3359979 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3359617) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3359616));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d394 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh57329) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh57330)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh57058) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh57059)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d393));
    vlTOPp->mkMmUnit__DOT__y___05Fh57692 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh57330) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh57329));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10386 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh937953) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh937954)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh937682) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh937683)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10385));
    vlTOPp->mkMmUnit__DOT__y___05Fh938316 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh937954) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh937953));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2892 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh277483) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh277484)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh277212) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh277213)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2891));
    vlTOPp->mkMmUnit__DOT__y___05Fh277846 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh277484) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh277483));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5390 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh497633) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh497634)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh497362) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh497363)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5389));
    vlTOPp->mkMmUnit__DOT__y___05Fh497996 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh497634) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh497633));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12884 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1158100) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1158101)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1157829) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1157830)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12883));
    vlTOPp->mkMmUnit__DOT__y___05Fh1158463 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1158101) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1158100));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15382 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1378247) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1378248)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1377976) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1377977)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15381));
    vlTOPp->mkMmUnit__DOT__y___05Fh1378610 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1378248) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1378247));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17880 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1598394) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1598395)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1598123) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1598124)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17879));
    vlTOPp->mkMmUnit__DOT__y___05Fh1598757 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1598395) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1598394));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20378 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1818564) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1818565)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1818293) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1818294)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20377));
    vlTOPp->mkMmUnit__DOT__y___05Fh1818927 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1818565) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1818564));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22876 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2038711) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2038712)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2038440) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2038441)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22875));
    vlTOPp->mkMmUnit__DOT__y___05Fh2039074 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2038712) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2038711));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25374 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2258858) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2258859)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2258587) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2258588)) 
                          << 0x12U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25373));
    vlTOPp->mkMmUnit__DOT__y___05Fh2259221 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2258859) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2258858));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d37012 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3279888) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3279889)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3279616) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3279617)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d37011)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3280251 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3279889) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3279888));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34514 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3059741) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3059742)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3059469) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3059470)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34513)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3060104 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3059742) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3059741));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d32016 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2839594) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2839595)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2839322) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2839323)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d32015)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2839957 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2839595) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2839594));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29518 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2619424) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2619425)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2619152) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2619153)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29517)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2619787 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2619425) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2619424));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9534 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh858202) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh858203)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh857930) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh857931)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9533)));
    vlTOPp->mkMmUnit__DOT__y___05Fh858565 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh858203) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh858202));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4538 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh417902) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh417903)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh417630) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh417631)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4537)));
    vlTOPp->mkMmUnit__DOT__y___05Fh418265 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh417903) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh417902));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d12032 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1078372) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1078373)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1078100) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1078101)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d12031)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1078735 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1078373) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1078372));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39510 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3500035) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3500036)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3499763) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3499764)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39509)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3500398 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3500036) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3500035));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d2040 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh197748) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh197749)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh197476) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh197477)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d2039)));
    vlTOPp->mkMmUnit__DOT__y___05Fh198111 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh197749) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh197748));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14530 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1298519) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1298520)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1298247) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1298248)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14529)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1298882 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1298520) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1298519));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d7036 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh638052) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh638053)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh637780) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh637781)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d7035)));
    vlTOPp->mkMmUnit__DOT__y___05Fh638415 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh638053) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh638052));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d17028 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1518666) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1518667)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1518394) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1518395)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d17027)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1519029 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1518667) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1518666));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19526 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1738813) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1738814)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1738541) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1738542)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19525)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1739176 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1738814) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1738813));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d22024 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1958983) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1958984)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1958711) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1958712)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d22023)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1959346 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1958984) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1958983));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24522 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2179130) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2179131)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2178858) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2178859)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24521)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2179493 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2179131) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2179130));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d27020 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2399277) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2399278)) 
            << 7U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2399005) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2399006)) 
                       << 6U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d27019)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2399640 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2399278) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2399277));
    vlTOPp->mkMmUnit__DOT__y___05Fh3139741 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3139831) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3139832));
    vlTOPp->mkMmUnit__DOT__y___05Fh2919594 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2919684) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2919685));
    vlTOPp->mkMmUnit__DOT__y___05Fh2699447 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2699537) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2699538));
    vlTOPp->mkMmUnit__DOT__y___05Fh2479277 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2479367) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2479368));
    vlTOPp->mkMmUnit__DOT__y___05Fh718055 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh718145) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh718146));
    vlTOPp->mkMmUnit__DOT__y___05Fh3359888 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3359978) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3359979));
    vlTOPp->mkMmUnit__DOT__y___05Fh57601 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh57691) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh57692));
    vlTOPp->mkMmUnit__DOT__y___05Fh938225 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh938315) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh938316));
    vlTOPp->mkMmUnit__DOT__y___05Fh277755 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh277845) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh277846));
    vlTOPp->mkMmUnit__DOT__y___05Fh497905 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh497995) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh497996));
    vlTOPp->mkMmUnit__DOT__y___05Fh1158372 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1158462) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1158463));
    vlTOPp->mkMmUnit__DOT__y___05Fh1378519 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1378609) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1378610));
    vlTOPp->mkMmUnit__DOT__y___05Fh1598666 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1598756) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1598757));
    vlTOPp->mkMmUnit__DOT__y___05Fh1818836 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1818926) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1818927));
    vlTOPp->mkMmUnit__DOT__y___05Fh2038983 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2039073) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2039074));
    vlTOPp->mkMmUnit__DOT__y___05Fh2259130 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2259220) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2259221));
    vlTOPp->mkMmUnit__DOT__y___05Fh3280160 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3280250) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3280251));
    vlTOPp->mkMmUnit__DOT__y___05Fh3060013 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3060103) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3060104));
    vlTOPp->mkMmUnit__DOT__y___05Fh2839866 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2839956) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2839957));
    vlTOPp->mkMmUnit__DOT__y___05Fh2619696 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2619786) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2619787));
    vlTOPp->mkMmUnit__DOT__y___05Fh858474 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh858564) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh858565));
    vlTOPp->mkMmUnit__DOT__y___05Fh418174 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh418264) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh418265));
    vlTOPp->mkMmUnit__DOT__y___05Fh1078644 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1078734) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1078735));
    vlTOPp->mkMmUnit__DOT__y___05Fh3500307 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3500397) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3500398));
    vlTOPp->mkMmUnit__DOT__y___05Fh198020 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh198110) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh198111));
    vlTOPp->mkMmUnit__DOT__y___05Fh1298791 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1298881) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1298882));
    vlTOPp->mkMmUnit__DOT__y___05Fh638324 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh638414) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh638415));
    vlTOPp->mkMmUnit__DOT__y___05Fh1518938 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1519028) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1519029));
    vlTOPp->mkMmUnit__DOT__y___05Fh1739085 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1739175) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1739176));
    vlTOPp->mkMmUnit__DOT__y___05Fh1959255 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1959345) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1959346));
    vlTOPp->mkMmUnit__DOT__y___05Fh2179402 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2179492) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2179493));
    vlTOPp->mkMmUnit__DOT__y___05Fh2399549 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2399639) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2399640));
    vlTOPp->mkMmUnit__DOT__y___05Fh3140103 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3139741) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3139740));
    vlTOPp->mkMmUnit__DOT__y___05Fh2919956 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2919594) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2919593));
    vlTOPp->mkMmUnit__DOT__y___05Fh2699809 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2699447) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2699446));
    vlTOPp->mkMmUnit__DOT__y___05Fh2479639 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2479277) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2479276));
    vlTOPp->mkMmUnit__DOT__y___05Fh718417 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh718055) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh718054));
    vlTOPp->mkMmUnit__DOT__y___05Fh3360250 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3359888) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3359887));
    vlTOPp->mkMmUnit__DOT__y___05Fh57963 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh57601) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh57600));
    vlTOPp->mkMmUnit__DOT__y___05Fh938587 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh938225) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh938224));
    vlTOPp->mkMmUnit__DOT__y___05Fh278117 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh277755) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh277754));
    vlTOPp->mkMmUnit__DOT__y___05Fh498267 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh497905) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh497904));
    vlTOPp->mkMmUnit__DOT__y___05Fh1158734 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1158372) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1158371));
    vlTOPp->mkMmUnit__DOT__y___05Fh1378881 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1378519) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1378518));
    vlTOPp->mkMmUnit__DOT__y___05Fh1599028 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1598666) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1598665));
    vlTOPp->mkMmUnit__DOT__y___05Fh1819198 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1818836) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1818835));
    vlTOPp->mkMmUnit__DOT__y___05Fh2039345 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2038983) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2038982));
    vlTOPp->mkMmUnit__DOT__y___05Fh2259492 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2259130) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2259129));
    vlTOPp->mkMmUnit__DOT__y___05Fh3280522 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3280160) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3280159));
    vlTOPp->mkMmUnit__DOT__y___05Fh3060375 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3060013) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3060012));
    vlTOPp->mkMmUnit__DOT__y___05Fh2840228 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2839866) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2839865));
    vlTOPp->mkMmUnit__DOT__y___05Fh2620058 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2619696) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2619695));
    vlTOPp->mkMmUnit__DOT__y___05Fh858836 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh858474) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh858473));
    vlTOPp->mkMmUnit__DOT__y___05Fh418536 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh418174) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh418173));
    vlTOPp->mkMmUnit__DOT__y___05Fh1079006 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1078644) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1078643));
    vlTOPp->mkMmUnit__DOT__y___05Fh3500669 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3500307) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3500306));
    vlTOPp->mkMmUnit__DOT__y___05Fh198382 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh198020) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh198019));
    vlTOPp->mkMmUnit__DOT__y___05Fh1299153 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1298791) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1298790));
    vlTOPp->mkMmUnit__DOT__y___05Fh638686 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh638324) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh638323));
    vlTOPp->mkMmUnit__DOT__y___05Fh1519300 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1518938) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1518937));
    vlTOPp->mkMmUnit__DOT__y___05Fh1739447 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1739085) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1739084));
    vlTOPp->mkMmUnit__DOT__y___05Fh1959617 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1959255) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1959254));
    vlTOPp->mkMmUnit__DOT__y___05Fh2179764 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2179402) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2179401));
    vlTOPp->mkMmUnit__DOT__y___05Fh2399911 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2399549) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2399548));
    vlTOPp->mkMmUnit__DOT__y___05Fh3140012 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3140102) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3140103));
    vlTOPp->mkMmUnit__DOT__y___05Fh2919865 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2919955) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2919956));
    vlTOPp->mkMmUnit__DOT__y___05Fh2699718 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2699808) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2699809));
    vlTOPp->mkMmUnit__DOT__y___05Fh2479548 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2479638) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2479639));
    vlTOPp->mkMmUnit__DOT__y___05Fh718326 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh718416) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh718417));
    vlTOPp->mkMmUnit__DOT__y___05Fh3360159 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3360249) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3360250));
    vlTOPp->mkMmUnit__DOT__y___05Fh57872 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh57962) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh57963));
    vlTOPp->mkMmUnit__DOT__y___05Fh938496 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh938586) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh938587));
    vlTOPp->mkMmUnit__DOT__y___05Fh278026 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh278116) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh278117));
    vlTOPp->mkMmUnit__DOT__y___05Fh498176 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh498266) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh498267));
    vlTOPp->mkMmUnit__DOT__y___05Fh1158643 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1158733) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1158734));
    vlTOPp->mkMmUnit__DOT__y___05Fh1378790 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1378880) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1378881));
    vlTOPp->mkMmUnit__DOT__y___05Fh1598937 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1599027) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1599028));
    vlTOPp->mkMmUnit__DOT__y___05Fh1819107 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1819197) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1819198));
    vlTOPp->mkMmUnit__DOT__y___05Fh2039254 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2039344) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2039345));
    vlTOPp->mkMmUnit__DOT__y___05Fh2259401 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2259491) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2259492));
    vlTOPp->mkMmUnit__DOT__y___05Fh3280431 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3280521) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3280522));
    vlTOPp->mkMmUnit__DOT__y___05Fh3060284 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3060374) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3060375));
    vlTOPp->mkMmUnit__DOT__y___05Fh2840137 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2840227) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2840228));
    vlTOPp->mkMmUnit__DOT__y___05Fh2619967 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2620057) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2620058));
    vlTOPp->mkMmUnit__DOT__y___05Fh858745 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh858835) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh858836));
    vlTOPp->mkMmUnit__DOT__y___05Fh418445 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh418535) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh418536));
    vlTOPp->mkMmUnit__DOT__y___05Fh1078915 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1079005) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1079006));
    vlTOPp->mkMmUnit__DOT__y___05Fh3500578 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3500668) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3500669));
    vlTOPp->mkMmUnit__DOT__y___05Fh198291 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh198381) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh198382));
    vlTOPp->mkMmUnit__DOT__y___05Fh1299062 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1299152) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1299153));
    vlTOPp->mkMmUnit__DOT__y___05Fh638595 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh638685) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh638686));
    vlTOPp->mkMmUnit__DOT__y___05Fh1519209 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1519299) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1519300));
    vlTOPp->mkMmUnit__DOT__y___05Fh1739356 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1739446) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1739447));
    vlTOPp->mkMmUnit__DOT__y___05Fh1959526 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1959616) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1959617));
    vlTOPp->mkMmUnit__DOT__y___05Fh2179673 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2179763) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2179764));
    vlTOPp->mkMmUnit__DOT__y___05Fh2399820 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2399910) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2399911));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35367 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3140011) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3140012)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3139740) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3139741)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35366));
    vlTOPp->mkMmUnit__DOT__y___05Fh3140374 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3140012) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3140011));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32869 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2919864) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2919865)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2919593) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2919594)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32868));
    vlTOPp->mkMmUnit__DOT__y___05Fh2920227 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2919865) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2919864));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30371 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2699717) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2699718)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2699446) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2699447)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30370));
    vlTOPp->mkMmUnit__DOT__y___05Fh2700080 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2699718) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2699717));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27873 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2479547) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2479548)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2479276) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2479277)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27872));
    vlTOPp->mkMmUnit__DOT__y___05Fh2479910 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2479548) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2479547));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7889 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh718325) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh718326)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh718054) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh718055)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7888));
    vlTOPp->mkMmUnit__DOT__y___05Fh718688 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh718326) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh718325));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37865 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3360158) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3360159)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3359887) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3359888)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37864));
    vlTOPp->mkMmUnit__DOT__y___05Fh3360521 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3360159) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3360158));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d395 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh57871) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh57872)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh57600) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh57601)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d394));
    vlTOPp->mkMmUnit__DOT__y___05Fh58234 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh57872) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh57871));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10387 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh938495) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh938496)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh938224) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh938225)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10386));
    vlTOPp->mkMmUnit__DOT__y___05Fh938858 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh938496) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh938495));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2893 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh278025) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh278026)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh277754) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh277755)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2892));
    vlTOPp->mkMmUnit__DOT__y___05Fh278388 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh278026) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh278025));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5391 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh498175) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh498176)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh497904) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh497905)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5390));
    vlTOPp->mkMmUnit__DOT__y___05Fh498538 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh498176) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh498175));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12885 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1158642) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1158643)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1158371) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1158372)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12884));
    vlTOPp->mkMmUnit__DOT__y___05Fh1159005 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1158643) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1158642));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15383 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1378789) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1378790)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1378518) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1378519)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15382));
    vlTOPp->mkMmUnit__DOT__y___05Fh1379152 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1378790) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1378789));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17881 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1598936) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1598937)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1598665) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1598666)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17880));
    vlTOPp->mkMmUnit__DOT__y___05Fh1599299 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1598937) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1598936));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20379 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1819106) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1819107)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1818835) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1818836)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20378));
    vlTOPp->mkMmUnit__DOT__y___05Fh1819469 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1819107) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1819106));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22877 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2039253) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2039254)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2038982) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2038983)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22876));
    vlTOPp->mkMmUnit__DOT__y___05Fh2039616 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2039254) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2039253));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25375 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2259400) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2259401)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2259129) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2259130)) 
                          << 0x14U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25374));
    vlTOPp->mkMmUnit__DOT__y___05Fh2259763 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2259401) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2259400));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d37013 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3280430) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3280431)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3280159) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3280160)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d37012)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3280793 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3280431) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3280430));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34515 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3060283) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3060284)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3060012) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3060013)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34514)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3060646 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3060284) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3060283));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d32017 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2840136) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2840137)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2839865) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2839866)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d32016)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2840499 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2840137) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2840136));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29519 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2619966) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2619967)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2619695) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2619696)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29518)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2620329 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2619967) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2619966));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9535 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh858744) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh858745)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh858473) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh858474)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9534)));
    vlTOPp->mkMmUnit__DOT__y___05Fh859107 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh858745) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh858744));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4539 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh418444) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh418445)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh418173) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh418174)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4538)));
    vlTOPp->mkMmUnit__DOT__y___05Fh418807 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh418445) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh418444));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d12033 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1078914) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1078915)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1078643) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1078644)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d12032)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1079277 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1078915) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1078914));
    vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39511 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3500577) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3500578)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3500306) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3500307)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39510)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3500940 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3500578) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3500577));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d2041 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh198290) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh198291)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh198019) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh198020)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d2040)));
    vlTOPp->mkMmUnit__DOT__y___05Fh198653 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh198291) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh198290));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14531 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1299061) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1299062)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1298790) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1298791)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14530)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1299424 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1299062) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1299061));
    vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d7037 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh638594) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh638595)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh638323) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh638324)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d7036)));
    vlTOPp->mkMmUnit__DOT__y___05Fh638957 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh638595) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh638594));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d17029 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1519208) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1519209)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1518937) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1518938)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d17028)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1519571 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1519209) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1519208));
    vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19527 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1739355) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1739356)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1739084) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1739085)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19526)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1739718 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1739356) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1739355));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d22025 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1959525) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1959526)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1959254) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1959255)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d22024)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1959888 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1959526) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1959525));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24523 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2179672) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2179673)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2179401) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2179402)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24522)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2180035 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2179673) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2179672));
    vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d27021 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2399819) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2399820)) 
            << 9U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2399548) 
                        ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2399549)) 
                       << 8U) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d27020)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2400182 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2399820) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2399819));
    vlTOPp->mkMmUnit__DOT__y___05Fh3140283 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3140373) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3140374));
    vlTOPp->mkMmUnit__DOT__y___05Fh2920136 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2920226) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2920227));
    vlTOPp->mkMmUnit__DOT__y___05Fh2699989 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2700079) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2700080));
    vlTOPp->mkMmUnit__DOT__y___05Fh2479819 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2479909) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2479910));
    vlTOPp->mkMmUnit__DOT__y___05Fh718597 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh718687) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh718688));
    vlTOPp->mkMmUnit__DOT__y___05Fh3360430 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3360520) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3360521));
    vlTOPp->mkMmUnit__DOT__y___05Fh58143 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh58233) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh58234));
    vlTOPp->mkMmUnit__DOT__y___05Fh938767 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh938857) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh938858));
    vlTOPp->mkMmUnit__DOT__y___05Fh278297 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh278387) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh278388));
    vlTOPp->mkMmUnit__DOT__y___05Fh498447 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh498537) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh498538));
    vlTOPp->mkMmUnit__DOT__y___05Fh1158914 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1159004) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1159005));
    vlTOPp->mkMmUnit__DOT__y___05Fh1379061 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1379151) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1379152));
    vlTOPp->mkMmUnit__DOT__y___05Fh1599208 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1599298) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1599299));
    vlTOPp->mkMmUnit__DOT__y___05Fh1819378 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1819468) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1819469));
    vlTOPp->mkMmUnit__DOT__y___05Fh2039525 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2039615) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2039616));
    vlTOPp->mkMmUnit__DOT__y___05Fh2259672 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2259762) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2259763));
    vlTOPp->mkMmUnit__DOT__y___05Fh3280702 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3280792) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3280793));
    vlTOPp->mkMmUnit__DOT__y___05Fh3060555 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3060645) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3060646));
    vlTOPp->mkMmUnit__DOT__y___05Fh2840408 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2840498) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2840499));
    vlTOPp->mkMmUnit__DOT__y___05Fh2620238 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2620328) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2620329));
    vlTOPp->mkMmUnit__DOT__y___05Fh859016 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh859106) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh859107));
    vlTOPp->mkMmUnit__DOT__y___05Fh418716 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh418806) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh418807));
    vlTOPp->mkMmUnit__DOT__y___05Fh1079186 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1079276) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1079277));
    vlTOPp->mkMmUnit__DOT__y___05Fh3500849 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3500939) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3500940));
    vlTOPp->mkMmUnit__DOT__y___05Fh198562 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh198652) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh198653));
    vlTOPp->mkMmUnit__DOT__y___05Fh1299333 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1299423) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1299424));
    vlTOPp->mkMmUnit__DOT__y___05Fh638866 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh638956) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh638957));
    vlTOPp->mkMmUnit__DOT__y___05Fh1519480 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1519570) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1519571));
    vlTOPp->mkMmUnit__DOT__y___05Fh1739627 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1739717) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1739718));
    vlTOPp->mkMmUnit__DOT__y___05Fh1959797 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1959887) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1959888));
    vlTOPp->mkMmUnit__DOT__y___05Fh2179944 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2180034) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2180035));
    vlTOPp->mkMmUnit__DOT__y___05Fh2400091 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2400181) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2400182));
    vlTOPp->mkMmUnit__DOT__y___05Fh3140645 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3140283) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3140282));
    vlTOPp->mkMmUnit__DOT__y___05Fh2920498 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2920136) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2920135));
    vlTOPp->mkMmUnit__DOT__y___05Fh2700351 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2699989) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2699988));
    vlTOPp->mkMmUnit__DOT__y___05Fh2480181 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2479819) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2479818));
    vlTOPp->mkMmUnit__DOT__y___05Fh718959 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh718597) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh718596));
    vlTOPp->mkMmUnit__DOT__y___05Fh3360792 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3360430) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3360429));
    vlTOPp->mkMmUnit__DOT__y___05Fh58505 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh58143) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh58142));
    vlTOPp->mkMmUnit__DOT__y___05Fh939129 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh938767) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh938766));
    vlTOPp->mkMmUnit__DOT__y___05Fh278659 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh278297) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh278296));
    vlTOPp->mkMmUnit__DOT__y___05Fh498809 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh498447) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh498446));
    vlTOPp->mkMmUnit__DOT__y___05Fh1159276 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1158914) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1158913));
    vlTOPp->mkMmUnit__DOT__y___05Fh1379423 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1379061) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1379060));
    vlTOPp->mkMmUnit__DOT__y___05Fh1599570 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1599208) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1599207));
    vlTOPp->mkMmUnit__DOT__y___05Fh1819740 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1819378) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1819377));
    vlTOPp->mkMmUnit__DOT__y___05Fh2039887 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2039525) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2039524));
    vlTOPp->mkMmUnit__DOT__y___05Fh2260034 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2259672) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2259671));
    vlTOPp->mkMmUnit__DOT__y___05Fh3281064 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3280702) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3280701));
    vlTOPp->mkMmUnit__DOT__y___05Fh3060917 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3060555) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3060554));
    vlTOPp->mkMmUnit__DOT__y___05Fh2840770 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2840408) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2840407));
    vlTOPp->mkMmUnit__DOT__y___05Fh2620600 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2620238) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2620237));
    vlTOPp->mkMmUnit__DOT__y___05Fh859378 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh859016) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh859015));
    vlTOPp->mkMmUnit__DOT__y___05Fh419078 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh418716) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh418715));
    vlTOPp->mkMmUnit__DOT__y___05Fh1079548 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1079186) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1079185));
    vlTOPp->mkMmUnit__DOT__y___05Fh3501211 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3500849) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3500848));
    vlTOPp->mkMmUnit__DOT__y___05Fh198924 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh198562) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh198561));
    vlTOPp->mkMmUnit__DOT__y___05Fh1299695 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1299333) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1299332));
    vlTOPp->mkMmUnit__DOT__y___05Fh639228 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh638866) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh638865));
    vlTOPp->mkMmUnit__DOT__y___05Fh1519842 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1519480) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1519479));
    vlTOPp->mkMmUnit__DOT__y___05Fh1739989 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1739627) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1739626));
    vlTOPp->mkMmUnit__DOT__y___05Fh1960159 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1959797) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1959796));
    vlTOPp->mkMmUnit__DOT__y___05Fh2180306 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2179944) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2179943));
    vlTOPp->mkMmUnit__DOT__y___05Fh2400453 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2400091) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2400090));
    vlTOPp->mkMmUnit__DOT__y___05Fh3140554 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3140644) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3140645));
    vlTOPp->mkMmUnit__DOT__y___05Fh2920407 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2920497) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2920498));
    vlTOPp->mkMmUnit__DOT__y___05Fh2700260 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2700350) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2700351));
    vlTOPp->mkMmUnit__DOT__y___05Fh2480090 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2480180) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2480181));
    vlTOPp->mkMmUnit__DOT__y___05Fh718868 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh718958) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh718959));
    vlTOPp->mkMmUnit__DOT__y___05Fh3360701 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3360791) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3360792));
    vlTOPp->mkMmUnit__DOT__y___05Fh58414 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh58504) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh58505));
    vlTOPp->mkMmUnit__DOT__y___05Fh939038 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh939128) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh939129));
    vlTOPp->mkMmUnit__DOT__y___05Fh278568 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh278658) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh278659));
    vlTOPp->mkMmUnit__DOT__y___05Fh498718 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh498808) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh498809));
    vlTOPp->mkMmUnit__DOT__y___05Fh1159185 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1159275) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1159276));
    vlTOPp->mkMmUnit__DOT__y___05Fh1379332 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1379422) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1379423));
    vlTOPp->mkMmUnit__DOT__y___05Fh1599479 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1599569) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1599570));
    vlTOPp->mkMmUnit__DOT__y___05Fh1819649 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1819739) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1819740));
    vlTOPp->mkMmUnit__DOT__y___05Fh2039796 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2039886) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2039887));
    vlTOPp->mkMmUnit__DOT__y___05Fh2259943 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2260033) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2260034));
    vlTOPp->mkMmUnit__DOT__y___05Fh3280973 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3281063) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3281064));
    vlTOPp->mkMmUnit__DOT__y___05Fh3060826 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3060916) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3060917));
    vlTOPp->mkMmUnit__DOT__y___05Fh2840679 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2840769) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2840770));
    vlTOPp->mkMmUnit__DOT__y___05Fh2620509 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2620599) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2620600));
    vlTOPp->mkMmUnit__DOT__y___05Fh859287 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh859377) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh859378));
    vlTOPp->mkMmUnit__DOT__y___05Fh418987 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh419077) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh419078));
    vlTOPp->mkMmUnit__DOT__y___05Fh1079457 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1079547) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1079548));
    vlTOPp->mkMmUnit__DOT__y___05Fh3501120 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3501210) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3501211));
    vlTOPp->mkMmUnit__DOT__y___05Fh198833 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh198923) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh198924));
    vlTOPp->mkMmUnit__DOT__y___05Fh1299604 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1299694) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1299695));
    vlTOPp->mkMmUnit__DOT__y___05Fh639137 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh639227) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh639228));
    vlTOPp->mkMmUnit__DOT__y___05Fh1519751 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1519841) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1519842));
    vlTOPp->mkMmUnit__DOT__y___05Fh1739898 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1739988) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1739989));
    vlTOPp->mkMmUnit__DOT__y___05Fh1960068 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1960158) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1960159));
    vlTOPp->mkMmUnit__DOT__y___05Fh2180215 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2180305) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2180306));
    vlTOPp->mkMmUnit__DOT__y___05Fh2400362 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2400452) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2400453));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35368 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3140553) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3140554)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3140282) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3140283)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35367));
    vlTOPp->mkMmUnit__DOT__y___05Fh3140916 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3140554) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3140553));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32870 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2920406) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2920407)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2920135) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2920136)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32869));
    vlTOPp->mkMmUnit__DOT__y___05Fh2920769 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2920407) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2920406));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30372 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2700259) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2700260)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2699988) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2699989)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30371));
    vlTOPp->mkMmUnit__DOT__y___05Fh2700622 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2700260) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2700259));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27874 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2480089) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2480090)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2479818) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2479819)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27873));
    vlTOPp->mkMmUnit__DOT__y___05Fh2480452 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2480090) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2480089));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7890 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh718867) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh718868)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh718596) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh718597)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7889));
    vlTOPp->mkMmUnit__DOT__y___05Fh719230 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh718868) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh718867));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37866 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3360700) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3360701)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3360429) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3360430)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37865));
    vlTOPp->mkMmUnit__DOT__y___05Fh3361063 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3360701) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3360700));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d396 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh58413) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh58414)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh58142) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh58143)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d395));
    vlTOPp->mkMmUnit__DOT__y___05Fh58776 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh58414) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh58413));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10388 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh939037) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh939038)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh938766) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh938767)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_0_macunit_int_Mac_reg_B_996_BIT_7___05FETC___05F_d10387));
    vlTOPp->mkMmUnit__DOT__y___05Fh939400 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh939038) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh939037));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2894 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh278567) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh278568)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh278296) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh278297)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_1_macunit_int_Mac_reg_B_502_BIT_7___05FETC___05F_d2893));
    vlTOPp->mkMmUnit__DOT__y___05Fh278930 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh278568) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh278567));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5392 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh498717) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh498718)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh498446) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh498447)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_2_macunit_int_Mac_reg_B_000_BIT_7___05FETC___05F_d5391));
    vlTOPp->mkMmUnit__DOT__y___05Fh499080 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh498718) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh498717));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12886 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1159184) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1159185)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1158913) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1158914)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_1_macunit_int_Mac_reg_B_2494_BIT_7_ETC___05F_d12885));
    vlTOPp->mkMmUnit__DOT__y___05Fh1159547 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1159185) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1159184));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15384 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1379331) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1379332)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1379060) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1379061)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_2_macunit_int_Mac_reg_B_4992_BIT_7_ETC___05F_d15383));
    vlTOPp->mkMmUnit__DOT__y___05Fh1379694 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1379332) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1379331));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17882 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1599478) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1599479)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1599207) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1599208)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_1_3_macunit_int_Mac_reg_B_7490_BIT_7_ETC___05F_d17881));
    vlTOPp->mkMmUnit__DOT__y___05Fh1599841 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1599479) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1599478));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20380 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1819648) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1819649)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1819377) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1819378)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_0_macunit_int_Mac_reg_B_9988_BIT_7_ETC___05F_d20379));
    vlTOPp->mkMmUnit__DOT__y___05Fh1820011 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1819649) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1819648));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22878 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2039795) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2039796)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2039524) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2039525)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_1_macunit_int_Mac_reg_B_2486_BIT_7_ETC___05F_d22877));
    vlTOPp->mkMmUnit__DOT__y___05Fh2040158 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2039796) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2039795));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25376 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2259942) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2259943)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2259671) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2259672)) 
                          << 0x16U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_2_macunit_int_Mac_reg_B_4984_BIT_7_ETC___05F_d25375));
    vlTOPp->mkMmUnit__DOT__y___05Fh2260305 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2259943) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2259942));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_ETC___05F_d37014 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3280972) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3280973)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3280701) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3280702)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d37013)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3281335 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3280973) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3280972));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_ETC___05F_d34516 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3060825) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3060826)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3060554) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3060555)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34515)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3061188 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3060826) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3060825));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_ETC___05F_d32018 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2840678) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2840679)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2840407) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2840408)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d32017)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2841041 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2840679) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2840678));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_ETC___05F_d29520 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2620508) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2620509)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2620237) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2620238)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29519)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2620871 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2620509) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2620508));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT___05FETC___05F_d9536 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh859286) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh859287)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh859015) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh859016)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9535)));
    vlTOPp->mkMmUnit__DOT__y___05Fh859649 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh859287) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh859286));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT___05FETC___05F_d4540 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh418986) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh418987)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh418715) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh418716)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4539)));
    vlTOPp->mkMmUnit__DOT__y___05Fh419349 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh418987) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh418986));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_ETC___05F_d12034 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1079456) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1079457)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1079185) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1079186)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d12033)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1079819 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1079457) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1079456));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_ETC___05F_d39512 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3501119) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3501120)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3500848) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3500849)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39511)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3501482 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3501120) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3501119));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT___05FETC___05F_d2042 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh198832) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh198833)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh198561) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh198562)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d2041)));
    vlTOPp->mkMmUnit__DOT__y___05Fh199195 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh198833) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh198832));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_ETC___05F_d14532 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1299603) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1299604)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1299332) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1299333)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14531)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1299966 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1299604) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1299603));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT___05FETC___05F_d7038 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh639136) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh639137)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh638865) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh638866)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d7037)));
    vlTOPp->mkMmUnit__DOT__y___05Fh639499 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh639137) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh639136));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_ETC___05F_d17030 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1519750) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1519751)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1519479) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1519480)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d17029)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1520113 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1519751) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1519750));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_ETC___05F_d19528 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1739897) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1739898)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1739626) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1739627)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19527)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1740260 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1739898) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1739897));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_ETC___05F_d22026 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1960067) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1960068)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1959796) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1959797)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d22025)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1960430 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1960068) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1960067));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_ETC___05F_d24524 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2180214) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2180215)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2179943) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2179944)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24523)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2180577 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2180215) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2180214));
    vlTOPp->mkMmUnit__DOT__INV_IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_ETC___05F_d27022 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2400361) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2400362)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2400090) 
                          ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2400091)) 
                         << 0xaU) | (IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d27021)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2400724 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2400362) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2400361));
    vlTOPp->mkMmUnit__DOT__y___05Fh3140825 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3140915) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3140916));
    vlTOPp->mkMmUnit__DOT__y___05Fh2920678 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2920768) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2920769));
    vlTOPp->mkMmUnit__DOT__y___05Fh2700531 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2700621) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2700622));
    vlTOPp->mkMmUnit__DOT__y___05Fh2480361 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2480451) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2480452));
    vlTOPp->mkMmUnit__DOT__y___05Fh719139 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh719229) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh719230));
    vlTOPp->mkMmUnit__DOT__y___05Fh3360972 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3361062) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3361063));
    vlTOPp->mkMmUnit__DOT__y___05Fh58685 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh58775) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh58776));
    vlTOPp->mkMmUnit__DOT__y___05Fh939309 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh939399) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh939400));
    vlTOPp->mkMmUnit__DOT__y___05Fh278839 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh278929) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh278930));
    vlTOPp->mkMmUnit__DOT__y___05Fh498989 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh499079) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh499080));
    vlTOPp->mkMmUnit__DOT__y___05Fh1159456 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1159546) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1159547));
    vlTOPp->mkMmUnit__DOT__y___05Fh1379603 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1379693) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1379694));
    vlTOPp->mkMmUnit__DOT__y___05Fh1599750 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1599840) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1599841));
    vlTOPp->mkMmUnit__DOT__y___05Fh1819920 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1820010) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1820011));
    vlTOPp->mkMmUnit__DOT__y___05Fh2040067 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2040157) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2040158));
    vlTOPp->mkMmUnit__DOT__y___05Fh2260214 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2260304) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2260305));
    vlTOPp->mkMmUnit__DOT__y___05Fh3281244 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                >> 0xbU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3281335)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3061097 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                >> 0xbU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3061188)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2840950 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                >> 0xbU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2841041)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2620780 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                >> 0xbU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2620871)));
    vlTOPp->mkMmUnit__DOT__y___05Fh859558 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                    >> 0xbU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh859649)));
    vlTOPp->mkMmUnit__DOT__y___05Fh419258 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                    >> 0xbU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh419349)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1079728 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                >> 0xbU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1079819)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3501391 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                >> 0xbU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3501482)));
    vlTOPp->mkMmUnit__DOT__y___05Fh199104 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                    >> 0xbU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh199195)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1299875 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                >> 0xbU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1299966)));
    vlTOPp->mkMmUnit__DOT__y___05Fh639408 = (1U & (
                                                   ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                    >> 0xbU) 
                                                   | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh639499)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1520022 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                >> 0xbU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1520113)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1740169 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                >> 0xbU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1740260)));
    vlTOPp->mkMmUnit__DOT__y___05Fh1960339 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                >> 0xbU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1960430)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2180486 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                >> 0xbU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2180577)));
    vlTOPp->mkMmUnit__DOT__y___05Fh2400633 = (1U & 
                                              (((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                >> 0xbU) 
                                               | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2400724)));
    vlTOPp->mkMmUnit__DOT__y___05Fh3141187 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3140825) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3140824));
    vlTOPp->mkMmUnit__DOT__y___05Fh2921040 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2920678) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2920677));
    vlTOPp->mkMmUnit__DOT__y___05Fh2700893 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2700531) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2700530));
    vlTOPp->mkMmUnit__DOT__y___05Fh2480723 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2480361) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2480360));
    vlTOPp->mkMmUnit__DOT__y___05Fh719501 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh719139) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh719138));
    vlTOPp->mkMmUnit__DOT__y___05Fh3361334 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3360972) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3360971));
    vlTOPp->mkMmUnit__DOT__y___05Fh59047 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh58685) 
                                            & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh58684));
    vlTOPp->mkMmUnit__DOT__y___05Fh939671 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh939309) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh939308));
    vlTOPp->mkMmUnit__DOT__y___05Fh279201 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh278839) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh278838));
    vlTOPp->mkMmUnit__DOT__y___05Fh499351 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh498989) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh498988));
    vlTOPp->mkMmUnit__DOT__y___05Fh1159818 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1159456) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1159455));
    vlTOPp->mkMmUnit__DOT__y___05Fh1379965 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1379603) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1379602));
    vlTOPp->mkMmUnit__DOT__y___05Fh1600112 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1599750) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1599749));
    vlTOPp->mkMmUnit__DOT__y___05Fh1820282 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1819920) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1819919));
    vlTOPp->mkMmUnit__DOT__y___05Fh2040429 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2040067) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2040066));
    vlTOPp->mkMmUnit__DOT__y___05Fh2260576 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2260214) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2260213));
    vlTOPp->mkMmUnit__DOT__y___05Fh3281515 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3281244) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3061368 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3061097) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2841221 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2840950) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2621051 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2620780) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh859829 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh859558) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh419529 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh419258) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1079999 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1079728) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3501662 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3501391) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh199375 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh199104) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1300146 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1299875) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh639679 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh639408) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1520293 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1520022) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1740440 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1740169) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1960610 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1960339) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2180757 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2180486) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2400904 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2400633) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                 >> 0xcU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3141096 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3141186) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3141187));
    vlTOPp->mkMmUnit__DOT__y___05Fh2920949 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2921039) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2921040));
    vlTOPp->mkMmUnit__DOT__y___05Fh2700802 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2700892) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2700893));
    vlTOPp->mkMmUnit__DOT__y___05Fh2480632 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2480722) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2480723));
    vlTOPp->mkMmUnit__DOT__y___05Fh719410 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh719500) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh719501));
    vlTOPp->mkMmUnit__DOT__y___05Fh3361243 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3361333) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3361334));
    vlTOPp->mkMmUnit__DOT__y___05Fh58956 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh59046) 
                                            | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh59047));
    vlTOPp->mkMmUnit__DOT__y___05Fh939580 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh939670) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh939671));
    vlTOPp->mkMmUnit__DOT__y___05Fh279110 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh279200) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh279201));
    vlTOPp->mkMmUnit__DOT__y___05Fh499260 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh499350) 
                                             | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh499351));
    vlTOPp->mkMmUnit__DOT__y___05Fh1159727 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1159817) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1159818));
    vlTOPp->mkMmUnit__DOT__y___05Fh1379874 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1379964) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1379965));
    vlTOPp->mkMmUnit__DOT__y___05Fh1600021 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1600111) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1600112));
    vlTOPp->mkMmUnit__DOT__y___05Fh1820191 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh1820281) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1820282));
    vlTOPp->mkMmUnit__DOT__y___05Fh2040338 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2040428) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2040429));
    vlTOPp->mkMmUnit__DOT__y___05Fh2260485 = ((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2260575) 
                                              | (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2260576));
    vlTOPp->mkMmUnit__DOT__y___05Fh3281786 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3281515) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_2_macunit_bf16_Mac_reg_B_6701_BIT_3_6_ETC___05F_d36948) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3061639 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3061368) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_1_macunit_bf16_Mac_reg_B_4203_BIT_3_4_ETC___05F_d34450) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2841492 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2841221) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_0_macunit_bf16_Mac_reg_B_1705_BIT_3_1_ETC___05F_d31952) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2621322 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2621051) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_3_macunit_bf16_Mac_reg_B_9207_BIT_3_9_ETC___05F_d29454) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh860100 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh859829) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_3_macunit_bf16_Mac_reg_B_223_BIT_3_22_ETC___05F_d9470) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh419800 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh419529) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_1_macunit_bf16_Mac_reg_B_227_BIT_3_23_ETC___05F_d4474) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1080270 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1079999) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_0_macunit_bf16_Mac_reg_B_1721_BIT_3_1_ETC___05F_d11968) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh3501933 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3501662) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_3_3_macunit_bf16_Mac_reg_B_9199_BIT_3_9_ETC___05F_d39446) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh199646 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh199375) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_0_macunit_bf16_Mac_reg_B_729_BIT_3_73_ETC___05F_d1976) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1300417 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1300146) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_1_macunit_bf16_Mac_reg_B_4219_BIT_3_4_ETC___05F_d14466) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh639950 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh639679) 
                                             & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_0_2_macunit_bf16_Mac_reg_B_725_BIT_3_73_ETC___05F_d6972) 
                                                >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1520564 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1520293) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_2_macunit_bf16_Mac_reg_B_6717_BIT_3_6_ETC___05F_d16964) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1740711 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1740440) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_1_3_macunit_bf16_Mac_reg_B_9215_BIT_3_9_ETC___05F_d19462) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh1960881 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh1960610) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_0_macunit_bf16_Mac_reg_B_1713_BIT_3_1_ETC___05F_d21960) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2181028 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2180757) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_1_macunit_bf16_Mac_reg_B_4211_BIT_3_4_ETC___05F_d24458) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__y___05Fh2401175 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2400904) 
                                              & ((IData)(vlTOPp->mkMmUnit__DOT__IF_pes_2_2_macunit_bf16_Mac_reg_B_6709_BIT_3_6_ETC___05F_d26956) 
                                                 >> 0xdU));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35369 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3141095) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3141096)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3140824) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3140825)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_2_macunit_int_Mac_reg_B_4976_BIT_7_ETC___05F_d35368));
    vlTOPp->mkMmUnit__DOT__y___05Fh3141458 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3141096) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3141095));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32871 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2920948) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2920949)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2920677) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2920678)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_1_macunit_int_Mac_reg_B_2478_BIT_7_ETC___05F_d32870));
    vlTOPp->mkMmUnit__DOT__y___05Fh2921311 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2920949) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2920948));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30373 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2700801) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2700802)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2700530) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2700531)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_0_macunit_int_Mac_reg_B_9980_BIT_7_ETC___05F_d30372));
    vlTOPp->mkMmUnit__DOT__y___05Fh2701164 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2700802) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2700801));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27875 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2480631) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2480632)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2480360) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2480361)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_2_3_macunit_int_Mac_reg_B_7482_BIT_7_ETC___05F_d27874));
    vlTOPp->mkMmUnit__DOT__y___05Fh2480994 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh2480632) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh2480631));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7891 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh719409) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh719410)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh719138) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh719139)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_3_macunit_int_Mac_reg_B_498_BIT_7___05FETC___05F_d7890));
    vlTOPp->mkMmUnit__DOT__y___05Fh719772 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh719410) 
                                             & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh719409));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37867 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3361242) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3361243)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3360971) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3360972)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_3_3_macunit_int_Mac_reg_B_7474_BIT_7_ETC___05F_d37866));
    vlTOPp->mkMmUnit__DOT__y___05Fh3361605 = ((IData)(vlTOPp->mkMmUnit__DOT__y___05Fh3361243) 
                                              & (IData)(vlTOPp->mkMmUnit__DOT__x___05Fh3361242));
    vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d397 
        = ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh58955) 
             ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh58956)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMmUnit__DOT__x___05Fh58684) 
                           ^ (IData)(vlTOPp->mkMmUnit__DOT__y___05Fh58685)) 
                          << 0x18U) | vlTOPp->mkMmUnit__DOT__IF_IF_pes_0_0_macunit_int_Mac_reg_B_BIT_7_THEN_ETC___05F_d396));
}
