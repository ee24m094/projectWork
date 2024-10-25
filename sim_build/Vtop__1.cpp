// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop::_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMacUnitTop__DOT__y___05Fh323607 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh323245) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh323244));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh323516 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh323606) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh323607));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh323878 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh323516) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh323515));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh323787 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh323877) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh323878));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3806 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh323786) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh323787)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh323515) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh323516)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3805));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh324149 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh323787) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh323786));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh324058 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh324148) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh324149));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh324420 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh324058) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh324057));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh324329 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh324419) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh324420));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3807 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh324328) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh324329)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh324057) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh324058)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3806));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh324691 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh324329) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh324328));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh324600 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh324690) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh324691));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh324962 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh324600) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh324599));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh324871 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh324961) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh324962));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3808 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh324870) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh324871)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh324599) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh324600)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3807));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh325233 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh324871) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh324870));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh325142 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh325232) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh325233));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh325504 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh325142) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh325141));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh325413 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh325503) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh325504));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3809 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh325412) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh325413)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh325141) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh325142)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3808));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh325775 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh325413) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh325412));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh325684 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh325774) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh325775));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh326046 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh325684) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh325683));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh325955 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh326045) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh326046));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3810 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh325954) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh325955)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh325683) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh325684)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3809));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh326317 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh325955) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh325954));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh326226 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh326316) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh326317));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh326588 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh326226) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh326225));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh326497 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh326587) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh326588));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3811 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh326496) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh326497)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh326225) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh326226)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3810));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh326859 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh326497) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh326496));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh326768 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh326858) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh326859));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh327130 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh326768) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh326767));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh327039 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh327129) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh327130));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3812 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh327038) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh327039)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh326767) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh326768)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3811));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh327401 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh327039) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh327038));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh327310 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh327400) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh327401));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh327672 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh327310) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh327309));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh327581 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                             >> 0x20U)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh327672)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3813 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                            >> 0x21U)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh327581))))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh327309) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh327310)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3812))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh327852 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh327581) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                            >> 0x21U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh328123 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh327852) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                            >> 0x22U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh328394 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh328123) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                            >> 0x23U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh328665 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh328394) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                            >> 0x24U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3815 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                            >> 0x25U)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh328665))))) 
            << 0x25U) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                          >> 0x24U)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh328394))))) 
                          << 0x24U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                                     >> 0x23U)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh328123))))) 
                                        << 0x23U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                                      >> 0x22U)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh327852))))) 
                                         << 0x22U) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3813))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh328936 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh328665) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                            >> 0x25U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh329207 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh328936) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                            >> 0x26U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh329478 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh329207) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                            >> 0x27U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh329749 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh329478) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                            >> 0x28U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3817 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                            >> 0x29U)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh329749))))) 
            << 0x29U) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                          >> 0x28U)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh329478))))) 
                          << 0x28U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                                     >> 0x27U)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh329207))))) 
                                        << 0x27U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                                      >> 0x26U)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh328936))))) 
                                         << 0x26U) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3815))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh330020 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh329749) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                            >> 0x29U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh330291 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh330020) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                            >> 0x2aU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh330562 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh330291) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                            >> 0x2bU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh330833 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh330562) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                            >> 0x2cU)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3819 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                            >> 0x2dU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh330833))))) 
            << 0x2dU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                          >> 0x2cU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh330562))))) 
                          << 0x2cU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                                     >> 0x2bU)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh330291))))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                                      >> 0x2aU)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh330020))))) 
                                         << 0x2aU) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3817))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh331104 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh330833) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                            >> 0x2dU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh331375 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh331104) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                            >> 0x2eU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh192350 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh331375))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh331104))))) 
                          << 0x2eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3819));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
        = ((0x200U & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729_OR___05FETC___05F_d1735)
            ? vlTOPp->mkMacUnitTop__DOT__product___05Fh192350
            : vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3610);
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq43 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821))
            ? 1ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh340336 = (1U 
                                                 & (~ (IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                               >> 0x21U))));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh340427 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x20U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh340065 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x20U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh340156 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x1fU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh339794 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x1fU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh339885 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x1eU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh339523 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x1eU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh339614 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x1dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh339252 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x1dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh339343 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x1cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh338981 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x1cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh339072 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x1bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh338710 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x1bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh338801 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x1aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh338439 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x1aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh338530 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x19U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh338168 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x19U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh338259 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x18U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh337897 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x18U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh337988 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x17U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh337626 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x17U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh337717 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x16U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh337355 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x16U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh337446 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x15U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh337084 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x15U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh337175 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x14U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh336813 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x14U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh336904 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x13U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh336542 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x13U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh336633 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x12U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh336271 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x12U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh336362 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x11U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh336000 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x11U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh336091 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x10U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh335729 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x10U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh335820 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0xfU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh335458 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0xfU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh335549 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0xeU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh335187 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0xeU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh335278 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0xdU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh334916 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0xdU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh335007 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0xcU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh334644 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0xcU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh334735 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0xbU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq42 
        = ((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                           >> 0xaU)) & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767))
            ? 0x800ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh334376 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0xbU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4010 
        = ((0x800U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh334376) 
                       ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq42 
                                  >> 0xbU))) << 0xbU)) 
           | ((0x400U & (((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                   >> 0xaU)) ^ vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767) 
                         << 0xaU)) | ((0x3feU & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                          >> 1U)) 
                                                 << 1U)) 
                                      | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq43)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh334736 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq42 
                                                          >> 0xbU)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh334376));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh334645 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh334735) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh334736));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh335008 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh334645) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh334644));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh334917 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh335007) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh335008));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4011 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh334916) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh334917)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh334644) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh334645)) 
                         << 0xcU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4010)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh335279 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh334917) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh334916));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh335188 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh335278) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh335279));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh335550 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh335188) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh335187));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh335459 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh335549) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh335550));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4012 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh335458) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh335459)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh335187) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh335188)) 
                         << 0xeU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4011)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh335821 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh335459) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh335458));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh335730 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh335820) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh335821));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh336092 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh335730) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh335729));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh336001 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh336091) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh336092));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4013 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh336000) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh336001)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh335729) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh335730)) 
                          << 0x10U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4012)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh336363 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh336001) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh336000));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh336272 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh336362) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh336363));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh336634 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh336272) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh336271));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh336543 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh336633) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh336634));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4014 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh336542) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh336543)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh336271) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh336272)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4013));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh336905 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh336543) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh336542));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh336814 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh336904) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh336905));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh337176 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh336814) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh336813));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh337085 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh337175) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh337176));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4015 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh337084) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh337085)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh336813) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh336814)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4014));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh337447 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh337085) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh337084));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh337356 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh337446) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh337447));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh337718 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh337356) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh337355));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh337627 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh337717) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh337718));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4016 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh337626) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh337627)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh337355) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh337356)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4015));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh337989 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh337627) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh337626));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh337898 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh337988) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh337989));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh338260 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh337898) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh337897));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh338169 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh338259) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh338260));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4017 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh338168) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh338169)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh337897) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh337898)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4016));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh338531 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh338169) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh338168));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh338440 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh338530) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh338531));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh338802 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh338440) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh338439));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh338711 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh338801) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh338802));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4018 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh338710) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh338711)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh338439) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh338440)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4017));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh339073 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh338711) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh338710));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh338982 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh339072) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh339073));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh339344 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh338982) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh338981));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh339253 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh339343) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh339344));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4019 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh339252) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh339253)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh338981) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh338982)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4018));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh339615 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh339253) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh339252));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh339524 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh339614) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh339615));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh339886 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh339524) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh339523));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh339795 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh339885) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh339886));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4020 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh339794) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh339795)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh339523) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh339524)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4019));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh340157 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh339795) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh339794));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh340066 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh340156) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh340157));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh340428 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh340066) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh340065));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh340337 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh340427) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh340428));
    vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0___05FETC___05F_d4021 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh340336) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh340337)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh340065) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh340066)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4020))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh340699 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh340337) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh340336));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh340608 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                             >> 0x21U)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh340699)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh340879 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh340608) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                            >> 0x22U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh341150 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh340879) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                            >> 0x23U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh341421 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh341150) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                            >> 0x24U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4023 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                            >> 0x25U)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh341421))))) 
            << 0x25U) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                          >> 0x24U)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh341150))))) 
                          << 0x24U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                                     >> 0x23U)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh340879))))) 
                                        << 0x23U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                                      >> 0x22U)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh340608))))) 
                                         << 0x22U) 
                                        | vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0___05FETC___05F_d4021))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh341692 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh341421) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                            >> 0x25U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh341963 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh341692) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                            >> 0x26U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh342234 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh341963) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                            >> 0x27U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh342505 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh342234) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                            >> 0x28U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4025 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                            >> 0x29U)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh342505))))) 
            << 0x29U) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                          >> 0x28U)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh342234))))) 
                          << 0x28U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                                     >> 0x27U)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh341963))))) 
                                        << 0x27U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                                      >> 0x26U)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh341692))))) 
                                         << 0x26U) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4023))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh342776 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh342505) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                            >> 0x29U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh343047 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh342776) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                            >> 0x2aU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh343318 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh343047) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                            >> 0x2bU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh343589 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh343318) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                            >> 0x2cU)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4027 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                            >> 0x2dU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh343589))))) 
            << 0x2dU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                          >> 0x2cU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh343318))))) 
                          << 0x2cU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                                     >> 0x2bU)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh343047))))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                                      >> 0x2aU)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh342776))))) 
                                         << 0x2aU) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4025))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh343860 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh343589) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                            >> 0x2dU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh344131 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh343860) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                            >> 0x2eU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh191171 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh344131))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh343860))))) 
                          << 0x2eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4027));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
        = ((0x400U & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729_OR___05FETC___05F_d1735)
            ? vlTOPp->mkMacUnitTop__DOT__product___05Fh191171
            : vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d3821);
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq45 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029))
            ? 1ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh353358 = (1U 
                                                 & (~ (IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                               >> 0x22U))));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh353449 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x21U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh353087 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x21U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh353178 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x20U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh352816 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x20U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh352907 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x1fU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh352545 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x1fU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh352636 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x1eU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh352274 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x1eU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh352365 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x1dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh352003 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x1dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh352094 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x1cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh351732 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x1cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh351823 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x1bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh351461 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x1bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh351552 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x1aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh351190 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x1aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh351281 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x19U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh350919 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x19U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh351010 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x18U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh350648 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x18U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh350739 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x17U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh350377 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x17U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh350468 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x16U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh350106 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x16U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh350197 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x15U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh349835 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x15U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh349926 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x14U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh349564 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x14U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh349655 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x13U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh349293 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x13U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh349384 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x12U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh349022 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x12U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh349113 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x11U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh348751 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x11U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh348842 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x10U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh348480 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x10U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh348571 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0xfU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh348209 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0xfU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh348300 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0xeU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh347938 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0xeU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh348029 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0xdU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh347666 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0xdU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh347757 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0xcU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq44 
        = ((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                           >> 0xbU)) & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767))
            ? 0x1000ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh347398 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0xcU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh347758 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq44 
                                                          >> 0xcU)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh347398));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh347667 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh347757) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh347758));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4215 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh347666) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh347667)) 
            << 0xdU) | ((0x1000U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh347398) 
                                     ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq44 
                                                >> 0xcU))) 
                                    << 0xcU)) | ((0x800U 
                                                  & (((IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                               >> 0xbU)) 
                                                      ^ vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767) 
                                                     << 0xbU)) 
                                                 | ((0x7feU 
                                                     & ((IData)(
                                                                (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                                 >> 1U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq45))))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh348030 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh347667) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh347666));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh347939 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh348029) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh348030));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh348301 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh347939) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh347938));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh348210 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh348300) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh348301));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4216 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh348209) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh348210)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh347938) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh347939)) 
                         << 0xeU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4215)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh348572 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh348210) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh348209));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh348481 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh348571) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh348572));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh348843 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh348481) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh348480));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh348752 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh348842) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh348843));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4217 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh348751) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh348752)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh348480) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh348481)) 
                          << 0x10U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4216)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh349114 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh348752) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh348751));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh349023 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh349113) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh349114));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh349385 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh349023) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh349022));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh349294 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh349384) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh349385));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4218 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh349293) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh349294)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh349022) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh349023)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4217));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh349656 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh349294) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh349293));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh349565 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh349655) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh349656));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh349927 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh349565) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh349564));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh349836 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh349926) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh349927));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4219 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh349835) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh349836)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh349564) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh349565)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4218));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh350198 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh349836) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh349835));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh350107 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh350197) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh350198));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh350469 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh350107) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh350106));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh350378 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh350468) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh350469));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4220 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh350377) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh350378)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh350106) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh350107)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4219));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh350740 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh350378) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh350377));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh350649 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh350739) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh350740));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh351011 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh350649) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh350648));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh350920 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh351010) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh351011));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4221 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh350919) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh350920)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh350648) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh350649)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4220));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh351282 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh350920) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh350919));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh351191 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh351281) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh351282));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh351553 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh351191) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh351190));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh351462 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh351552) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh351553));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4222 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh351461) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh351462)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh351190) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh351191)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4221));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh351824 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh351462) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh351461));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh351733 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh351823) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh351824));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh352095 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh351733) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh351732));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh352004 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh352094) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh352095));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4223 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh352003) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh352004)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh351732) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh351733)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4222));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh352366 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh352004) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh352003));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh352275 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh352365) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh352366));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh352637 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh352275) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh352274));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh352546 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh352636) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh352637));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4224 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh352545) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh352546)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh352274) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh352275)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4223));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh352908 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh352546) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh352545));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh352817 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh352907) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh352908));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh353179 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh352817) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh352816));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh353088 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh353178) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh353179));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4225 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh353087) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh353088)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh352816) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh352817)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4224))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh353450 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh353088) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh353087));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh353359 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh353449) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh353450));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh353721 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh353359) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh353358));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh353630 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                             >> 0x22U)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh353721)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4226 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                            >> 0x23U)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh353630))))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh353358) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh353359)))) 
                          << 0x22U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4225));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh353901 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh353630) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                            >> 0x23U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh354172 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh353901) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                            >> 0x24U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh354443 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh354172) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                            >> 0x25U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh354714 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh354443) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                            >> 0x26U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4228 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                            >> 0x27U)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh354714))))) 
            << 0x27U) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                          >> 0x26U)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh354443))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                                     >> 0x25U)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh354172))))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                                      >> 0x24U)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh353901))))) 
                                         << 0x24U) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4226))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh354985 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh354714) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                            >> 0x27U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh355256 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh354985) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                            >> 0x28U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh355527 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh355256) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                            >> 0x29U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh355798 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh355527) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                            >> 0x2aU)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4230 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                            >> 0x2bU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh355798))))) 
            << 0x2bU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                          >> 0x2aU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh355527))))) 
                          << 0x2aU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                                     >> 0x29U)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh355256))))) 
                                        << 0x29U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                                      >> 0x28U)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh354985))))) 
                                         << 0x28U) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4228))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh356069 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh355798) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                            >> 0x2bU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh356340 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh356069) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                            >> 0x2cU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh356611 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh356340) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                            >> 0x2dU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh356882 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh356611) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                            >> 0x2eU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh189992 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh356882))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh356611))))) 
                          << 0x2eU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                                     >> 0x2dU)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh356340))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029 
                                                                      >> 0x2cU)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh356069))))) 
                                         << 0x2cU) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4230))));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
        = ((0x800U & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729_OR___05FETC___05F_d1735)
            ? vlTOPp->mkMacUnitTop__DOT__product___05Fh189992
            : vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4029);
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq47 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233))
            ? 1ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh366375 = (1U 
                                                 & (~ (IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                               >> 0x23U))));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh366466 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x22U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh366104 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x22U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh366195 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x21U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh365833 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x21U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh365924 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x20U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh365562 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x20U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh365653 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x1fU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh365291 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x1fU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh365382 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x1eU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh365020 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x1eU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh365111 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x1dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh364749 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x1dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh364840 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x1cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh364478 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x1cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh364569 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x1bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh364207 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x1bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh364298 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x1aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh363936 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x1aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh364027 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x19U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh363665 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x19U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh363756 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x18U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh363394 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x18U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh363485 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x17U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh363123 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x17U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh363214 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x16U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh362852 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x16U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh362943 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x15U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh362581 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x15U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh362672 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x14U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh362310 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x14U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh362401 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x13U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh362039 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x13U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh362130 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x12U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh361768 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x12U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh361859 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x11U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh361497 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x11U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh361588 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x10U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh361226 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x10U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh361317 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0xfU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh360955 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0xfU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh361046 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0xeU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh360683 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0xeU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh360774 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0xdU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq46 
        = ((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                           >> 0xcU)) & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767))
            ? 0x2000ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh360415 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0xdU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4416 
        = ((0x2000U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh360415) 
                        ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq46 
                                   >> 0xdU))) << 0xdU)) 
           | ((0x1000U & (((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                    >> 0xcU)) ^ vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767) 
                          << 0xcU)) | ((0xffeU & ((IData)(
                                                          (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                           >> 1U)) 
                                                  << 1U)) 
                                       | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq47)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh360775 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq46 
                                                          >> 0xdU)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh360415));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh360684 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh360774) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh360775));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh361047 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh360684) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh360683));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh360956 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh361046) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh361047));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4417 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh360955) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh360956)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh360683) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh360684)) 
                         << 0xeU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4416)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh361318 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh360956) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh360955));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh361227 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh361317) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh361318));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh361589 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh361227) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh361226));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh361498 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh361588) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh361589));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4418 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh361497) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh361498)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh361226) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh361227)) 
                          << 0x10U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4417)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh361860 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh361498) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh361497));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh361769 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh361859) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh361860));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh362131 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh361769) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh361768));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh362040 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh362130) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh362131));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4419 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh362039) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh362040)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh361768) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh361769)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4418));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh362402 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh362040) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh362039));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh362311 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh362401) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh362402));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh362673 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh362311) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh362310));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh362582 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh362672) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh362673));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4420 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh362581) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh362582)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh362310) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh362311)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4419));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh362944 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh362582) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh362581));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh362853 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh362943) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh362944));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh363215 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh362853) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh362852));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh363124 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh363214) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh363215));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4421 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh363123) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh363124)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh362852) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh362853)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4420));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh363486 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh363124) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh363123));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh363395 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh363485) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh363486));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh363757 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh363395) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh363394));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh363666 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh363756) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh363757));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4422 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh363665) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh363666)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh363394) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh363395)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4421));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh364028 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh363666) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh363665));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh363937 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh364027) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh364028));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh364299 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh363937) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh363936));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh364208 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh364298) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh364299));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4423 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh364207) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh364208)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh363936) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh363937)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4422));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh364570 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh364208) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh364207));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh364479 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh364569) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh364570));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh364841 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh364479) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh364478));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh364750 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh364840) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh364841));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4424 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh364749) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh364750)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh364478) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh364479)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4423));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh365112 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh364750) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh364749));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh365021 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh365111) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh365112));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh365383 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh365021) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh365020));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh365292 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh365382) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh365383));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4425 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh365291) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh365292)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh365020) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh365021)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4424));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh365654 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh365292) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh365291));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh365563 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh365653) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh365654));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh365925 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh365563) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh365562));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh365834 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh365924) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh365925));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4426 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh365833) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh365834)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh365562) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh365563)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4425))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh366196 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh365834) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh365833));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh366105 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh366195) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh366196));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh366467 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh366105) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh366104));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh366376 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh366466) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh366467));
    vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0___05FETC___05F_d4427 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh366375) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh366376)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh366104) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh366105)))) 
                          << 0x22U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4426));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh366738 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh366376) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh366375));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh366647 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                             >> 0x23U)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh366738)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh366918 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh366647) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                            >> 0x24U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh367189 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh366918) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                            >> 0x25U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh367460 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh367189) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                            >> 0x26U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4429 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                            >> 0x27U)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh367460))))) 
            << 0x27U) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                          >> 0x26U)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh367189))))) 
                          << 0x26U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                                     >> 0x25U)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh366918))))) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                                      >> 0x24U)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh366647))))) 
                                         << 0x24U) 
                                        | vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0___05FETC___05F_d4427))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh367731 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh367460) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                            >> 0x27U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh368002 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh367731) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                            >> 0x28U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh368273 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh368002) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                            >> 0x29U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh368544 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh368273) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                            >> 0x2aU)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4431 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                            >> 0x2bU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh368544))))) 
            << 0x2bU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                          >> 0x2aU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh368273))))) 
                          << 0x2aU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                                     >> 0x29U)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh368002))))) 
                                        << 0x29U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                                      >> 0x28U)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh367731))))) 
                                         << 0x28U) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4429))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh368815 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh368544) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                            >> 0x2bU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh369086 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh368815) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                            >> 0x2cU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh369357 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh369086) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                            >> 0x2dU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh369628 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh369357) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                            >> 0x2eU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh188813 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh369628))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh369357))))) 
                          << 0x2eU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                                     >> 0x2dU)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh369086))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233 
                                                                      >> 0x2cU)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh368815))))) 
                                         << 0x2cU) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4431))));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
        = ((0x1000U & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729_OR___05FETC___05F_d1735)
            ? vlTOPp->mkMacUnitTop__DOT__product___05Fh188813
            : vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4233);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh379387 = (1U 
                                                 & (~ (IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                               >> 0x24U))));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq49 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434))
            ? 1ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh379478 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x23U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh379116 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x23U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh379207 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x22U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh378845 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x22U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh378936 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x21U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh378574 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x21U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh378665 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x20U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh378303 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x20U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh378394 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x1fU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh378032 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x1fU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh378123 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x1eU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh377761 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x1eU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh377852 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x1dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh377490 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x1dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh377581 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x1cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh377219 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x1cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh377310 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x1bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh376948 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x1bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh377039 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x1aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh376677 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x1aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh376768 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x19U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh376406 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x19U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh376497 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x18U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh376135 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x18U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh376226 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x17U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh375864 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x17U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh375955 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x16U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh375593 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x16U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh375684 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x15U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh375322 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x15U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh375413 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x14U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh375051 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x14U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh375142 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x13U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh374780 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x13U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh374871 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x12U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh374509 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x12U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh374600 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x11U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh374238 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x11U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh374329 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x10U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh373967 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x10U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh374058 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0xfU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh373695 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0xfU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh373786 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0xeU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq48 
        = ((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                           >> 0xdU)) & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767))
            ? 0x4000ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh373427 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0xeU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh373787 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq48 
                                                          >> 0xeU)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh373427));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh373696 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh373786) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh373787));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4614 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh373695) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh373696)) 
            << 0xfU) | ((0x4000U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh373427) 
                                     ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq48 
                                                >> 0xeU))) 
                                    << 0xeU)) | ((0x2000U 
                                                  & (((IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                               >> 0xdU)) 
                                                      ^ vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767) 
                                                     << 0xdU)) 
                                                 | ((0x1ffeU 
                                                     & ((IData)(
                                                                (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                                 >> 1U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq49))))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh374059 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh373696) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh373695));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh373968 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh374058) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh374059));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh374330 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh373968) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh373967));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh374239 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh374329) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh374330));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4615 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh374238) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh374239)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh373967) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh373968)) 
                          << 0x10U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4614)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh374601 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh374239) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh374238));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh374510 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh374600) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh374601));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh374872 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh374510) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh374509));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh374781 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh374871) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh374872));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4616 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh374780) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh374781)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh374509) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh374510)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4615));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh375143 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh374781) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh374780));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh375052 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh375142) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh375143));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh375414 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh375052) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh375051));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh375323 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh375413) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh375414));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4617 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh375322) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh375323)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh375051) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh375052)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4616));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh375685 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh375323) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh375322));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh375594 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh375684) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh375685));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh375956 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh375594) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh375593));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh375865 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh375955) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh375956));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4618 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh375864) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh375865)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh375593) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh375594)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4617));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh376227 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh375865) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh375864));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh376136 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh376226) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh376227));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh376498 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh376136) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh376135));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh376407 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh376497) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh376498));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4619 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh376406) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh376407)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh376135) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh376136)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4618));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh376769 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh376407) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh376406));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh376678 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh376768) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh376769));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh377040 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh376678) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh376677));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh376949 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh377039) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh377040));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4620 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh376948) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh376949)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh376677) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh376678)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4619));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh377311 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh376949) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh376948));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh377220 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh377310) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh377311));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh377582 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh377220) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh377219));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh377491 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh377581) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh377582));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4621 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh377490) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh377491)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh377219) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh377220)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4620));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh377853 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh377491) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh377490));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh377762 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh377852) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh377853));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh378124 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh377762) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh377761));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh378033 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh378123) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh378124));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4622 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh378032) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh378033)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh377761) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh377762)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4621));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh378395 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh378033) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh378032));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh378304 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh378394) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh378395));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh378666 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh378304) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh378303));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh378575 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh378665) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh378666));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4623 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh378574) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh378575)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh378303) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh378304)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4622))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh378937 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh378575) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh378574));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh378846 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh378936) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh378937));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh379208 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh378846) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh378845));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh379117 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh379207) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh379208));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4624 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh379116) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh379117)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh378845) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh378846)))) 
                          << 0x22U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4623));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh379479 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh379117) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh379116));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh379388 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh379478) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh379479));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh379750 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh379388) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh379387));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh379659 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                             >> 0x24U)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh379750)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4625 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                            >> 0x25U)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh379659))))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh379387) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh379388)))) 
                          << 0x24U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4624));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh379930 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh379659) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                            >> 0x25U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh380201 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh379930) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                            >> 0x26U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh380472 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh380201) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                            >> 0x27U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh380743 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh380472) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                            >> 0x28U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4627 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                            >> 0x29U)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh380743))))) 
            << 0x29U) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                          >> 0x28U)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh380472))))) 
                          << 0x28U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                                     >> 0x27U)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh380201))))) 
                                        << 0x27U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                                      >> 0x26U)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh379930))))) 
                                         << 0x26U) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4625))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh381014 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh380743) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                            >> 0x29U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh381285 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh381014) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                            >> 0x2aU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh381556 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh381285) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                            >> 0x2bU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh381827 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh381556) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                            >> 0x2cU)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4629 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                            >> 0x2dU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh381827))))) 
            << 0x2dU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                          >> 0x2cU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh381556))))) 
                          << 0x2cU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                                     >> 0x2bU)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh381285))))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                                      >> 0x2aU)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh381014))))) 
                                         << 0x2aU) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4627))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh382098 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh381827) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                            >> 0x2dU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh382369 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh382098) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                            >> 0x2eU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh187634 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh382369))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh382098))))) 
                          << 0x2eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4629));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
        = ((0x2000U & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729_OR___05FETC___05F_d1735)
            ? vlTOPp->mkMacUnitTop__DOT__product___05Fh187634
            : vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4434);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh392394 = (1U 
                                                 & (~ (IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                               >> 0x25U))));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh392485 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x24U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq51 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631))
            ? 1ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh392123 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x24U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh392214 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x23U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh391852 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x23U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh391943 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x22U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh391581 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x22U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh391672 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x21U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh391310 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x21U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh391401 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x20U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh391039 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x20U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh391130 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x1fU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh390768 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x1fU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh390859 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x1eU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh390497 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x1eU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh390588 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x1dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh390226 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x1dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh390317 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x1cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh389955 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x1cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh390046 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x1bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh389684 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x1bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh389775 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x1aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh389413 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x1aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh389504 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x19U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh389142 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x19U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh389233 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x18U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh388871 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x18U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh388962 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x17U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh388600 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x17U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh388691 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x16U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh388329 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x16U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh388420 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x15U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh388058 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x15U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh388149 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x14U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh387787 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x14U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh387878 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x13U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh387516 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x13U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh387607 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x12U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh387245 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x12U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh387336 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x11U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh386974 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x11U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh387065 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x10U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh386702 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x10U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh386793 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0xfU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq50 
        = ((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                           >> 0xeU)) & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767))
            ? 0x8000ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh386434 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0xfU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4808 
        = ((0x8000U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh386434) 
                        ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq50 
                                   >> 0xfU))) << 0xfU)) 
           | ((0x4000U & (((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                    >> 0xeU)) ^ vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767) 
                          << 0xeU)) | ((0x3ffeU & ((IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                            >> 1U)) 
                                                   << 1U)) 
                                       | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq51)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh386794 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq50 
                                                          >> 0xfU)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh386434));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh386703 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh386793) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh386794));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh387066 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh386703) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh386702));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh386975 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh387065) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh387066));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4809 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh386974) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh386975)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh386702) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh386703)) 
                          << 0x10U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4808)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh387337 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh386975) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh386974));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh387246 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh387336) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh387337));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh387608 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh387246) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh387245));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh387517 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh387607) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh387608));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4810 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh387516) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh387517)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh387245) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh387246)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4809));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh387879 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh387517) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh387516));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh387788 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh387878) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh387879));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh388150 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh387788) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh387787));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh388059 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh388149) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh388150));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4811 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh388058) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh388059)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh387787) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh387788)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4810));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh388421 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh388059) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh388058));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh388330 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh388420) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh388421));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh388692 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh388330) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh388329));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh388601 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh388691) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh388692));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4812 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh388600) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh388601)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh388329) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh388330)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4811));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh388963 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh388601) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh388600));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh388872 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh388962) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh388963));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh389234 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh388872) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh388871));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh389143 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh389233) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh389234));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4813 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh389142) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh389143)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh388871) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh388872)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4812));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh389505 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh389143) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh389142));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh389414 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh389504) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh389505));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh389776 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh389414) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh389413));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh389685 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh389775) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh389776));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4814 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh389684) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh389685)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh389413) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh389414)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4813));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh390047 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh389685) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh389684));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh389956 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh390046) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh390047));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh390318 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh389956) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh389955));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh390227 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh390317) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh390318));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4815 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh390226) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh390227)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh389955) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh389956)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4814));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh390589 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh390227) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh390226));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh390498 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh390588) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh390589));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh390860 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh390498) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh390497));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh390769 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh390859) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh390860));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4816 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh390768) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh390769)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh390497) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh390498)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4815));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh391131 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh390769) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh390768));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh391040 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh391130) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh391131));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh391402 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh391040) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh391039));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh391311 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh391401) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh391402));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4817 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh391310) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh391311)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh391039) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh391040)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4816))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh391673 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh391311) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh391310));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh391582 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh391672) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh391673));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh391944 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh391582) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh391581));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh391853 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh391943) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh391944));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4818 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh391852) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh391853)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh391581) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh391582)))) 
                          << 0x22U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4817));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh392215 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh391853) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh391852));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh392124 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh392214) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh392215));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh392486 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh392124) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh392123));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh392395 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh392485) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh392486));
    vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0___05FETC___05F_d4819 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh392394) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh392395)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh392123) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh392124)))) 
                          << 0x24U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4818));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh392757 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh392395) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh392394));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh392666 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                             >> 0x25U)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh392757)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh392937 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh392666) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                            >> 0x26U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh393208 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh392937) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                            >> 0x27U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh393479 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh393208) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                            >> 0x28U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4821 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                            >> 0x29U)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh393479))))) 
            << 0x29U) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                          >> 0x28U)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh393208))))) 
                          << 0x28U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                                     >> 0x27U)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh392937))))) 
                                        << 0x27U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                                      >> 0x26U)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh392666))))) 
                                         << 0x26U) 
                                        | vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0___05FETC___05F_d4819))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh393750 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh393479) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                            >> 0x29U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh394021 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh393750) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                            >> 0x2aU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh394292 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh394021) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                            >> 0x2bU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh394563 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh394292) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                            >> 0x2cU)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4823 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                            >> 0x2dU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh394563))))) 
            << 0x2dU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                          >> 0x2cU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh394292))))) 
                          << 0x2cU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                                     >> 0x2bU)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh394021))))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                                      >> 0x2aU)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh393750))))) 
                                         << 0x2aU) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4821))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh394834 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh394563) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                            >> 0x2dU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh395105 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh394834) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                            >> 0x2eU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh186455 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh395105))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh394834))))) 
                          << 0x2eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4823));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
        = ((0x4000U & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729_OR___05FETC___05F_d1735)
            ? vlTOPp->mkMacUnitTop__DOT__product___05Fh186455
            : vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4631);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh405396 = (1U 
                                                 & (~ (IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                               >> 0x26U))));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh405487 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x25U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq53 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825))
            ? 1ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh405125 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x25U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh405216 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x24U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh404854 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x24U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh404945 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x23U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh404583 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x23U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh404674 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x22U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh404312 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x22U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh404403 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x21U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh404041 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x21U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh404132 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x20U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh403770 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x20U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh403861 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x1fU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh403499 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x1fU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh403590 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x1eU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh403228 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x1eU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh403319 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x1dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh402957 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x1dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh403048 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x1cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh402686 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x1cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh402777 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x1bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh402415 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x1bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh402506 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x1aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh402144 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x1aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh402235 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x19U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh401873 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x19U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh401964 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x18U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh401602 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x18U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh401693 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x17U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh401331 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x17U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh401422 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x16U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh401060 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x16U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh401151 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x15U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh400789 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x15U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh400880 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x14U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh400518 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x14U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh400609 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x13U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh400247 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x13U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh400338 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x12U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh399976 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x12U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh400067 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x11U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh399704 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x11U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh399795 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x10U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq52 
        = ((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                           >> 0xfU)) & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767))
            ? 0x10000ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh399436 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x10U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh399796 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq52 
                                                          >> 0x10U)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh399436));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh399705 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh399795) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh399796));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4999 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh399704) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh399705)) 
            << 0x11U) | ((0x10000U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh399436) 
                                       ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq52 
                                                  >> 0x10U))) 
                                      << 0x10U)) | 
                         ((0x8000U & (((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                >> 0xfU)) 
                                       ^ vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767) 
                                      << 0xfU)) | (
                                                   (0x7ffeU 
                                                    & ((IData)(
                                                               (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                                >> 1U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq53))))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh400068 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh399705) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh399704));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh399977 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh400067) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh400068));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh400339 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh399977) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh399976));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh400248 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh400338) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh400339));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5000 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh400247) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh400248)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh399976) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh399977)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4999));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh400610 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh400248) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh400247));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh400519 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh400609) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh400610));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh400881 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh400519) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh400518));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh400790 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh400880) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh400881));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5001 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh400789) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh400790)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh400518) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh400519)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5000));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh401152 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh400790) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh400789));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh401061 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh401151) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh401152));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh401423 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh401061) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh401060));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh401332 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh401422) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh401423));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5002 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh401331) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh401332)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh401060) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh401061)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5001));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh401694 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh401332) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh401331));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh401603 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh401693) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh401694));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh401965 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh401603) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh401602));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh401874 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh401964) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh401965));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5003 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh401873) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh401874)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh401602) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh401603)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5002));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh402236 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh401874) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh401873));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh402145 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh402235) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh402236));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh402507 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh402145) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh402144));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh402416 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh402506) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh402507));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5004 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh402415) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh402416)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh402144) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh402145)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5003));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh402778 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh402416) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh402415));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh402687 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh402777) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh402778));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh403049 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh402687) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh402686));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh402958 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh403048) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh403049));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5005 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh402957) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh402958)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh402686) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh402687)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5004));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh403320 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh402958) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh402957));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh403229 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh403319) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh403320));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh403591 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh403229) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh403228));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh403500 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh403590) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh403591));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5006 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh403499) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh403500)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh403228) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh403229)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5005));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh403862 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh403500) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh403499));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh403771 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh403861) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh403862));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh404133 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh403771) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh403770));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh404042 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh404132) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh404133));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5007 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh404041) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh404042)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh403770) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh403771)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5006))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh404404 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh404042) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh404041));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh404313 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh404403) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh404404));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh404675 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh404313) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh404312));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh404584 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh404674) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh404675));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5008 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh404583) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh404584)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh404312) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh404313)))) 
                          << 0x22U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5007));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh404946 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh404584) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh404583));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh404855 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh404945) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh404946));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh405217 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh404855) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh404854));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh405126 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh405216) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh405217));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5009 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh405125) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh405126)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh404854) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh404855)))) 
                          << 0x24U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5008));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh405488 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh405126) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh405125));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh405397 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh405487) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh405488));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh405759 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh405397) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh405396));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh405668 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                             >> 0x26U)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh405759)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5010 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                            >> 0x27U)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh405668))))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh405396) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh405397)))) 
                          << 0x26U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5009));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh405939 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh405668) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                            >> 0x27U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh406210 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh405939) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                            >> 0x28U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh406481 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh406210) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                            >> 0x29U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh406752 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh406481) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                            >> 0x2aU)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5012 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                            >> 0x2bU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh406752))))) 
            << 0x2bU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                          >> 0x2aU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh406481))))) 
                          << 0x2aU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                                     >> 0x29U)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh406210))))) 
                                        << 0x29U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                                      >> 0x28U)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh405939))))) 
                                         << 0x28U) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5010))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh407023 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh406752) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                            >> 0x2bU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh407294 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh407023) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                            >> 0x2cU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh407565 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh407294) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                            >> 0x2dU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh407836 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh407565) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                            >> 0x2eU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh185276 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh407836))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh407565))))) 
                          << 0x2eU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                                     >> 0x2dU)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh407294))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825 
                                                                      >> 0x2cU)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh407023))))) 
                                         << 0x2cU) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5012))));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
        = ((0x8000U & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729_OR___05FETC___05F_d1735)
            ? vlTOPp->mkMacUnitTop__DOT__product___05Fh185276
            : vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d4825);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh418393 = (1U 
                                                 & (~ (IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                               >> 0x27U))));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh418484 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x26U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh418122 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x26U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq55 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015))
            ? 1ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh418213 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x25U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh417851 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x25U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh417942 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x24U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh417580 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x24U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh417671 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x23U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh417309 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x23U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh417400 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x22U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh417038 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x22U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh417129 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x21U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh416767 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x21U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh416858 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x20U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh416496 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x20U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh416587 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x1fU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh416225 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x1fU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh416316 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x1eU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh415954 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x1eU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh416045 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x1dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh415683 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x1dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh415774 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x1cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh415412 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x1cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh415503 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x1bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh415141 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x1bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh415232 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x1aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh414870 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x1aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh414961 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x19U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh414599 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x19U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh414690 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x18U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh414328 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x18U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh414419 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x17U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh414057 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x17U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh414148 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x16U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh413786 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x16U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh413877 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x15U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh413515 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x15U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh413606 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x14U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh413244 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x14U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh413335 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x13U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh412973 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x13U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh413064 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x12U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh412701 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x12U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh412792 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x11U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq54 
        = ((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                           >> 0x10U)) & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767))
            ? 0x20000ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh412433 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x11U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5186 
        = ((0x20000U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh412433) 
                         ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq54 
                                    >> 0x11U))) << 0x11U)) 
           | ((0x10000U & (((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                     >> 0x10U)) ^ vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767) 
                           << 0x10U)) | ((0xfffeU & 
                                          ((IData)(
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                    >> 1U)) 
                                           << 1U)) 
                                         | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq55)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh412793 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq54 
                                                          >> 0x11U)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh412433));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh412702 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh412792) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh412793));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh413065 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh412702) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh412701));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh412974 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh413064) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh413065));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5187 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh412973) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh412974)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh412701) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh412702)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5186));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh413336 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh412974) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh412973));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh413245 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh413335) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh413336));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh413607 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh413245) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh413244));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh413516 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh413606) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh413607));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5188 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh413515) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh413516)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh413244) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh413245)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5187));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh413878 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh413516) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh413515));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh413787 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh413877) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh413878));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh414149 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh413787) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh413786));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh414058 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh414148) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh414149));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5189 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh414057) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh414058)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh413786) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh413787)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5188));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh414420 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh414058) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh414057));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh414329 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh414419) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh414420));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh414691 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh414329) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh414328));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh414600 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh414690) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh414691));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5190 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh414599) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh414600)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh414328) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh414329)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5189));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh414962 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh414600) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh414599));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh414871 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh414961) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh414962));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh415233 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh414871) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh414870));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh415142 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh415232) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh415233));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5191 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh415141) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh415142)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh414870) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh414871)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5190));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh415504 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh415142) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh415141));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh415413 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh415503) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh415504));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh415775 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh415413) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh415412));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh415684 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh415774) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh415775));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5192 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh415683) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh415684)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh415412) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh415413)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5191));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh416046 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh415684) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh415683));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh415955 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh416045) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh416046));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh416317 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh415955) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh415954));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh416226 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh416316) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh416317));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5193 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh416225) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh416226)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh415954) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh415955)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5192));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh416588 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh416226) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh416225));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh416497 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh416587) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh416588));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh416859 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh416497) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh416496));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh416768 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh416858) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh416859));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5194 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh416767) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh416768)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh416496) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh416497)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5193))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh417130 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh416768) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh416767));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh417039 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh417129) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh417130));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh417401 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh417039) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh417038));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh417310 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh417400) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh417401));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5195 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh417309) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh417310)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh417038) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh417039)))) 
                          << 0x22U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5194));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh417672 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh417310) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh417309));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh417581 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh417671) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh417672));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh417943 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh417581) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh417580));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh417852 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh417942) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh417943));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5196 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh417851) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh417852)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh417580) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh417581)))) 
                          << 0x24U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5195));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh418214 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh417852) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh417851));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh418123 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh418213) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh418214));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh418485 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh418123) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh418122));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh418394 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh418484) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh418485));
    vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0___05FETC___05F_d5197 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh418393) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh418394)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh418122) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh418123)))) 
                          << 0x26U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5196));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh418756 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh418394) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh418393));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh418665 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                             >> 0x27U)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh418756)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh418936 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh418665) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                            >> 0x28U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh419207 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh418936) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                            >> 0x29U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh419478 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh419207) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                            >> 0x2aU)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5199 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                            >> 0x2bU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh419478))))) 
            << 0x2bU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                          >> 0x2aU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh419207))))) 
                          << 0x2aU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                                     >> 0x29U)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh418936))))) 
                                        << 0x29U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                                      >> 0x28U)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh418665))))) 
                                         << 0x28U) 
                                        | vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0___05FETC___05F_d5197))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh419749 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh419478) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                            >> 0x2bU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh420020 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh419749) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                            >> 0x2cU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh420291 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh420020) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                            >> 0x2dU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh420562 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh420291) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                            >> 0x2eU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh184097 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh420562))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh420291))))) 
                          << 0x2eU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                                     >> 0x2dU)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh420020))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015 
                                                                      >> 0x2cU)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh419749))))) 
                                         << 0x2cU) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5199))));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
        = ((0x10000U & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729_OR___05FETC___05F_d1735)
            ? vlTOPp->mkMacUnitTop__DOT__product___05Fh184097
            : vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5015);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh431385 = (1U 
                                                 & (~ (IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                               >> 0x28U))));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh431476 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x27U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh431114 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x27U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh431205 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x26U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq57 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202))
            ? 1ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh430843 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x26U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh430934 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x25U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh430572 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x25U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh430663 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x24U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh430301 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x24U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh430392 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x23U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh430030 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x23U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh430121 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x22U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh429759 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x22U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh429850 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x21U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh429488 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x21U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh429579 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x20U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh429217 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x20U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh429308 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x1fU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh428946 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x1fU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh429037 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x1eU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh428675 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x1eU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh428766 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x1dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh428404 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x1dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh428495 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x1cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh428133 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x1cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh428224 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x1bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh427862 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x1bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh427953 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x1aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh427591 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x1aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh427682 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x19U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh427320 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x19U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh427411 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x18U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh427049 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x18U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh427140 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x17U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh426778 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x17U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh426869 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x16U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh426507 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x16U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh426598 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x15U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh426236 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x15U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh426327 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x14U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh425965 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x14U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh426056 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x13U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh425693 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x13U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh425784 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x12U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq56 
        = ((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                           >> 0x11U)) & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767))
            ? 0x40000ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh425425 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x12U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh425785 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq56 
                                                          >> 0x12U)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh425425));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh425694 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh425784) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh425785));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5370 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh425693) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh425694)) 
            << 0x13U) | ((0x40000U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh425425) 
                                       ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq56 
                                                  >> 0x12U))) 
                                      << 0x12U)) | 
                         ((0x20000U & (((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                 >> 0x11U)) 
                                        ^ vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767) 
                                       << 0x11U)) | 
                          ((0x1fffeU & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                 >> 1U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq57))))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh426057 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh425694) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh425693));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh425966 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh426056) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh426057));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh426328 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh425966) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh425965));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh426237 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh426327) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh426328));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5371 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh426236) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh426237)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh425965) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh425966)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5370));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh426599 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh426237) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh426236));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh426508 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh426598) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh426599));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh426870 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh426508) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh426507));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh426779 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh426869) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh426870));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5372 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh426778) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh426779)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh426507) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh426508)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5371));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh427141 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh426779) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh426778));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh427050 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh427140) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh427141));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh427412 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh427050) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh427049));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh427321 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh427411) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh427412));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5373 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh427320) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh427321)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh427049) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh427050)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5372));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh427683 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh427321) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh427320));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh427592 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh427682) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh427683));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh427954 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh427592) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh427591));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh427863 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh427953) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh427954));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5374 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh427862) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh427863)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh427591) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh427592)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5373));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh428225 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh427863) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh427862));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh428134 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh428224) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh428225));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh428496 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh428134) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh428133));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh428405 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh428495) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh428496));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5375 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh428404) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh428405)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh428133) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh428134)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5374));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh428767 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh428405) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh428404));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh428676 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh428766) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh428767));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh429038 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh428676) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh428675));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh428947 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh429037) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh429038));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5376 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh428946) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh428947)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh428675) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh428676)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5375));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh429309 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh428947) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh428946));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh429218 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh429308) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh429309));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh429580 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh429218) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh429217));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh429489 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh429579) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh429580));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5377 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh429488) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh429489)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh429217) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh429218)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5376))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh429851 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh429489) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh429488));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh429760 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh429850) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh429851));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh430122 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh429760) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh429759));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh430031 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh430121) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh430122));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5378 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh430030) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh430031)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh429759) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh429760)))) 
                          << 0x22U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5377));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh430393 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh430031) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh430030));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh430302 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh430392) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh430393));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh430664 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh430302) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh430301));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh430573 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh430663) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh430664));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5379 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh430572) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh430573)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh430301) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh430302)))) 
                          << 0x24U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5378));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh430935 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh430573) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh430572));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh430844 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh430934) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh430935));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh431206 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh430844) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh430843));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh431115 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh431205) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh431206));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5380 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh431114) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh431115)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh430843) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh430844)))) 
                          << 0x26U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5379));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh431477 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh431115) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh431114));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh431386 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh431476) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh431477));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh431748 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh431386) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh431385));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh431657 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                             >> 0x28U)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh431748)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5381 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                            >> 0x29U)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh431657))))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh431385) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh431386)))) 
                          << 0x28U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5380));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh431928 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh431657) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                            >> 0x29U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh432199 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh431928) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                            >> 0x2aU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh432470 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh432199) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                            >> 0x2bU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh432741 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh432470) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                            >> 0x2cU)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5383 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                            >> 0x2dU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh432741))))) 
            << 0x2dU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                          >> 0x2cU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh432470))))) 
                          << 0x2cU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                                     >> 0x2bU)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh432199))))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                                      >> 0x2aU)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh431928))))) 
                                         << 0x2aU) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5381))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh433012 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh432741) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                            >> 0x2dU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh433283 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh433012) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                            >> 0x2eU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh182918 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh433283))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh433012))))) 
                          << 0x2eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5383));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
        = ((0x20000U & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729_OR___05FETC___05F_d1735)
            ? vlTOPp->mkMacUnitTop__DOT__product___05Fh182918
            : vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5202);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh444372 = (1U 
                                                 & (~ (IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                               >> 0x29U))));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh444463 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x28U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh444101 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x28U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh444192 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x27U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh443830 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x27U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq59 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385))
            ? 1ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh443921 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x26U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh443559 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x26U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh443650 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x25U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh443288 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x25U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh443379 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x24U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh443017 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x24U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh443108 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x23U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh442746 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x23U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh442837 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x22U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh442475 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x22U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh442566 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x21U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh442204 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x21U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh442295 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x20U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh441933 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x20U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh442024 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x1fU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh441662 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x1fU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh441753 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x1eU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh441391 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x1eU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh441482 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x1dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh441120 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x1dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh441211 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x1cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh440849 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x1cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh440940 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x1bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh440578 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x1bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh440669 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x1aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh440307 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x1aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh440398 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x19U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh440036 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x19U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh440127 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x18U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh439765 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x18U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh439856 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x17U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh439494 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x17U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh439585 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x16U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh439223 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x16U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh439314 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x15U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh438952 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x15U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh439043 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x14U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh438680 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x14U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh438771 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x13U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq58 
        = ((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                           >> 0x12U)) & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767))
            ? 0x80000ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh438412 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x13U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5550 
        = ((0x80000U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh438412) 
                         ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq58 
                                    >> 0x13U))) << 0x13U)) 
           | ((0x40000U & (((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                     >> 0x12U)) ^ vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767) 
                           << 0x12U)) | ((0x3fffeU 
                                          & ((IData)(
                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                      >> 1U)) 
                                             << 1U)) 
                                         | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq59)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh438772 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq58 
                                                          >> 0x13U)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh438412));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh438681 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh438771) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh438772));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh439044 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh438681) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh438680));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh438953 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh439043) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh439044));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5551 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh438952) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh438953)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh438680) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh438681)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5550));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh439315 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh438953) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh438952));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh439224 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh439314) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh439315));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh439586 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh439224) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh439223));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh439495 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh439585) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh439586));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5552 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh439494) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh439495)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh439223) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh439224)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5551));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh439857 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh439495) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh439494));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh439766 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh439856) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh439857));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh440128 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh439766) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh439765));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh440037 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh440127) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh440128));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5553 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh440036) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh440037)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh439765) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh439766)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5552));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh440399 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh440037) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh440036));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh440308 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh440398) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh440399));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh440670 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh440308) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh440307));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh440579 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh440669) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh440670));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5554 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh440578) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh440579)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh440307) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh440308)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5553));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh440941 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh440579) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh440578));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh440850 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh440940) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh440941));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh441212 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh440850) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh440849));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh441121 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh441211) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh441212));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5555 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh441120) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh441121)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh440849) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh440850)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5554));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh441483 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh441121) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh441120));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh441392 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh441482) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh441483));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh441754 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh441392) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh441391));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh441663 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh441753) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh441754));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5556 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh441662) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh441663)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh441391) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh441392)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5555));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh442025 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh441663) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh441662));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh441934 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh442024) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh442025));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh442296 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh441934) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh441933));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh442205 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh442295) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh442296));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5557 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh442204) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh442205)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh441933) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh441934)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5556))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh442567 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh442205) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh442204));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh442476 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh442566) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh442567));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh442838 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh442476) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh442475));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh442747 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh442837) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh442838));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5558 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh442746) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh442747)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh442475) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh442476)))) 
                          << 0x22U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5557));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh443109 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh442747) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh442746));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh443018 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh443108) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh443109));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh443380 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh443018) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh443017));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh443289 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh443379) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh443380));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5559 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh443288) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh443289)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh443017) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh443018)))) 
                          << 0x24U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5558));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh443651 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh443289) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh443288));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh443560 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh443650) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh443651));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh443922 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh443560) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh443559));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh443831 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh443921) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh443922));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5560 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh443830) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh443831)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh443559) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh443560)))) 
                          << 0x26U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5559));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh444193 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh443831) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh443830));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh444102 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh444192) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh444193));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh444464 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh444102) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh444101));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh444373 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh444463) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh444464));
    vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0___05FETC___05F_d5561 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh444372) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh444373)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh444101) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh444102)))) 
                          << 0x28U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5560));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh444735 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh444373) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh444372));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh444644 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                             >> 0x29U)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh444735)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh444915 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh444644) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                            >> 0x2aU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh445186 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh444915) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                            >> 0x2bU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh445457 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh445186) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                            >> 0x2cU)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5563 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                            >> 0x2dU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh445457))))) 
            << 0x2dU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                          >> 0x2cU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh445186))))) 
                          << 0x2cU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                                     >> 0x2bU)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh444915))))) 
                                        << 0x2bU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                                      >> 0x2aU)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh444644))))) 
                                         << 0x2aU) 
                                        | vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0___05FETC___05F_d5561))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh445728 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh445457) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                            >> 0x2dU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh445999 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh445728) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                            >> 0x2eU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh181739 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh445999))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh445728))))) 
                          << 0x2eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5563));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
        = ((0x40000U & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729_OR___05FETC___05F_d1735)
            ? vlTOPp->mkMacUnitTop__DOT__product___05Fh181739
            : vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5385);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh457354 = (1U 
                                                 & (~ (IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                               >> 0x2aU))));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh457445 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x29U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh457083 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x29U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh457174 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x28U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh456812 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x28U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq61 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565))
            ? 1ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh456903 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x27U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh456541 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x27U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh456632 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x26U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh456270 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x26U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh456361 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x25U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh455999 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x25U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh456090 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x24U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh455728 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x24U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh455819 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x23U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh455457 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x23U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh455548 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x22U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh455186 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x22U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh455277 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x21U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh454915 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x21U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh455006 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x20U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh454644 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x20U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh454735 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x1fU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh454373 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x1fU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh454464 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x1eU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh454102 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x1eU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh454193 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x1dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh453831 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x1dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh453922 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x1cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh453560 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x1cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh453651 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x1bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh453289 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x1bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh453380 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x1aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh453018 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x1aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh453109 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x19U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh452747 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x19U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh452838 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x18U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh452476 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x18U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh452567 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x17U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh452205 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x17U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh452296 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x16U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh451934 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x16U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh452025 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x15U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh451662 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x15U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh451753 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x14U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq60 
        = ((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                           >> 0x13U)) & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767))
            ? 0x100000ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh451394 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x14U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh451754 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq60 
                                                          >> 0x14U)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh451394));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh451663 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh451753) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh451754));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5727 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh451662) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh451663)) 
            << 0x15U) | ((0x100000U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh451394) 
                                        ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq60 
                                                   >> 0x14U))) 
                                       << 0x14U)) | 
                         ((0x80000U & (((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                 >> 0x13U)) 
                                        ^ vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767) 
                                       << 0x13U)) | 
                          ((0x7fffeU & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                 >> 1U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq61))))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh452026 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh451663) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh451662));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh451935 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh452025) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh452026));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh452297 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh451935) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh451934));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh452206 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh452296) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh452297));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5728 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh452205) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh452206)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh451934) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh451935)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5727));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh452568 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh452206) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh452205));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh452477 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh452567) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh452568));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh452839 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh452477) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh452476));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh452748 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh452838) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh452839));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5729 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh452747) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh452748)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh452476) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh452477)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5728));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh453110 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh452748) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh452747));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh453019 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh453109) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh453110));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh453381 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh453019) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh453018));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh453290 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh453380) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh453381));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5730 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh453289) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh453290)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh453018) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh453019)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5729));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh453652 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh453290) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh453289));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh453561 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh453651) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh453652));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh453923 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh453561) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh453560));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh453832 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh453922) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh453923));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5731 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh453831) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh453832)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh453560) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh453561)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5730));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh454194 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh453832) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh453831));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh454103 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh454193) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh454194));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh454465 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh454103) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh454102));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh454374 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh454464) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh454465));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5732 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh454373) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh454374)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh454102) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh454103)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5731));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh454736 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh454374) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh454373));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh454645 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh454735) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh454736));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh455007 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh454645) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh454644));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh454916 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh455006) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh455007));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5733 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh454915) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh454916)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh454644) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh454645)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5732))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh455278 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh454916) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh454915));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh455187 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh455277) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh455278));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh455549 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh455187) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh455186));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh455458 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh455548) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh455549));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5734 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh455457) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh455458)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh455186) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh455187)))) 
                          << 0x22U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5733));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh455820 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh455458) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh455457));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh455729 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh455819) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh455820));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh456091 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh455729) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh455728));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh456000 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh456090) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh456091));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5735 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh455999) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh456000)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh455728) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh455729)))) 
                          << 0x24U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5734));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh456362 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh456000) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh455999));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh456271 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh456361) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh456362));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh456633 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh456271) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh456270));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh456542 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh456632) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh456633));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5736 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh456541) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh456542)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh456270) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh456271)))) 
                          << 0x26U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5735));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh456904 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh456542) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh456541));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh456813 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh456903) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh456904));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh457175 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh456813) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh456812));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh457084 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh457174) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh457175));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5737 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh457083) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh457084)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh456812) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh456813)))) 
                          << 0x28U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5736));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh457446 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh457084) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh457083));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh457355 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh457445) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh457446));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh457717 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh457355) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh457354));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh457626 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                             >> 0x2aU)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh457717)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5738 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                            >> 0x2bU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh457626))))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh457354) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh457355)))) 
                          << 0x2aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5737));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh457897 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh457626) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                            >> 0x2bU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh458168 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh457897) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                            >> 0x2cU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh458439 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh458168) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                            >> 0x2dU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh458710 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh458439) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                            >> 0x2eU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh180560 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh458710))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh458439))))) 
                          << 0x2eU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                                     >> 0x2dU)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh458168))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565 
                                                                      >> 0x2cU)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh457897))))) 
                                         << 0x2cU) 
                                        | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5738))));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
        = ((0x80000U & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729_OR___05FETC___05F_d1735)
            ? vlTOPp->mkMacUnitTop__DOT__product___05Fh180560
            : vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5565);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh470331 = (1U 
                                                 & (~ (IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                               >> 0x2bU))));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh470422 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x2aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh470060 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x2aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh470151 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x29U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh469789 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x29U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh469880 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x28U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh469518 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x28U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq63 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741))
            ? 1ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh469609 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x27U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh469247 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x27U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh469338 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x26U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh468976 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x26U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh469067 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x25U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh468705 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x25U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh468796 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x24U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh468434 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x24U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh468525 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x23U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh468163 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x23U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh468254 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x22U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh467892 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x22U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh467983 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x21U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh467621 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x21U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh467712 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x20U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh467350 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x20U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh467441 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x1fU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh467079 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x1fU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh467170 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x1eU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh466808 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x1eU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh466899 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x1dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh466537 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x1dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh466628 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x1cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh466266 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x1cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh466357 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x1bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh465995 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x1bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh466086 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x1aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh465724 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x1aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh465815 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x19U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh465453 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x19U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh465544 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x18U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh465182 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x18U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh465273 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x17U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh464911 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x17U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh465002 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x16U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh464639 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x16U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh464730 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x15U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq62 
        = ((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                           >> 0x14U)) & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767))
            ? 0x200000ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh464371 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x15U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5900 
        = ((0x200000U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh464371) 
                          ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq62 
                                     >> 0x15U))) << 0x15U)) 
           | ((0x100000U & (((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                      >> 0x14U)) ^ vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767) 
                            << 0x14U)) | ((0xffffeU 
                                           & ((IData)(
                                                      (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                       >> 1U)) 
                                              << 1U)) 
                                          | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq63)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh464731 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq62 
                                                          >> 0x15U)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh464371));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh464640 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh464730) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh464731));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh465003 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh464640) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh464639));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh464912 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh465002) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh465003));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5901 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh464911) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh464912)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh464639) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh464640)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5900));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh465274 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh464912) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh464911));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh465183 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh465273) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh465274));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh465545 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh465183) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh465182));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh465454 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh465544) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh465545));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5902 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh465453) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh465454)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh465182) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh465183)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5901));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh465816 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh465454) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh465453));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh465725 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh465815) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh465816));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh466087 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh465725) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh465724));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh465996 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh466086) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh466087));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5903 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh465995) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh465996)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh465724) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh465725)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5902));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh466358 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh465996) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh465995));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh466267 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh466357) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh466358));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh466629 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh466267) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh466266));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh466538 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh466628) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh466629));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5904 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh466537) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh466538)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh466266) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh466267)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5903));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh466900 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh466538) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh466537));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh466809 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh466899) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh466900));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh467171 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh466809) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh466808));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh467080 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh467170) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh467171));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5905 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh467079) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh467080)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh466808) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh466809)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5904));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh467442 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh467080) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh467079));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh467351 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh467441) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh467442));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh467713 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh467351) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh467350));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh467622 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh467712) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh467713));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5906 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh467621) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh467622)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh467350) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh467351)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5905))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh467984 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh467622) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh467621));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh467893 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh467983) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh467984));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh468255 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh467893) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh467892));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh468164 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh468254) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh468255));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5907 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh468163) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh468164)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh467892) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh467893)))) 
                          << 0x22U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5906));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh468526 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh468164) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh468163));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh468435 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh468525) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh468526));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh468797 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh468435) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh468434));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh468706 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh468796) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh468797));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5908 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh468705) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh468706)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh468434) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh468435)))) 
                          << 0x24U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5907));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh469068 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh468706) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh468705));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh468977 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh469067) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh469068));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh469339 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh468977) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh468976));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh469248 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh469338) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh469339));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5909 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh469247) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh469248)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh468976) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh468977)))) 
                          << 0x26U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5908));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh469610 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh469248) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh469247));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh469519 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh469609) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh469610));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh469881 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh469519) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh469518));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh469790 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh469880) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh469881));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5910 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh469789) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh469790)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh469518) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh469519)))) 
                          << 0x28U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5909));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh470152 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh469790) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh469789));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh470061 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh470151) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh470152));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh470423 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh470061) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh470060));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh470332 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh470422) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh470423));
    vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0___05FETC___05F_d5911 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh470331) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh470332)))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh470060) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh470061)))) 
                          << 0x2aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5910));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh470694 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh470332) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh470331));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh470603 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                             >> 0x2bU)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh470694)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh470874 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh470603) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                            >> 0x2cU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh471145 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh470874) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                            >> 0x2dU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh471416 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh471145) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                            >> 0x2eU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh179381 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh471416))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh471145))))) 
                          << 0x2eU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                                     >> 0x2dU)) 
                                                            ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh470874))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741 
                                                                      >> 0x2cU)) 
                                                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh470603))))) 
                                         << 0x2cU) 
                                        | vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0___05FETC___05F_d5911))));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
        = ((0x100000U & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729_OR___05FETC___05F_d1735)
            ? vlTOPp->mkMacUnitTop__DOT__product___05Fh179381
            : vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5741);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh483303 = (1U 
                                                 & (~ (IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                               >> 0x2cU))));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh483394 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x2bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh483032 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x2bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh483123 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x2aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh482761 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x2aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh482852 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x29U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh482490 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x29U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq65 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914))
            ? 1ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh482581 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x28U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh482219 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x28U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh482310 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x27U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh481948 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x27U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh482039 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x26U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh481677 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x26U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh481768 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x25U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh481406 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x25U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh481497 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x24U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh481135 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x24U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh481226 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x23U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh480864 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x23U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh480955 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x22U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh480593 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x22U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh480684 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x21U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh480322 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x21U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh480413 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x20U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh480051 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x20U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh480142 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x1fU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh479780 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x1fU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh479871 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x1eU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh479509 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x1eU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh479600 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x1dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh479238 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x1dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh479329 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x1cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh478967 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x1cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh479058 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x1bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh478696 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x1bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh478787 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x1aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh478425 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x1aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh478516 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x19U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh478154 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x19U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh478245 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x18U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh477883 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x18U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh477974 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x17U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh477611 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x17U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh477702 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x16U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq64 
        = ((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                           >> 0x15U)) & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767))
            ? 0x400000ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh477343 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x16U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh477703 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq64 
                                                          >> 0x16U)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh477343));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh477612 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh477702) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh477703));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6070 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh477611) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh477612)) 
            << 0x17U) | ((0x400000U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh477343) 
                                        ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq64 
                                                   >> 0x16U))) 
                                       << 0x16U)) | 
                         ((0x200000U & (((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                  >> 0x15U)) 
                                         ^ vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767) 
                                        << 0x15U)) 
                          | ((0x1ffffeU & ((IData)(
                                                   (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                    >> 1U)) 
                                           << 1U)) 
                             | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq65))))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh477975 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh477612) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh477611));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh477884 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh477974) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh477975));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh478246 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh477884) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh477883));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh478155 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh478245) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh478246));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6071 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh478154) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh478155)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh477883) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh477884)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6070));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh478517 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh478155) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh478154));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh478426 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh478516) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh478517));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh478788 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh478426) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh478425));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh478697 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh478787) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh478788));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6072 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh478696) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh478697)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh478425) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh478426)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6071));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh479059 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh478697) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh478696));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh478968 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh479058) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh479059));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh479330 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh478968) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh478967));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh479239 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh479329) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh479330));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6073 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh479238) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh479239)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh478967) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh478968)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6072));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh479601 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh479239) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh479238));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh479510 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh479600) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh479601));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh479872 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh479510) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh479509));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh479781 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh479871) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh479872));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6074 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh479780) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh479781)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh479509) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh479510)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6073));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh480143 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh479781) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh479780));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh480052 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh480142) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh480143));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh480414 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh480052) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh480051));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh480323 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh480413) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh480414));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6075 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh480322) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh480323)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh480051) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh480052)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6074))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh480685 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh480323) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh480322));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh480594 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh480684) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh480685));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh480956 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh480594) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh480593));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh480865 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh480955) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh480956));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6076 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh480864) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh480865)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh480593) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh480594)))) 
                          << 0x22U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6075));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh481227 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh480865) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh480864));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh481136 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh481226) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh481227));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh481498 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh481136) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh481135));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh481407 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh481497) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh481498));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6077 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh481406) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh481407)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh481135) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh481136)))) 
                          << 0x24U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6076));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh481769 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh481407) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh481406));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh481678 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh481768) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh481769));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh482040 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh481678) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh481677));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh481949 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh482039) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh482040));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6078 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh481948) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh481949)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh481677) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh481678)))) 
                          << 0x26U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6077));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh482311 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh481949) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh481948));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh482220 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh482310) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh482311));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh482582 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh482220) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh482219));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh482491 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh482581) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh482582));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6079 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh482490) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh482491)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh482219) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh482220)))) 
                          << 0x28U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6078));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh482853 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh482491) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh482490));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh482762 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh482852) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh482853));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh483124 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh482762) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh482761));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh483033 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh483123) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh483124));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6080 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh483032) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh483033)))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh482761) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh482762)))) 
                          << 0x2aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6079));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh483395 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh483033) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh483032));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh483304 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh483394) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh483395));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh483666 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh483304) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh483303));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh483575 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                             >> 0x2cU)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh483666)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6081 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                            >> 0x2dU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh483575))))) 
            << 0x2dU) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh483303) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh483304)))) 
                          << 0x2cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6080));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh483846 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh483575) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                            >> 0x2dU)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh484117 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh483846) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                            >> 0x2eU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh178202 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh484117))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh483846))))) 
                          << 0x2eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6081));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
        = ((0x200000U & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729_OR___05FETC___05F_d1735)
            ? vlTOPp->mkMacUnitTop__DOT__product___05Fh178202
            : vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d5914);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh496270 = (1U 
                                                 & (~ (IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                               >> 0x2dU))));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh496361 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x2cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh495999 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x2cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh496090 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x2bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh495728 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x2bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh495819 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x2aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh495457 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x2aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh495548 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x29U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh495186 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x29U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq67 
        = ((1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083))
            ? 1ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh495277 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x28U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh494915 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x28U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh495006 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x27U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh494644 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x27U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh494735 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x26U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh494373 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x26U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh494464 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x25U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh494102 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x25U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh494193 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x24U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh493831 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x24U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh493922 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x23U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh493560 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x23U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh493651 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x22U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh493289 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x22U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh493380 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x21U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh493018 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x21U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh493109 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x20U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh492747 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x20U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh492838 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x1fU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh492476 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x1fU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh492567 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x1eU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh492205 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x1eU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh492296 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x1dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh491934 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x1dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh492025 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x1cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh491663 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x1cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh491754 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x1bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh491392 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x1bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh491483 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x1aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh491121 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x1aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh491212 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x19U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh490850 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x19U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh490941 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x18U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh490578 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x18U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh490669 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x17U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq66 
        = ((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                           >> 0x16U)) & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767))
            ? 0x800000ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh490310 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x17U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6236 
        = ((0x800000U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh490310) 
                          ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq66 
                                     >> 0x17U))) << 0x17U)) 
           | ((0x400000U & (((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                      >> 0x16U)) ^ vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767) 
                            << 0x16U)) | ((0x3ffffeU 
                                           & ((IData)(
                                                      (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                       >> 1U)) 
                                              << 1U)) 
                                          | (1U & (IData)(vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq67)))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh490670 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq66 
                                                          >> 0x17U)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh490310));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh490579 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh490669) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh490670));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh490942 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh490579) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh490578));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh490851 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh490941) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh490942));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6237 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh490850) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh490851)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh490578) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh490579)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6236));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh491213 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh490851) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh490850));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh491122 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh491212) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh491213));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh491484 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh491122) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh491121));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh491393 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh491483) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh491484));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6238 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh491392) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh491393)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh491121) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh491122)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6237));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh491755 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh491393) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh491392));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh491664 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh491754) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh491755));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh492026 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh491664) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh491663));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh491935 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh492025) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh492026));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6239 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh491934) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh491935)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh491663) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh491664)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6238));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh492297 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh491935) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh491934));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh492206 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh492296) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh492297));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh492568 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh492206) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh492205));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh492477 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh492567) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh492568));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6240 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh492476) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh492477)) 
            << 0x1fU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh492205) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh492206)) 
                          << 0x1eU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6239));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh492839 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh492477) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh492476));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh492748 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh492838) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh492839));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh493110 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh492748) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh492747));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh493019 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh493109) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh493110));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6241 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh493018) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh493019)))) 
            << 0x21U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh492747) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh492748)))) 
                          << 0x20U) | (QData)((IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6240))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh493381 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh493019) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh493018));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh493290 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh493380) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh493381));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh493652 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh493290) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh493289));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh493561 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh493651) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh493652));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6242 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh493560) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh493561)))) 
            << 0x23U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh493289) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh493290)))) 
                          << 0x22U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6241));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh493923 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh493561) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh493560));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh493832 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh493922) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh493923));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh494194 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh493832) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh493831));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh494103 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh494193) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh494194));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6243 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh494102) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh494103)))) 
            << 0x25U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh493831) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh493832)))) 
                          << 0x24U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6242));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh494465 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh494103) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh494102));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh494374 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh494464) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh494465));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh494736 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh494374) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh494373));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh494645 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh494735) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh494736));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6244 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh494644) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh494645)))) 
            << 0x27U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh494373) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh494374)))) 
                          << 0x26U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6243));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh495007 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh494645) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh494644));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh494916 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh495006) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh495007));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh495278 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh494916) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh494915));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh495187 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh495277) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh495278));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6245 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh495186) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh495187)))) 
            << 0x29U) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh494915) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh494916)))) 
                          << 0x28U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6244));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh495549 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh495187) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh495186));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh495458 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh495548) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh495549));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh495820 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh495458) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh495457));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh495729 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh495819) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh495820));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6246 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh495728) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh495729)))) 
            << 0x2bU) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh495457) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh495458)))) 
                          << 0x2aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6245));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh496091 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh495729) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh495728));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh496000 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh496090) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh496091));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh496362 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh496000) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh495999));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh496271 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh496361) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh496362));
    vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0___05FETC___05F_d6247 
        = (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh496270) 
                             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh496271)))) 
            << 0x2dU) | (((QData)((IData)(((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh495999) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh496000)))) 
                          << 0x2cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6246));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh496633 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh496271) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh496270));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh496542 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                             >> 0x2dU)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh496633)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh496813 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh496542) 
                                                 & (IData)(
                                                           (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                            >> 0x2eU)));
    vlTOPp->mkMacUnitTop__DOT__product___05Fh177023 
        = (((QData)((IData)((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                            >> 0x2fU)) 
                                   ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh496813))))) 
            << 0x2fU) | (((QData)((IData)((1U & ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083 
                                                          >> 0x2eU)) 
                                                 ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh496542))))) 
                          << 0x2eU) | vlTOPp->mkMacUnitTop__DOT__INV_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0___05FETC___05F_d6247));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
        = ((0x400000U & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729_OR___05FETC___05F_d1735)
            ? vlTOPp->mkMacUnitTop__DOT__product___05Fh177023
            : vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6083);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh509232 = (1U 
                                                 & (~ (IData)(
                                                              (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                               >> 0x2eU))));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh509323 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x2dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh508961 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x2dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x16U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh509052 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x2cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh508690 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x2cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x15U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh508781 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x2bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh508419 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x2bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x14U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh508510 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x2aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh508148 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x2aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x13U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh508239 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x29U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh507877 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x29U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x12U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh507968 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x28U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh507606 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x28U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x11U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh507697 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x27U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh507335 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x27U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0x10U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh507426 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x26U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh507064 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x26U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xfU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh507155 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x25U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh506793 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x25U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xeU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh506884 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x24U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh506522 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x24U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xdU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh506613 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x23U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh506251 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x23U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xcU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh506342 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x22U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh505980 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x22U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xbU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh506071 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x21U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh505709 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x21U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 0xaU)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh505800 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x20U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh505438 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x20U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 9U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh505529 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x1fU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh505167 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x1fU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 8U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh505258 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x1eU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh504896 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x1eU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 7U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh504987 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x1dU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh504625 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x1dU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 6U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh504716 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x1cU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh504354 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x1cU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 5U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh504445 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x1bU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh504083 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x1bU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 4U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh504174 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x1aU)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh503812 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x1aU)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 3U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh503903 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x19U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh503540 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x19U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 2U)));
    vlTOPp->mkMacUnitTop__DOT__x___05Fh503631 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x18U)) 
                                                    & (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                       >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq68 
        = ((1U & ((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                           >> 0x17U)) & vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767))
            ? 0x1000000ULL : 0ULL);
    vlTOPp->mkMacUnitTop__DOT__x___05Fh503272 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x18U)) 
                                                    ^ 
                                                    (vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767 
                                                     >> 1U)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh503632 = ((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq68 
                                                          >> 0x18U)) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh503272));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh503541 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh503631) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh503632));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6396 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh503540) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh503541)) 
            << 9U) | ((0x100U & (((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh503272) 
                                  ^ (IData)((vlTOPp->mkMacUnitTop__DOT__IF_IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_7_ETC___05Fq68 
                                             >> 0x18U))) 
                                 << 8U)) | ((0x80U 
                                             & (((IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                          >> 0x17U)) 
                                                 ^ vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_759_BIT_15_760_CONCAT_0_761_OR___05FETC___05F_d1767) 
                                                << 7U)) 
                                            | (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                          >> 0x10U))))));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh503904 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh503541) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh503540));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh503813 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh503903) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh503904));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh504175 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh503813) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh503812));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh504084 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh504174) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh504175));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6397 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh504083) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh504084)) 
            << 0xbU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh503812) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh503813)) 
                         << 0xaU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6396)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh504446 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh504084) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh504083));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh504355 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh504445) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh504446));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh504717 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh504355) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh504354));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh504626 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh504716) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh504717));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6398 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh504625) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh504626)) 
            << 0xdU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh504354) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh504355)) 
                         << 0xcU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6397)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh504988 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh504626) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh504625));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh504897 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh504987) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh504988));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh505259 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh504897) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh504896));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh505168 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh505258) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh505259));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6399 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh505167) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh505168)) 
            << 0xfU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh504896) 
                          ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh504897)) 
                         << 0xeU) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6398)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh505530 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh505168) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh505167));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh505439 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh505529) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh505530));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh505801 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh505439) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh505438));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh505710 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh505800) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh505801));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6400 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh505709) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh505710)) 
            << 0x11U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh505438) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh505439)) 
                          << 0x10U) | (IData)(vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6399)));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh506072 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh505710) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh505709));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh505981 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh506071) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh506072));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh506343 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh505981) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh505980));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh506252 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh506342) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh506343));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6401 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh506251) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh506252)) 
            << 0x13U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh505980) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh505981)) 
                          << 0x12U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6400));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh506614 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh506252) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh506251));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh506523 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh506613) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh506614));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh506885 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh506523) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh506522));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh506794 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh506884) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh506885));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6402 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh506793) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh506794)) 
            << 0x15U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh506522) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh506523)) 
                          << 0x14U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6401));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh507156 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh506794) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh506793));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh507065 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh507155) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh507156));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh507427 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh507065) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh507064));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh507336 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh507426) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh507427));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6403 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh507335) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh507336)) 
            << 0x17U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh507064) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh507065)) 
                          << 0x16U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6402));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh507698 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh507336) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh507335));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh507607 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh507697) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh507698));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh507969 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh507607) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh507606));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh507878 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh507968) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh507969));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6404 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh507877) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh507878)) 
            << 0x19U) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh507606) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh507607)) 
                          << 0x18U) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6403));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh508240 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh507878) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh507877));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh508149 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh508239) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh508240));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh508511 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh508149) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh508148));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh508420 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh508510) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh508511));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6405 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh508419) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh508420)) 
            << 0x1bU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh508148) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh508149)) 
                          << 0x1aU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6404));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh508782 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh508420) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh508419));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh508691 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh508781) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh508782));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh509053 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh508691) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh508690));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh508962 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh509052) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh509053));
    vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6406 
        = ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh508961) 
             ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh508962)) 
            << 0x1dU) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh508690) 
                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh508691)) 
                          << 0x1cU) | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6405));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh509324 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh508962) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh508961));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh509233 = ((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh509323) 
                                                 | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh509324));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh509595 = ((IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh509233) 
                                                 & (IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh509232));
    vlTOPp->mkMacUnitTop__DOT__y___05Fh509504 = (1U 
                                                 & ((IData)(
                                                            (vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                                             >> 0x2eU)) 
                                                    | (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh509595)));
    vlTOPp->mkMacUnitTop__DOT__bf16_Mac_result_D_IN 
        = ((0x80000000U & (((IData)((vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6249 
                                     >> 0x2fU)) ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh509504)) 
                           << 0x1fU)) | ((((IData)(vlTOPp->mkMacUnitTop__DOT__x___05Fh509232) 
                                           ^ (IData)(vlTOPp->mkMacUnitTop__DOT__y___05Fh509233)) 
                                          << 0x1eU) 
                                         | vlTOPp->mkMacUnitTop__DOT__IF_bf16_Mac_reg_B_727_BIT_15_728_CONCAT_0_729___05FETC___05F_d6406));
}

VL_INLINE_OPT void Vtop::_combo__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__7\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_C_D_IN 
        = vlTOPp->load_C_c;
    vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2_EN = vlTOPp->EN_load_s1_or_s2;
    vlTOPp->mkMacUnitTop__DOT__reg_s1_or_s2_D_IN = vlTOPp->load_s1_or_s2_sel;
    vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_C_D_IN = vlTOPp->load_C_c;
    vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_B_D_IN = 
        (0xffU & (IData)(vlTOPp->load_B_b));
    vlTOPp->mkMacUnitTop__DOT__int_Mac_reg_A_D_IN = 
        (0xffU & (IData)(vlTOPp->load_A_a));
    vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_A_D_IN 
        = vlTOPp->load_A_a;
    vlTOPp->mkMacUnitTop__DOT__bf16_Mac_reg_B_D_IN 
        = vlTOPp->load_B_b;
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
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
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
