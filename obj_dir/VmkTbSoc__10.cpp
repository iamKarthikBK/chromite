// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTbSoc.h for the primary calling header

#include "VmkTbSoc.h"
#include "VmkTbSoc__Syms.h"

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__16(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__16\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
             & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                        >> 7U)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d445 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
             & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                        >> 7U)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d446 
                = (1U & VL_TESTPLUSARGS_I("mitlb"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
             & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                        >> 7U)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d447 
                = (1U & VL_TESTPLUSARGS_I("l0"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__put_response_frm_ptw_put_BIT_7_44_AND_TASK_tes_ETC___05F_d450 
        = ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                    >> 7U)) & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d445) 
                               | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d446) 
                                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d447))));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
             & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                        >> 7U)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh6367 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__put_response_frm_ptw_put_BIT_7_44_AND_TASK_tes_ETC___05F_d450)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh6367);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__put_response_frm_ptw_put_BIT_7_44_AND_TASK_tes_ETC___05F_d450)))) {
            VL_WRITEF("[ 0]ITLB: Got an Error from PTW");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__put_response_frm_ptw_put_BIT_7_44_AND_TASK_tes_ETC___05F_d450)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
             & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                           >> 7U))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
             & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                           >> 7U))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454 
                = (1U & VL_TESTPLUSARGS_I("mitlb"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
             & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                           >> 7U))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455 
                = (1U & VL_TESTPLUSARGS_I("l0"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d462 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                      >> 0xaU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d465 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                         >> 0xaU))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d468 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                      >> 0xbU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d471 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                         >> 0xbU))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d474 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                      >> 0xcU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d477 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                         >> 0xcU))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d480 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                      >> 0xdU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d483 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                         >> 0xdU))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d486 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                      >> 0xeU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d489 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                         >> 0xeU))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d492 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                      >> 0xfU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d495 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                         >> 0xfU))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d498 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                      >> 0x10U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d501 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                         >> 0x10U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d504 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                      >> 0x11U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d507 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))) 
           & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                         >> 0x11U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458 
        = ((~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                       >> 7U))) & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d453) 
                                   | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d454) 
                                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d455))));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
             & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                           >> 7U))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh5744 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh5744);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF("[ 0]ITLB: Allocating index:%1# for Tag:",
                      2,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__rg_replace);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF("VPNTag { permissions: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF("TLB_permissions { v: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d462)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d465)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF(", r: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d468)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d471)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF(", w: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d474)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d477)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF(", x: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d480)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d483)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF(", u: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d486)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d489)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF(", g: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d492)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d495)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF(", a: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d498)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d501)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF(", d: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d504)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                          & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                        >> 7U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_53_OR_TASK_testplusargs_54_A_ETC___05F_d507)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF(" }");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF(", vpn: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF("'h%x",27,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__tag_vpn___05Fh5808);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF(", asid: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF("'h%x",8,(0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                                 >> 0x2cU))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF(", pagemask: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF("'h%x",18,(0x3ffffU & ((IData)(0x3ffffU) 
                                             << (0x1fU 
                                                 & ((IData)(9U) 
                                                    * 
                                                    (3U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                                                >> 8U))))))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF(", ppn: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF("'h%x }",44,(0xfffffffffffULL 
                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                      >> 0x14U)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_response_frm_ptw_put_BIT_7_44_52_AND_T_ETC___05F_d458)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d2 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d3 
                = (1U & VL_TESTPLUSARGS_I("mtlb"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d4 
                = (1U & VL_TESTPLUSARGS_I("l0"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_OR_TASK_testplusargs_AND_TAS_ETC___05F_d10 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d2) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d3) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d4))) 
           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_OR_TASK_testplusargs_AND_TAS_ETC___05F_d12 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d2) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d3) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d4))) 
           & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh2266 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d2) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d3) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d4)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh2266);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d2) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d3) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d4)))))) {
            VL_WRITEF("[ 0]ITLB: received req: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d2) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d3) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d4)))))) {
            VL_WRITEF("ITLB_core_request { address: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d2) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d3) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d4)))))) {
            VL_WRITEF("'h%x",64,(((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[2U])) 
                                  << 0x3fU) | (((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U])) 
                                                  >> 1U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d2) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d3) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d4)))))) {
            VL_WRITEF(", sfence: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_OR_TASK_testplusargs_AND_TAS_ETC___05F_d10)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_OR_TASK_testplusargs_AND_TAS_ETC___05F_d12)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d2) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d3) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d4)))))) {
            VL_WRITEF(" }");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d2) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d3) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d4)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U])) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d13 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U])) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d14 
                = (1U & VL_TESTPLUSARGS_I("mitlb"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U])) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d15 
                = (1U & VL_TESTPLUSARGS_I("l0"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__put_core_request_put_BIT_0_AND_TASK_testplusar_ETC___05F_d18 
        = (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U] 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d13) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d14) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d15))));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U])) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh3045 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__put_core_request_put_BIT_0_AND_TASK_testplusar_ETC___05F_d18)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh3045);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__put_core_request_put_BIT_0_AND_TASK_testplusar_ETC___05F_d18)))) {
            VL_WRITEF("[ 0]ITLB: SFence received");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__put_core_request_put_BIT_0_AND_TASK_testplusar_ETC___05F_d18)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
              & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U])) 
             & ((0U == (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU)))) 
                | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d186 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
              & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U])) 
             & ((0U == (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU)))) 
                | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d187 
                = (1U & VL_TESTPLUSARGS_I("mitlb"));
        }
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
              & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U])) 
             & ((0U == (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU)))) 
                | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d188 
                = (1U & VL_TESTPLUSARGS_I("l0"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_wr_satp_whas___05F0_THEN_wr_satp_wget___05F1_ELSE_D_ETC___05F_d191 
        = (((0U == (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                    >> 0x3cU)))) | 
            (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d186) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d187) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d188))));
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
              & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U])) 
             & ((0U == (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU)))) 
                | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh4214 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                          & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U])) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_wr_satp_whas___05F0_THEN_wr_satp_wget___05F1_ELSE_D_ETC___05F_d191)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh4214);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                          & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U])) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_wr_satp_whas___05F0_THEN_wr_satp_wget___05F1_ELSE_D_ETC___05F_d191)))) {
            VL_WRITEF("[ 0]ITLB : Transparent Translation. PhyAddr: %x",
                      32,((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U] 
                           << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U] 
                                        >> 1U)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                          & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U])) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_wr_satp_whas___05F0_THEN_wr_satp_wget___05F1_ELSE_D_ETC___05F_d191)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200 
                = (1U & VL_TESTPLUSARGS_I("mitlb"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201 
                = (1U & VL_TESTPLUSARGS_I("l0"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d204 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d212 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84)
               ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                     >> 1U)) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                                 ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                                       >> 1U)) : ((
                                                   ((~ 
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                      >> 1U)) 
                                                    | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                                   | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                      & (~ 
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                          >> 6U)))) 
                                                  & (~ 
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                                      >> 1U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d222 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84)
               ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                  >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                             ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                                >> 1U) : ((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                             >> 1U) 
                                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38)) 
                                           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                 >> 6U))) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                             >> 1U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d237 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84)
               ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                     >> 2U)) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                                 ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                                       >> 2U)) : ((1U 
                                                   & (((~ 
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                         >> 1U)) 
                                                       | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                                      | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                         & (~ 
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                             >> 6U)))))
                                                   ? 
                                                  (~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                                    >> 2U))
                                                   : 
                                                  (~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                    >> 2U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d244 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84)
               ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                  >> 2U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                             ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                                >> 2U) : ((1U & (((~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                    >> 1U)) 
                                                  | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                                 | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                    & (~ 
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                        >> 6U)))))
                                           ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                              >> 2U)
                                           : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                              >> 2U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d259 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84)
               ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                     >> 3U)) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                                 ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                                       >> 3U)) : ((1U 
                                                   & (((~ 
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                         >> 1U)) 
                                                       | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                                      | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                         & (~ 
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                             >> 6U)))))
                                                   ? 
                                                  (~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                                    >> 3U))
                                                   : 
                                                  (~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                    >> 3U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d266 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84)
               ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                  >> 3U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                             ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                                >> 3U) : ((1U & (((~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                    >> 1U)) 
                                                  | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                                 | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                    & (~ 
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                        >> 6U)))))
                                           ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                              >> 3U)
                                           : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                              >> 3U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d270 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d144));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d277 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84)
               ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                  >> 4U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                             ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                                >> 4U) : ((1U & (((~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                    >> 1U)) 
                                                  | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                                 | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                    & (~ 
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                        >> 6U)))))
                                           ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                              >> 4U)
                                           : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                              >> 4U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d281 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d166));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d285 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d171));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d293 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84)
               ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                     >> 6U)) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                                 ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                                       >> 6U)) : ((1U 
                                                   & (((~ 
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                         >> 1U)) 
                                                       | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                                      | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                         & (~ 
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                             >> 6U)))))
                                                   ? 
                                                  (~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                                    >> 6U))
                                                   : 
                                                  (~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                    >> 6U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d304 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d155));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d300 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84)
               ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                  >> 6U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                             ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                                >> 6U) : ((1U & (((~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                    >> 1U)) 
                                                  | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                                 | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                    & (~ 
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                        >> 6U)))))
                                           ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                              >> 6U)
                                           : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                              >> 6U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d311 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84)
               ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                  >> 7U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                             ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                                >> 7U) : ((1U & (((~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                    >> 1U)) 
                                                  | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                                 | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                    & (~ 
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                        >> 6U)))))
                                           ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                              >> 7U)
                                           : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                              >> 7U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d333 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84)
               ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                  >> 8U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                             ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                                >> 8U) : ((1U & (((~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                    >> 1U)) 
                                                  | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                                 | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                    & (~ 
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                        >> 6U)))))
                                           ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                              >> 8U)
                                           : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                              >> 8U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d326 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d199) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d200) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d201))) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84)
               ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                     >> 8U)) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                                 ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                                       >> 8U)) : ((1U 
                                                   & (((~ 
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                         >> 1U)) 
                                                       | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                                      | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                         & (~ 
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                             >> 6U)))))
                                                   ? 
                                                  (~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                                    >> 8U))
                                                   : 
                                                  (~ 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                    >> 8U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206 
        = ((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
             & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                       >> 0x3cU))))) 
            & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d204));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d215 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d212));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d225 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d222));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d240 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d237));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d247 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d244));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d262 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d259));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d273 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d270));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d269 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d266));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d280 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d277));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d284 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d281));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d288 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d285));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d296 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d293));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d303 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d300));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d314 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d311));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d307 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d304));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d329 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d326));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d336 
        = (((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
              & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU))))) 
             & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs_99_OR_TASK_testplusargs_00_A_ETC___05F_d333));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh3219 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh3219);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF("[ 0]ITLB: Hit in TLB:");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF("VPNTag { permissions: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF("TLB_permissions { v: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d215)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d225)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF(", r: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d240)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d247)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF(", w: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d262)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d269)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF(", x: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d273)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d280)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF(", u: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d284)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d288)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF(", g: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d296)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d303)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF(", a: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d307)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d314)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF(", d: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d329)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d336)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF(" }");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF(", vpn: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF("'h%x",27,(0x7ffffffU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84)
                                                ? (
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[2U] 
                                                      >> 6U))
                                                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                                                    ? 
                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[2U] 
                                                       >> 6U))
                                                    : 
                                                   ((1U 
                                                     & (((~ 
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                           >> 1U)) 
                                                         | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                                        | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                           & (~ 
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                               >> 6U)))))
                                                     ? 
                                                    ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[2U] 
                                                        >> 6U))
                                                     : 
                                                    ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[2U] 
                                                        >> 6U)))))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF(", asid: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF("'h%x",8,(0xffU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84)
                                          ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[2U] 
                                              << 2U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[1U] 
                                                >> 0x1eU))
                                          : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                                              ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[2U] 
                                                  << 2U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[1U] 
                                                    >> 0x1eU))
                                              : ((1U 
                                                  & (((~ 
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                        >> 1U)) 
                                                      | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                                     | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                        & (~ 
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                            >> 6U)))))
                                                  ? 
                                                 ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[2U] 
                                                   << 2U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[1U] 
                                                     >> 0x1eU))
                                                  : 
                                                 ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[2U] 
                                                   << 2U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[1U] 
                                                     >> 0x1eU)))))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF(", pagemask: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF("'h%x",18,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__mask___05Fh4249);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF(", ppn: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF("'h%x }",44,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__x___05Fh4532);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d206)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d343 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d344 
                = (1U & VL_TESTPLUSARGS_I("mitlb"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d345 
                = (1U & VL_TESTPLUSARGS_I("l0"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d348 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d343) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d344) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d345))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d350 
        = ((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
             & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                       >> 0x3cU))))) 
            & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d348));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh4321 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d350)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh4321);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d350)))) {
            VL_WRITEF("[ 0]mask:%x",18,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__mask___05Fh4249);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d350)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d352 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d353 
                = (1U & VL_TESTPLUSARGS_I("mitlb"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d354 
                = (1U & VL_TESTPLUSARGS_I("l0"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d357 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d352) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d353) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d354))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d359 
        = ((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
             & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                       >> 0x3cU))))) 
            & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d357));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh4470 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d359)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh4470);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d359)))) {
            VL_WRITEF("[ 0]lower_ppn:%x",18,(0x3ffffU 
                                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__x___05Fh4532)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d359)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d361 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d362 
                = (1U & VL_TESTPLUSARGS_I("mitlb"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d363 
                = (1U & VL_TESTPLUSARGS_I("l0"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d366 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d361) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d362) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d363))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d368 
        = ((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
             & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                       >> 0x3cU))))) 
            & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d366));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh4619 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d368)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh4619);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d368)))) {
            VL_WRITEF("[ 0]lower_vpn:%x",18,(0x3ffffU 
                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U] 
                                                 << 0x13U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U] 
                                                   >> 0xdU))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d368)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d370 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d371 
                = (1U & VL_TESTPLUSARGS_I("mitlb"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d372 
                = (1U & VL_TESTPLUSARGS_I("l0"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d375 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d370) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d371) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d372))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d377 
        = ((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
             & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                       >> 0x3cU))))) 
            & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d375));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh4765 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d377)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh4765);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d377)))) {
            VL_WRITEF("[ 0]lower_pa:%x",18,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__lower_pa___05Fh4252);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d377)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d379 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d380 
                = (1U & VL_TESTPLUSARGS_I("mitlb"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d381 
                = (1U & VL_TESTPLUSARGS_I("l0"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d384 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d379) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d380) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d381))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d386 
        = ((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
             & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                       >> 0x3cU))))) 
            & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d384));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh4923 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d386)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh4923);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d386)))) {
            VL_WRITEF("[ 0]highest_ppn:%x",26,(0x3ffffffU 
                                               & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__x___05Fh4532 
                                                          >> 0x12U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d386)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d389 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d390 
                = (1U & VL_TESTPLUSARGS_I("mitlb"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d391 
                = (1U & VL_TESTPLUSARGS_I("l0"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d394 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d389) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d390) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d391))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d396 
        = ((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
             & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                       >> 0x3cU))))) 
            & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d394));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh5073 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d396)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh5073);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d396)))) {
            VL_WRITEF("[ 0]ITLB: Sending PA:%x Trap:%b",
                      64,(((QData)((IData)((0x3ffffffU 
                                            & (IData)(
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__x___05Fh4532 
                                                       >> 0x12U))))) 
                           << 0x1eU) | (QData)((IData)(
                                                       ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__lower_pa___05Fh4252 
                                                         << 0xcU) 
                                                        | (0xfffU 
                                                           & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U] 
                                                               << 0x1fU) 
                                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U] 
                                                                 >> 1U))))))),
                      1,((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d144) 
                         | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d181)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d396)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d407))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d408 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d407))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d409 
                = (1U & VL_TESTPLUSARGS_I("mitlb"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d407))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d410 
                = (1U & VL_TESTPLUSARGS_I("l0"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d413 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d405) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d408) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d409) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__TASK_testplusargs___05F_d410))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d415 
        = ((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
             & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                       >> 0x3cU))))) 
            & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d413));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d407))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh4070 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d415)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v___05Fh4070);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d415)))) {
            VL_WRITEF("[ 0]ITLB : TLBMiss. Sending Address to PTW:%x",
                      64,(((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[2U])) 
                           << 0x3fU) | (((QData)((IData)(
                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U])) 
                                           >> 1U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d415)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484 
                = (1U & VL_TESTPLUSARGS_I("mcore"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485 
                = (1U & VL_TESTPLUSARGS_I("l1"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh8783 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh8783);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("[ 0]CORE : IMEM Line Requesting ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("Axi4_rd_addr { arid: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("'h%x",1,(1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_read_mem_request__DOT__data0_reg)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF(", araddr: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("'h%x",32,(IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_read_mem_request__DOT__data0_reg 
                                         >> 0xcU)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF(", arlen: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("'h%x",8,(0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_read_mem_request__DOT__data0_reg 
                                                 >> 4U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF(", arsize: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("'h%x",3,(7U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_read_mem_request__DOT__data0_reg 
                                              >> 1U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF(", arburst: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("'h2");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF(", arlock: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("'h0");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF(", arcache: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("'h0");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF(", arprot: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("'h%x",3,(4U | (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv) 
                                            >> 1U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF(", arqos: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("'h0");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF(", arregion: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("'h0");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF(", aruser: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("'h0 }");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d483) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d484) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d485)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503 
                = (1U & VL_TESTPLUSARGS_I("mcore"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504 
                = (1U & VL_TESTPLUSARGS_I("l1"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_02_OR_TASK_testplusargs_03_A_ETC___05F_d509 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504))) 
           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__fetch_xactor_rg_rd_data[0U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_02_OR_TASK_testplusargs_03_A_ETC___05F_d511 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504))) 
           & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__fetch_xactor_rg_rd_data[0U]));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh9014 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh9014);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504)))))) {
            VL_WRITEF("[ 0]CORE : IMEM Line Response ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504)))))) {
            VL_WRITEF("Axi4_rd_data { rid: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504)))))) {
            VL_WRITEF("'h%x",1,(1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__fetch_xactor_rg_rd_data[2U] 
                                      >> 3U)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504)))))) {
            VL_WRITEF(", rdata: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504)))))) {
            VL_WRITEF("'h%x",64,(((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__fetch_xactor_rg_rd_data[2U])) 
                                  << 0x3dU) | (((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__fetch_xactor_rg_rd_data[1U])) 
                                                << 0x1dU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__fetch_xactor_rg_rd_data[0U])) 
                                                  >> 3U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504)))))) {
            VL_WRITEF(", rresp: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504)))))) {
            VL_WRITEF("'h%x",2,(3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__fetch_xactor_rg_rd_data[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__fetch_xactor_rg_rd_data[0U] 
                                       >> 1U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504)))))) {
            VL_WRITEF(", rlast: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_02_OR_TASK_testplusargs_03_A_ETC___05F_d509)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_02_OR_TASK_testplusargs_03_A_ETC___05F_d511)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504)))))) {
            VL_WRITEF(", ruser: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504)))))) {
            VL_WRITEF("'h0 }");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_imem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d502) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d503) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d504)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d527 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d528 
                = (1U & VL_TESTPLUSARGS_I("mcore"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d529 
                = (1U & VL_TESTPLUSARGS_I("l0"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_27_OR_TASK_testplusargs_28_A_ETC___05F_d536 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d527) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d528) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d529))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_request_D_OUT[2U] 
              >> 3U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_27_OR_TASK_testplusargs_28_A_ETC___05F_d538 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d527) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d528) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d529))) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_request_D_OUT[2U] 
                 >> 3U)));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh9217 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d527) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d528) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d529)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh9217);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d527) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d528) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d529)))))) {
            VL_WRITEF("CORE: Received io op: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d527) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d528) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d529)))))) {
            VL_WRITEF("DCache_io_req { address: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d527) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d528) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d529)))))) {
            VL_WRITEF("'h%x",32,((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_request_D_OUT[3U] 
                                  << 0x1cU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_request_D_OUT[2U] 
                                               >> 4U)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d527) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d528) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d529)))))) {
            VL_WRITEF(", read_write: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_27_OR_TASK_testplusargs_28_A_ETC___05F_d536)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_27_OR_TASK_testplusargs_28_A_ETC___05F_d538)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d527) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d528) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d529)))))) {
            VL_WRITEF(", data: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d527) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d528) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d529)))))) {
            VL_WRITEF("'h%x",64,(((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_request_D_OUT[2U])) 
                                  << 0x3dU) | (((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_request_D_OUT[1U])) 
                                                << 0x1dU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_request_D_OUT[0U])) 
                                                  >> 3U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d527) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d528) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d529)))))) {
            VL_WRITEF(", size: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d527) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d528) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d529)))))) {
            VL_WRITEF("'h%x }",3,(7U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_request_D_OUT[0U]));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_initiate_io) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d527) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d528) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d529)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583 
                = (1U & VL_TESTPLUSARGS_I("mcore"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584 
                = (1U & VL_TESTPLUSARGS_I("l1"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_82_OR_TASK_testplusargs_83_A_ETC___05F_d589 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584))) 
           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[0U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_82_OR_TASK_testplusargs_83_A_ETC___05F_d591 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584))) 
           & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[0U]));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh11987 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh11987);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584)))))) {
            VL_WRITEF("[ 0]CORE : IO Read Response ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584)))))) {
            VL_WRITEF("Axi4_rd_data { rid: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584)))))) {
            VL_WRITEF("'h%x",1,(1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[2U] 
                                      >> 3U)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584)))))) {
            VL_WRITEF(", rdata: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584)))))) {
            VL_WRITEF("'h%x",64,(((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[2U])) 
                                  << 0x3dU) | (((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[1U])) 
                                                << 0x1dU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[0U])) 
                                                  >> 3U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584)))))) {
            VL_WRITEF(", rresp: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584)))))) {
            VL_WRITEF("'h%x",2,(3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[0U] 
                                       >> 1U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584)))))) {
            VL_WRITEF(", rlast: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_82_OR_TASK_testplusargs_83_A_ETC___05F_d589)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_82_OR_TASK_testplusargs_83_A_ETC___05F_d591)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584)))))) {
            VL_WRITEF(", ruser: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584)))))) {
            VL_WRITEF("'h0 }");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d582) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d583) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d584)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_write_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d601 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_write_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d602 
                = (1U & VL_TESTPLUSARGS_I("mcore"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_write_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d603 
                = (1U & VL_TESTPLUSARGS_I("l1"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_write_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh12201 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d601) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d602) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d603)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh12201);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d601) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d602) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d603)))))) {
            VL_WRITEF("[ 0]CORE : IO Write Response ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d601) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d602) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d603)))))) {
            VL_WRITEF("Axi4_wr_resp { bid: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d601) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d602) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d603)))))) {
            VL_WRITEF("'h%x",1,(1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_wr_resp) 
                                      >> 2U)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d601) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d602) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d603)))))) {
            VL_WRITEF(", bresp: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d601) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d602) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d603)))))) {
            VL_WRITEF("'h%x",2,(3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_wr_resp)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d601) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d602) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d603)))))) {
            VL_WRITEF(", buser: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d601) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d602) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d603)))))) {
            VL_WRITEF("'h0 }");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d601) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d602) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d603)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_read_response) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_io_write_resp)))) {
            VL_WRITEF("Error: \"src//ccore.bsv\", line 122, column 24: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_rl_handle_io_read_response]\n  and [RL_rl_handle_io_write_resp] ) fired in the same clock cycle.\n\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
              & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                         >> 0x20U))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d630))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d635 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
              & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                         >> 0x20U))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d630))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d636 
                = (1U & VL_TESTPLUSARGS_I("mcore"));
        }
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
              & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                         >> 0x20U))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d630))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d637 
                = (1U & VL_TESTPLUSARGS_I("l1"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d640 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d630) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d635) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d636) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d637))));
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
              & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                         >> 0x20U))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d630))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh12984 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                          & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                                     >> 0x20U))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d640)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh12984);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                          & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                                     >> 0x20U))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d640)))) {
            VL_WRITEF("[ 0]CORE: Delaying Request: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                          & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                                     >> 0x20U))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d640)))) {
            VL_WRITEF("DCache_mem_readreq { address: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                          & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                                     >> 0x20U))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d640)))) {
            VL_WRITEF("'h%x",32,(IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_request__DOT__data0_reg 
                                         >> 0xbU)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                          & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                                     >> 0x20U))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d640)))) {
            VL_WRITEF(", burst_len: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                          & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                                     >> 0x20U))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d640)))) {
            VL_WRITEF("'h%x",8,(0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_request__DOT__data0_reg 
                                                 >> 3U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                          & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                                     >> 0x20U))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d640)))) {
            VL_WRITEF(", burst_size: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                          & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                                     >> 0x20U))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d640)))) {
            VL_WRITEF("'h%x }",3,(7U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_request__DOT__data0_reg)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                          & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                                     >> 0x20U))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d640)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
             & ((~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                            >> 0x20U))) | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d630))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d650 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
             & ((~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                            >> 0x20U))) | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d630))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d651 
                = (1U & VL_TESTPLUSARGS_I("mcore"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
             & ((~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                            >> 0x20U))) | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d630))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d652 
                = (1U & VL_TESTPLUSARGS_I("l1"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655 
        = (((~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                        >> 0x20U))) | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d630))) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d650) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d651) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d652))));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
             & ((~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__wr_write_req 
                            >> 0x20U))) | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__IF_wr_write_req_23_BIT_32_24_THEN_wr_write_req_ETC___05F_d630))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh13222 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh13222);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("[ 0]CORE : DMEM Line Requesting ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("Axi4_rd_addr { arid: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("'h0");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF(", araddr: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("'h%x",32,(IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_request__DOT__data0_reg 
                                         >> 0xbU)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF(", arlen: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("'h%x",8,(0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_request__DOT__data0_reg 
                                                 >> 3U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF(", arsize: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("'h%x",3,(7U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_request__DOT__data0_reg)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF(", arburst: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("'h2");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF(", arlock: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("'h0");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF(", arcache: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("'h0");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF(", arprot: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("'h%x",3,(1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv) 
                                      >> 1U)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF(", arqos: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("'h0");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF(", arregion: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("'h0");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF(", aruser: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("'h0 }");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_line_read_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_wr_write_req_23_BIT_32_24_46_OR_NOT_IF_wr___05FETC___05F_d655)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661 
                = (1U & VL_TESTPLUSARGS_I("mcore"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662 
                = (1U & VL_TESTPLUSARGS_I("l1"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh13454 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh13454);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("[ 0]CORE : DMEM Delayed Line Requesting ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("Axi4_rd_addr { arid: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("'h%x",1,(1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__rg_read_line_req 
                                              >> 0x3dU))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF(", araddr: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("'h%x",32,(IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__rg_read_line_req 
                                         >> 0x1dU)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF(", arlen: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("'h%x",8,(0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__rg_read_line_req 
                                                 >> 0x15U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF(", arsize: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("'h%x",3,(7U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__rg_read_line_req 
                                              >> 0x12U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF(", arburst: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("'h%x",2,(3U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__rg_read_line_req 
                                              >> 0x10U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF(", arlock: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("'h%x",1,(1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__rg_read_line_req 
                                              >> 0xfU))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF(", arcache: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("'h%x",4,(0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__rg_read_line_req 
                                                >> 0xbU))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF(", arprot: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("'h%x",3,(7U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__rg_read_line_req 
                                              >> 8U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF(", arqos: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("'h%x",4,(0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__rg_read_line_req 
                                                >> 4U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF(", arregion: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("'h%x",4,(0xfU & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__rg_read_line_req)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF(", aruser: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("'h0 }");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_delayed_read) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d660) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d661) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d662)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683 
                = (1U & VL_TESTPLUSARGS_I("mcore"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684 
                = (1U & VL_TESTPLUSARGS_I("l1"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_82_OR_TASK_testplusargs_83_A_ETC___05F_d688 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684))) 
           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[0U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_82_OR_TASK_testplusargs_83_A_ETC___05F_d689 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684))) 
           & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[0U]));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh13701 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh13701);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684)))))) {
            VL_WRITEF("[ 0]CORE : DMEM Line Response ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684)))))) {
            VL_WRITEF("Axi4_rd_data { rid: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684)))))) {
            VL_WRITEF("'h%x",1,(1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[2U] 
                                      >> 3U)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684)))))) {
            VL_WRITEF(", rdata: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684)))))) {
            VL_WRITEF("'h%x",64,(((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[2U])) 
                                  << 0x3dU) | (((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[1U])) 
                                                << 0x1dU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[0U])) 
                                                  >> 3U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684)))))) {
            VL_WRITEF(", rresp: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684)))))) {
            VL_WRITEF("'h%x",2,(3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[0U] 
                                       >> 1U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684)))))) {
            VL_WRITEF(", rlast: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_82_OR_TASK_testplusargs_83_A_ETC___05F_d688)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_82_OR_TASK_testplusargs_83_A_ETC___05F_d689)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684)))))) {
            VL_WRITEF(", ruser: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684)))))) {
            VL_WRITEF("'h0 }");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d682) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d683) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d684)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d706 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d707 
                = (1U & VL_TESTPLUSARGS_I("mcore"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d708 
                = (1U & VL_TESTPLUSARGS_I("l1"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_06_OR_TASK_testplusargs_07_A_ETC___05F_d713 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d706) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d707) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d708))) 
           & (0U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[0U])));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_06_OR_TASK_testplusargs_07_A_ETC___05F_d715 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d706) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d707) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d708))) 
           & (1U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[0U])));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_06_OR_TASK_testplusargs_07_A_ETC___05F_d717 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d706) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d707) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d708))) 
           & (2U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[0U])));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_06_OR_TASK_testplusargs_07_A_ETC___05F_d723 
        = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d706) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d707) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d708))) 
             & (0U != (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[0U]))) 
            & (1U != (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[0U]))) 
           & (2U != (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[0U])));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh14109 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d706) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d707) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d708)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh14109);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d706) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d707) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d708)))))) {
            VL_WRITEF("[ 0]CORE : DMEM Write Addr : Request ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d706) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d707) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d708)))))) {
            VL_WRITEF("{awaddr:%0x,awlen:%0#",32,((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[0x11U] 
                                                   << 0x15U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[0x10U] 
                                                     >> 0xbU)),
                      8,(0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[1U] 
                                   << 0x1dU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[0U] 
                                                >> 3U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d706) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d707) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d708)))))) {
            VL_WRITEF(",");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_06_OR_TASK_testplusargs_07_A_ETC___05F_d713)))) {
            VL_WRITEF("sz1");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_06_OR_TASK_testplusargs_07_A_ETC___05F_d715)))) {
            VL_WRITEF("sz2");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_06_OR_TASK_testplusargs_07_A_ETC___05F_d717)))) {
            VL_WRITEF("sz4");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_06_OR_TASK_testplusargs_07_A_ETC___05F_d723)))) {
            VL_WRITEF("sz8");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d706) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d707) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d708)))))) {
            VL_WRITEF(",");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d706) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d707) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d708)))))) {
            VL_WRITEF("wrap");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d706) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d707) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d708)))))) {
            VL_WRITEF("}");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d706) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d707) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d708)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d724 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d725 
                = (1U & VL_TESTPLUSARGS_I("mcore"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d726 
                = (1U & VL_TESTPLUSARGS_I("l1"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_24_OR_TASK_testplusargs_25_A_ETC___05F_d730 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d724) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d725) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d726))) 
           & (0U == (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[1U] 
                               << 0x1dU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[0U] 
                                            >> 3U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_24_OR_TASK_testplusargs_25_A_ETC___05F_d732 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d724) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d725) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d726))) 
           & (0U != (0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[1U] 
                               << 0x1dU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[0U] 
                                            >> 3U)))));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh14286 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d724) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d725) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d726)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh14286);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d724) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d725) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d726)))))) {
            VL_WRITEF("[ 0]CORE : DMEM Write Data : Request ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d724) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d725) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d726)))))) {
            VL_WRITEF("{wdata:%0x,wstrb:ff",64,(((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[2U])) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[1U])) 
                                                    << 0x15U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request_D_OUT[0U])) 
                                                      >> 0xbU))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_24_OR_TASK_testplusargs_25_A_ETC___05F_d730)))) {
            VL_WRITEF(",wlast");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_24_OR_TASK_testplusargs_25_A_ETC___05F_d732)))) {
            VL_WRITEF(",..");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d724) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d725) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d726)))))) {
            VL_WRITEF("}");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_rl_handle_dmem_write_request) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d724) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d725) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d726)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_dmem_burst_write_data) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d749 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_dmem_burst_write_data) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d750 
                = (1U & VL_TESTPLUSARGS_I("mcore"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_dmem_burst_write_data) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d751 
                = (1U & VL_TESTPLUSARGS_I("l1"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_dmem_burst_write_data) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh14794 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_dmem_burst_write_data) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d749) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d750) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d751)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh14794);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_dmem_burst_write_data) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d749) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d750) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d751)))))) {
            VL_WRITEF("[ 0]CORE : DMEM Write Data: %x rg_burst_count: %3# last: %b rg_shift_amount:%3#",
                      512,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__x___05Fh14702,
                      8,(IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__rg_burst_count),
                      1,(7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__rg_burst_count)),
                      9,(IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__rg_shift_amount));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_dmem_burst_write_data) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d749) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d750) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d751)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_handle_dmem_line_write_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d759 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_handle_dmem_line_write_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d760 
                = (1U & VL_TESTPLUSARGS_I("mcore"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_handle_dmem_line_write_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d761 
                = (1U & VL_TESTPLUSARGS_I("l1"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_handle_dmem_line_write_resp) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh14950 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_handle_dmem_line_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d759) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d760) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d761)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh14950);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_handle_dmem_line_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d759) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d760) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d761)))))) {
            VL_WRITEF("[ 0]CORE : DMEM Write Line Response ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_handle_dmem_line_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d759) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d760) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d761)))))) {
            VL_WRITEF("Axi4_wr_resp { bid: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_handle_dmem_line_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d759) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d760) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d761)))))) {
            VL_WRITEF("'h%x",1,(1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_wr_resp) 
                                      >> 2U)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_handle_dmem_line_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d759) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d760) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d761)))))) {
            VL_WRITEF(", bresp: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_handle_dmem_line_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d759) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d760) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d761)))))) {
            VL_WRITEF("'h%x",2,(3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_wr_resp)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_handle_dmem_line_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d759) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d760) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d761)))))) {
            VL_WRITEF(", buser: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_handle_dmem_line_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d759) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d760) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d761)))))) {
            VL_WRITEF("'h0 }");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_handle_dmem_line_write_resp) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d759) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d760) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d761)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d9 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d10 
                = (1U & VL_TESTPLUSARGS_I("mptwalk"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d11 
                = (1U & VL_TESTPLUSARGS_I("l2"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d18 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d9) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d10) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d11))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
              >> 0xcU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d27 
        = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d9) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d10) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d11))) 
             & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                   >> 0xcU))) & (2U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                               << 0x17U) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                 >> 9U))))) 
           & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d47 
        = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d9) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d10) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d11))) 
             & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                   >> 0xcU))) & (2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                               << 0x17U) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                 >> 9U))))) 
           & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d81 
        = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d9) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d10) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d11))) 
             & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                   >> 0xcU))) & ((2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                << 0x17U) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                  >> 9U)))) 
                                 | vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U])) 
           & ((2U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                             << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                          >> 9U)))) 
              | vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d84 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d9) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d10) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d11))) 
           & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                            << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                         >> 9U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d82 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d9) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d10) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d11))) 
           & (0U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                            << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                         >> 9U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d86 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d9) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d10) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d11))) 
           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d87 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d9) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d10) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d11))) 
           & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U]));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh1565 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d9) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d10) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d11)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh1565);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d9) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d10) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d11)))))) {
            VL_WRITEF("PTW : Resending Core request back to DCache: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d9) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d10) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d11)))))) {
            VL_WRITEF("{va:%x",64,(((QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[4U])) 
                                    << 0x33U) | (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U])) 
                                                    >> 0xdU))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d18)))) {
            VL_WRITEF(" is a Fence op");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d27))) {
            if ((0U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                               << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                            >> 9U))))) {
                if (VL_UNLIKELY((0U == (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                               << 0x1aU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                 >> 6U)))))) {
                    VL_WRITEF(" is a LB op");
                    Verilated::runFlushCallbacks();
                } else {
                    if (VL_UNLIKELY((1U == (7U & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                     >> 6U)))))) {
                        VL_WRITEF(" is a LH op");
                        Verilated::runFlushCallbacks();
                    } else {
                        if (VL_UNLIKELY((2U == (7U 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                      >> 6U)))))) {
                            VL_WRITEF(" is a LW op");
                            Verilated::runFlushCallbacks();
                        } else {
                            if (VL_UNLIKELY((3U == 
                                             (7U & 
                                              ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                  >> 6U)))))) {
                                VL_WRITEF(" is a LD op");
                                Verilated::runFlushCallbacks();
                            } else {
                                if (VL_UNLIKELY((4U 
                                                 == 
                                                 (7U 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                        >> 6U)))))) {
                                    VL_WRITEF(" is a LBU op");
                                    Verilated::runFlushCallbacks();
                                } else {
                                    if ((5U == (7U 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                      >> 6U))))) {
                                        VL_WRITEF(" is a LHU op");
                                        Verilated::runFlushCallbacks();
                                    } else {
                                        VL_WRITEF(" is a LWU op");
                                        Verilated::runFlushCallbacks();
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                   << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                >> 9U))))) {
                    if (VL_UNLIKELY((0U == (7U & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                     >> 6U)))))) {
                        VL_WRITEF(" is a SB op");
                        Verilated::runFlushCallbacks();
                    } else {
                        if (VL_UNLIKELY((1U == (7U 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                      >> 6U)))))) {
                            VL_WRITEF(" is a SH op");
                            Verilated::runFlushCallbacks();
                        } else {
                            if (VL_UNLIKELY((2U == 
                                             (7U & 
                                              ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                  >> 6U)))))) {
                                VL_WRITEF(" is a SW op");
                                Verilated::runFlushCallbacks();
                            } else {
                                if (VL_UNLIKELY((3U 
                                                 == 
                                                 (7U 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                        >> 6U)))))) {
                                    VL_WRITEF(" is a SD op");
                                    Verilated::runFlushCallbacks();
                                } else {
                                    if (VL_UNLIKELY(
                                                    (4U 
                                                     == 
                                                     (7U 
                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                          << 0x1aU) 
                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                            >> 6U)))))) {
                                        VL_WRITEF(" is a SBU op");
                                        Verilated::runFlushCallbacks();
                                    } else {
                                        if ((5U == 
                                             (7U & 
                                              ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                  >> 6U))))) {
                                            VL_WRITEF(" is a SHU op");
                                            Verilated::runFlushCallbacks();
                                        } else {
                                            VL_WRITEF(" is a SWU op");
                                            Verilated::runFlushCallbacks();
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (VL_UNLIKELY((0U == (7U & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                     >> 6U)))))) {
                        VL_WRITEF(" is a UNKNOWN ACCESSB op");
                        Verilated::runFlushCallbacks();
                    } else {
                        if (VL_UNLIKELY((1U == (7U 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                      >> 6U)))))) {
                            VL_WRITEF(" is a UNKNOWN ACCESSH op");
                            Verilated::runFlushCallbacks();
                        } else {
                            if (VL_UNLIKELY((2U == 
                                             (7U & 
                                              ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                  >> 6U)))))) {
                                VL_WRITEF(" is a UNKNOWN ACCESSW op");
                                Verilated::runFlushCallbacks();
                            } else {
                                if (VL_UNLIKELY((3U 
                                                 == 
                                                 (7U 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                        >> 6U)))))) {
                                    VL_WRITEF(" is a UNKNOWN ACCESSD op");
                                    Verilated::runFlushCallbacks();
                                } else {
                                    if (VL_UNLIKELY(
                                                    (4U 
                                                     == 
                                                     (7U 
                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                          << 0x1aU) 
                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                            >> 6U)))))) {
                                        VL_WRITEF(" is a UNKNOWN ACCESSBU op");
                                        Verilated::runFlushCallbacks();
                                    } else {
                                        if ((5U == 
                                             (7U & 
                                              ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[3U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U] 
                                                  >> 6U))))) {
                                            VL_WRITEF(" is a UNKNOWN ACCESSHU op");
                                            Verilated::runFlushCallbacks();
                                        } else {
                                            VL_WRITEF(" is a UNKNOWN ACCESSWU op");
                                            Verilated::runFlushCallbacks();
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d47))) {
            if ((3U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[1U] 
                                 << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U] 
                                              >> 1U))))) {
                if ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U])) {
                    VL_WRITEF(" is a AMOSWAP.D op");
                    Verilated::runFlushCallbacks();
                } else {
                    VL_WRITEF(" is a AMOSWAP.W op");
                    Verilated::runFlushCallbacks();
                }
            } else {
                if ((0U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[1U] 
                                     << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U] 
                                                  >> 1U))))) {
                    if ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U])) {
                        VL_WRITEF(" is a AMOADD.D op");
                        Verilated::runFlushCallbacks();
                    } else {
                        VL_WRITEF(" is a AMOADD.W op");
                        Verilated::runFlushCallbacks();
                    }
                } else {
                    if ((2U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U] 
                                           >> 1U))))) {
                        if ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U])) {
                            VL_WRITEF(" is a AMOXOR.D op");
                            Verilated::runFlushCallbacks();
                        } else {
                            VL_WRITEF(" is a AMOXOR.W op");
                            Verilated::runFlushCallbacks();
                        }
                    } else {
                        if ((6U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[1U] 
                                             << 0x1fU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U] 
                                               >> 1U))))) {
                            if ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U])) {
                                VL_WRITEF(" is a AMOAND.D op");
                                Verilated::runFlushCallbacks();
                            } else {
                                VL_WRITEF(" is a AMOAND.W op");
                                Verilated::runFlushCallbacks();
                            }
                        } else {
                            if ((4U == (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[1U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U] 
                                                   >> 1U))))) {
                                if ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U])) {
                                    VL_WRITEF(" is a AMOOR.D op");
                                    Verilated::runFlushCallbacks();
                                } else {
                                    VL_WRITEF(" is a AMOOR.W op");
                                    Verilated::runFlushCallbacks();
                                }
                            } else {
                                if ((0xcU == (0xfU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[1U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U] 
                                                    >> 1U))))) {
                                    if ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U])) {
                                        VL_WRITEF(" is a AMOMINU.D op");
                                        Verilated::runFlushCallbacks();
                                    } else {
                                        VL_WRITEF(" is a AMOMINU.W op");
                                        Verilated::runFlushCallbacks();
                                    }
                                } else {
                                    if ((0xeU == (0xfU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[1U] 
                                                      << 0x1fU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U] 
                                                        >> 1U))))) {
                                        if ((0x20U 
                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U])) {
                                            VL_WRITEF(" is a AMOMAXU.D op");
                                            Verilated::runFlushCallbacks();
                                        } else {
                                            VL_WRITEF(" is a AMOMAXU.W op");
                                            Verilated::runFlushCallbacks();
                                        }
                                    } else {
                                        if ((8U == 
                                             (0xfU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[1U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U] 
                                                    >> 1U))))) {
                                            if ((0x20U 
                                                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U])) {
                                                VL_WRITEF(" is a AMOMIN.D op");
                                                Verilated::runFlushCallbacks();
                                            } else {
                                                VL_WRITEF(" is a AMOMIN.W op");
                                                Verilated::runFlushCallbacks();
                                            }
                                        } else {
                                            if (VL_LIKELY(
                                                          (0xaU 
                                                           == 
                                                           (0xfU 
                                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[1U] 
                                                                << 0x1fU) 
                                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U] 
                                                                  >> 1U)))))) {
                                                if (
                                                    (0x20U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U])) {
                                                    VL_WRITEF(" is a AMOMAX.D op");
                                                    Verilated::runFlushCallbacks();
                                                } else {
                                                    VL_WRITEF(" is a AMOMAX.W op");
                                                    Verilated::runFlushCallbacks();
                                                }
                                            } else {
                                                VL_WRITEF(" is a UNKNOWN OP op");
                                                Verilated::runFlushCallbacks();
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d81)))) {
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d82)))) {
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d84)))) {
            VL_WRITEF(", data:%x",64,(((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[2U])) 
                                       << 0x3aU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[1U])) 
                                        << 0x1aU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req_D_OUT[0U])) 
                                        >> 6U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d86)))) {
            VL_WRITEF(" coming from PTWALK");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_OR_TASK_testplusargs_0_AND_T_ETC___05F_d87)))) {
            VL_WRITEF(" coming from CORE");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d9) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d10) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d11)))))) {
            VL_WRITEF("}");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_resend_core_req_to_cache) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d9) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d10) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d11)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d103 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d104 
                = (1U & VL_TESTPLUSARGS_I("mptwalk"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d105 
                = (1U & VL_TESTPLUSARGS_I("l2"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh2275 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d103) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d104) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d105)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh2275);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d103) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d104) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d105)))))) {
            VL_WRITEF("PTW : Recieved Request: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d103) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d104) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d105)))))) {
            VL_WRITEF("PTWalk_tlb_request { address: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d103) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d104) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d105)))))) {
            VL_WRITEF("'h%x",64,(((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_req_queue__DOT__data0_reg[2U])) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_req_queue__DOT__data0_reg[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_req_queue__DOT__data0_reg[0U])) 
                                                  >> 2U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d103) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d104) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d105)))))) {
            VL_WRITEF(", access: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d103) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d104) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d105)))))) {
            VL_WRITEF("'h%x }",2,(3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_req_queue__DOT__data0_reg[0U]));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d103) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d104) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d105)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d112 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d113 
                = (1U & VL_TESTPLUSARGS_I("mptwalk"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d114 
                = (1U & VL_TESTPLUSARGS_I("l2"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh2437 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d112) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d113) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d114)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh2437);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d112) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d113) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d114)))))) {
            VL_WRITEF("PTW : Sending PTE - Address to DMEM:%x",
                      56,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__pte_address___05Fh2370);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_generate_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d112) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d113) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d114)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d155 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d156 
                = (1U & VL_TESTPLUSARGS_I("mptwalk"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d157 
                = (1U & VL_TESTPLUSARGS_I("l2"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_55_OR_TASK_testplusargs_56_A_ETC___05F_d163 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d155) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d156) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d157))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
              >> 0xbU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_55_OR_TASK_testplusargs_56_A_ETC___05F_d185 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d155) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d156) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d157))) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                 >> 0xbU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_55_OR_TASK_testplusargs_56_A_ETC___05F_d188 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d155) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d156) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d157))) 
            & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                  >> 0xbU))) & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                >> 2U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_55_OR_TASK_testplusargs_56_A_ETC___05F_d191 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d155) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d156) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d157))) 
            & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                  >> 0xbU))) & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                   >> 2U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_55_OR_TASK_testplusargs_56_A_ETC___05F_d197 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d155) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d156) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d157))) 
            & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                  >> 0xbU))) & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                   >> 1U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_55_OR_TASK_testplusargs_56_A_ETC___05F_d194 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d155) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d156) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d157))) 
            & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                  >> 0xbU))) & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                >> 1U));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh2807 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d155) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d156) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d157)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh2807);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d155) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d156) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d157)))))) {
            VL_WRITEF("PTW : Memory Response: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_55_OR_TASK_testplusargs_56_A_ETC___05F_d163))) {
            if (VL_UNLIKELY((0U == (0x7fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U] 
                                              << 0x1cU) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                                >> 4U)))))) {
                VL_WRITEF("{Instruction-Address-Misaligned-Trap with mtval:%x",
                          64,(((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[2U])) 
                               << 0x34U) | (((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U])) 
                                               >> 0xcU))));
                Verilated::runFlushCallbacks();
            } else {
                if (VL_UNLIKELY((1U == (0x7fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U] 
                                                  << 0x1cU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                                    >> 4U)))))) {
                    VL_WRITEF("{Instruction-Access-Fault-Trap with mtval:%x",
                              64,(((QData)((IData)(
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[2U])) 
                                   << 0x34U) | (((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U])) 
                                                 << 0x14U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U])) 
                                                   >> 0xcU))));
                    Verilated::runFlushCallbacks();
                } else {
                    if (VL_UNLIKELY((4U == (0x7fU & 
                                            ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U] 
                                              << 0x1cU) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                                >> 4U)))))) {
                        VL_WRITEF("{Load-Address-Misaligned-Trap with mtval:%x",
                                  64,(((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[2U])) 
                                       << 0x34U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U])) 
                                        << 0x14U) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U])) 
                                        >> 0xcU))));
                        Verilated::runFlushCallbacks();
                    } else {
                        if (VL_UNLIKELY((5U == (0x7fU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U] 
                                                    << 0x1cU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                                      >> 4U)))))) {
                            VL_WRITEF("{Load-Access-Fault-Trap with mtval:%x",
                                      64,(((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[2U])) 
                                           << 0x34U) 
                                          | (((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U])) 
                                                >> 0xcU))));
                            Verilated::runFlushCallbacks();
                        } else {
                            if (VL_UNLIKELY((6U == 
                                             (0x7fU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U] 
                                                  << 0x1cU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                                    >> 4U)))))) {
                                VL_WRITEF("{Store-Address-Misaligned-Trap with mtval:%x",
                                          64,(((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[2U])) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U])) 
                                                    >> 0xcU))));
                                Verilated::runFlushCallbacks();
                            } else {
                                if (VL_UNLIKELY((7U 
                                                 == 
                                                 (0x7fU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U] 
                                                      << 0x1cU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                                        >> 4U)))))) {
                                    VL_WRITEF("{Store-Access-Fault-Trap with mtval:%x",
                                              64,(((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[2U])) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U])) 
                                                        >> 0xcU))));
                                    Verilated::runFlushCallbacks();
                                } else {
                                    if (VL_UNLIKELY(
                                                    (0xcU 
                                                     == 
                                                     (0x7fU 
                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U] 
                                                          << 0x1cU) 
                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                                            >> 4U)))))) {
                                        VL_WRITEF("{Instruction-Page-Fault-Trap with mtval:%x",
                                                  64,
                                                  (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[2U])) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U])) 
                                                       << 0x14U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U])) 
                                                         >> 0xcU))));
                                        Verilated::runFlushCallbacks();
                                    } else {
                                        if (VL_UNLIKELY(
                                                        (0xdU 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U] 
                                                              << 0x1cU) 
                                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                                                >> 4U)))))) {
                                            VL_WRITEF("{Load-Page-Fault-Trap with mtval:%x",
                                                      64,
                                                      (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[2U])) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U])) 
                                                           << 0x14U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U])) 
                                                             >> 0xcU))));
                                            Verilated::runFlushCallbacks();
                                        } else {
                                            if ((0xfU 
                                                 == 
                                                 (0x7fU 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U] 
                                                      << 0x1cU) 
                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                                        >> 4U))))) {
                                                VL_WRITEF("{Store-Page-Fault-Trap with mtval:%x",
                                                          64,
                                                          (((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[2U])) 
                                                            << 0x34U) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U])) 
                                                                 >> 0xcU))));
                                                Verilated::runFlushCallbacks();
                                            } else {
                                                VL_WRITEF("{UNKNOWN CAUSE VALUE with mtval:%x",
                                                          64,
                                                          (((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[2U])) 
                                                            << 0x34U) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U])) 
                                                               << 0x14U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U])) 
                                                                 >> 0xcU))));
                                                Verilated::runFlushCallbacks();
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_55_OR_TASK_testplusargs_56_A_ETC___05F_d185)))) {
            VL_WRITEF("{data:%x",64,(((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[2U])) 
                                      << 0x34U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U])) 
                                                    << 0x14U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U])) 
                                                      >> 0xcU))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_55_OR_TASK_testplusargs_56_A_ETC___05F_d163)))) {
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_55_OR_TASK_testplusargs_56_A_ETC___05F_d188)))) {
            VL_WRITEF(" is IO");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_55_OR_TASK_testplusargs_56_A_ETC___05F_d191)))) {
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_55_OR_TASK_testplusargs_56_A_ETC___05F_d163)))) {
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_55_OR_TASK_testplusargs_56_A_ETC___05F_d194)))) {
            VL_WRITEF(" and entry allocated");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_55_OR_TASK_testplusargs_56_A_ETC___05F_d197)))) {
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d155) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d156) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d157)))))) {
            VL_WRITEF("}");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d155) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d156) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d157)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d198 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d199 
                = (1U & VL_TESTPLUSARGS_I("mptwalk"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d200 
                = (1U & VL_TESTPLUSARGS_I("l2"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh3059 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d198) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d199) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d200)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh3059);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d198) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d199) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d200)))))) {
            VL_WRITEF("PTW : For Request: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d198) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d199) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d200)))))) {
            VL_WRITEF("PTWalk_tlb_request { address: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d198) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d199) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d200)))))) {
            VL_WRITEF("'h%x",64,(((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_req_queue__DOT__data0_reg[2U])) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_req_queue__DOT__data0_reg[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_req_queue__DOT__data0_reg[0U])) 
                                                  >> 2U))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d198) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d199) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d200)))))) {
            VL_WRITEF(", access: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d198) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d199) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d200)))))) {
            VL_WRITEF("'h%x }",2,(3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_req_queue__DOT__data0_reg[0U]));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d198) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d199) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d200)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205 
                = (1U & VL_TESTPLUSARGS_I("mptwalk"));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206 
                = (1U & VL_TESTPLUSARGS_I("l2"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d211 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
              >> 0xcU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d213 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                 >> 0xcU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d215 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
              >> 0xdU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d217 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                 >> 0xdU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d221 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                 >> 0xeU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d219 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
              >> 0xeU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d223 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
              >> 0xfU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d225 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                 >> 0xfU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d227 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
              >> 0x10U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d231 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
              >> 0x11U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d229 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                 >> 0x10U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d233 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                 >> 0x11U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d235 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
              >> 0x12U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d237 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                 >> 0x12U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d239 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
              >> 0x13U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d241 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206))) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                 >> 0x13U)));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh3237 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206)))))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh3237);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206)))))) {
            VL_WRITEF("PTW : Permissions");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206)))))) {
            VL_WRITEF("TLB_permissions { v: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d211)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d213)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206)))))) {
            VL_WRITEF(", r: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d215)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d217)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206)))))) {
            VL_WRITEF(", w: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d219)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d221)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206)))))) {
            VL_WRITEF(", x: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d223)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d225)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206)))))) {
            VL_WRITEF(", u: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d227)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d229)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206)))))) {
            VL_WRITEF(", g: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d231)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d233)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206)))))) {
            VL_WRITEF(", a: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d235)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d237)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206)))))) {
            VL_WRITEF(", d: ");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d239)))) {
            VL_WRITEF("True");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs_04_OR_TASK_testplusargs_05_A_ETC___05F_d241)))) {
            VL_WRITEF("False");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206)))))) {
            VL_WRITEF(" }");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d204) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d205) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d206)))))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
             & ((((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                      >> 0xcU)) | ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                       >> 0xdU)) & 
                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                    >> 0xeU))) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_rg_levels_18_EQ_0_43_AND_NOT_ptwalk_ff___05FETC___05F_d330)) 
                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                   >> 0xbU)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d360 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
             & ((((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                      >> 0xcU)) | ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                       >> 0xdU)) & 
                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                    >> 0xeU))) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_rg_levels_18_EQ_0_43_AND_NOT_ptwalk_ff___05FETC___05F_d330)) 
                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                   >> 0xbU)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d361 
                = (1U & VL_TESTPLUSARGS_I("mptwalk"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
             & ((((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                      >> 0xcU)) | ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                       >> 0xdU)) & 
                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                    >> 0xeU))) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_rg_levels_18_EQ_0_43_AND_NOT_ptwalk_ff___05FETC___05F_d330)) 
                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                   >> 0xbU)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d362 
                = (1U & VL_TESTPLUSARGS_I("l2"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_ptwalk_ff_memory_response_first___05F61_BIT_12_ETC___05F_d365 
        = (((((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                  >> 0xcU)) | ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                   >> 0xdU)) & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                                >> 0xeU))) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_rg_levels_18_EQ_0_43_AND_NOT_ptwalk_ff___05FETC___05F_d330)) 
            | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
               >> 0xbU)) & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d360) 
                            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d361) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d362))));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
             & ((((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                      >> 0xcU)) | ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                       >> 0xdU)) & 
                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                    >> 0xeU))) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_rg_levels_18_EQ_0_43_AND_NOT_ptwalk_ff___05FETC___05F_d330)) 
                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                   >> 0xbU)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh4057 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_ptwalk_ff_memory_response_first___05F61_BIT_12_ETC___05F_d365)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh4057);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_ptwalk_ff_memory_response_first___05F61_BIT_12_ETC___05F_d365)))) {
            VL_WRITEF("PTW : Generated Error. Cause:%3#",
                      7,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT___theResult___05F___05F_1___05Fh3971);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_ptwalk_ff_memory_response_first___05F61_BIT_12_ETC___05F_d365)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response_first___05F61_BIT_12_10___05FETC___05F_d409)) 
               & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                     >> 0xbU))) & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                      >> 0xdU))) & 
             (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                 >> 0xfU)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d414 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response_first___05F61_BIT_12_10___05FETC___05F_d409)) 
               & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                     >> 0xbU))) & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                      >> 0xdU))) & 
             (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                 >> 0xfU)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d415 
                = (1U & VL_TESTPLUSARGS_I("mptwalk"));
        }
    }
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response_first___05F61_BIT_12_10___05FETC___05F_d409)) 
               & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                     >> 0xbU))) & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                      >> 0xdU))) & 
             (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                 >> 0xfU)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d416 
                = (1U & VL_TESTPLUSARGS_I("l2"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_ptwalk_ff_memory_response_first___05F61_BIT_13_ETC___05F_d419 
        = (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                >> 0xdU)) & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                >> 0xfU))) & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d414) 
                                              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d415) 
                                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d416))));
    if (vlTOPp->RST_N) {
        if ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response_first___05F61_BIT_12_10___05FETC___05F_d409)) 
               & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                     >> 0xbU))) & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                      >> 0xdU))) & 
             (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                 >> 0xfU)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh4599 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response_first___05F61_BIT_12_10___05FETC___05F_d409)) 
                          & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                >> 0xbU))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_ptwalk_ff_memory_response_first___05F61_BIT_13_ETC___05F_d419)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh4599);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response_first___05F61_BIT_12_10___05FETC___05F_d409)) 
                          & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                >> 0xbU))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_ptwalk_ff_memory_response_first___05F61_BIT_13_ETC___05F_d419)))) {
            VL_WRITEF("PTW : Pointer to NextLevel:%x Levels:%1#",
                      56,(0xfffffffffff000ULL & (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[2U])) 
                                                  << 0x36U) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U])) 
                                                     << 0x16U) 
                                                    | (0x3ffffffffff000ULL 
                                                       & ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U])) 
                                                          >> 0xaU))))),
                      2,(IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_rg_levels));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response_first___05F61_BIT_12_10___05FETC___05F_d409)) 
                          & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                >> 0xbU))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_ptwalk_ff_memory_response_first___05F61_BIT_13_ETC___05F_d419)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                    >> 0xcU)) & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                  >> 0xdU) | (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                                 >> 0xeU)))) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_ptwalk_rg_levels_18_EQ_0_43_74_OR_ptwalk_f_ETC___05F_d441)) 
              & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                    >> 0xbU))) & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                   >> 0xdU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                               >> 0xfU)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d445 
                = (1U & VL_TESTPLUSARGS_I("fullverbose"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                    >> 0xcU)) & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                  >> 0xdU) | (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                                 >> 0xeU)))) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_ptwalk_rg_levels_18_EQ_0_43_74_OR_ptwalk_f_ETC___05F_d441)) 
              & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                    >> 0xbU))) & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                   >> 0xdU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                               >> 0xfU)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d446 
                = (1U & VL_TESTPLUSARGS_I("mptwalk"));
        }
    }
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                    >> 0xcU)) & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                  >> 0xdU) | (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                                 >> 0xeU)))) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_ptwalk_rg_levels_18_EQ_0_43_74_OR_ptwalk_f_ETC___05F_d441)) 
              & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                    >> 0xbU))) & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                   >> 0xdU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                               >> 0xfU)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d447 
                = (1U & VL_TESTPLUSARGS_I("l2"));
        }
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response_first___05F61_BIT_13_14___05FETC___05F_d450 
        = (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
             >> 0xdU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                         >> 0xfU)) & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d445) 
                                      | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d446) 
                                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__TASK_testplusargs___05F_d447))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response_first___05F61_BIT_12_10___05FETC___05F_d451 
        = (((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
               >> 0xcU) & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                            >> 0xdU) | (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                           >> 0xeU)))) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_ptwalk_rg_levels_18_EQ_0_43_74_OR_ptwalk_f_ETC___05F_d441)) 
            & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                  >> 0xbU))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response_first___05F61_BIT_13_14___05FETC___05F_d450));
    if (vlTOPp->RST_N) {
        if (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                    >> 0xcU)) & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                  >> 0xdU) | (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                                 >> 0xeU)))) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__NOT_ptwalk_rg_levels_18_EQ_0_43_74_OR_ptwalk_f_ETC___05F_d441)) 
              & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                    >> 0xbU))) & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                   >> 0xdU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U] 
                                               >> 0xfU)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh4721 
                = VL_TIME_UNITED_Q(1);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response_first___05F61_BIT_12_10___05FETC___05F_d451)))) {
            VL_WRITEF("[%10#] ",64,vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__v___05Fh4721);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response_first___05F61_BIT_12_10___05FETC___05F_d451)))) {
            VL_WRITEF("PTW : Found Leaf PTE:%x levels: %1#",
                      64,(((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[2U])) 
                           << 0x34U) | (((QData)((IData)(
                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[1U])) 
                                         << 0x14U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__data0_reg[0U])) 
                                           >> 0xcU))),
                      2,(IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_rg_levels));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_ptwalk_check_pte) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response_first___05F61_BIT_12_10___05FETC___05F_d451)))) {
            VL_WRITEF("\n");
            Verilated::runFlushCallbacks();
        }
    }
}

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__21(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__21\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__NOT_v_reg_btb_tag_31_0_BITS_62_TO_1_1_EQ_mav_p_ETC___05F_d7063 
        = (((0U != vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT___theResult___05F___05F_6___05Fh8146) 
            & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__v_reg_btb_tag_0_86_BITS_62_TO_1_87_EQ_mav_pred_ETC___05F_d7057) 
               | (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response_r[2U]))) 
           & (2U == (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__v_reg_btb_tag_0_86_BITS_62_TO_1_87_EQ_mav_pred_ETC___05F_d6456) 
                      << 1U) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__v_reg_btb_tag_0_86_BITS_62_TO_1_87_EQ_mav_pred_ETC___05F_d6551))));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize_EN) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize 
                = (1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_rg_initialize_write_1___05FSEL_1)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize = 0U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_rg_initialize_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize) 
           & (0xffU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_bht_index)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_mkConnectionVtoAf_12 
        = (1U & (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize)) 
                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__wr_mispredict_ghr) 
                     >> 9U)) & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__wr_mispredict_ghr) 
                                >> 9U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_mkConnectionVtoAf_11 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize)) 
                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__wr_training_data[4U] 
                    >> 0xeU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_gen_next_pc 
        = ((((((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv[2U] 
                   >> 4U)) & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize))) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__full_reg)) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__full_reg)) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_initialize))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__rg_reset_done));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_rg_bht_arr_0_upd_1___05FSEL_1 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_mkConnectionVtoAf_11) 
             & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__wr_training_data[2U] 
                   >> 6U))) & (0U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__wr_training_data[1U] 
                                             << 0x1fU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__wr_training_data[0U] 
                                               >> 1U))))) 
           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__wr_training_data[0U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_rg_bht_arr_1_upd_1___05FSEL_1 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_mkConnectionVtoAf_11) 
             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__wr_training_data[2U] 
                >> 6U)) & (0U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__wr_training_data[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__wr_training_data[0U] 
                                           >> 1U))))) 
           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__wr_training_data[0U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_allocate_D_IN 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_mkConnectionVtoAf_11) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__NOT_v_reg_btb_tag_0_86_BITS_62_TO_1_87_EQ_ma_t_ETC___05F_d7550))
            ? (0x1fU & ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_allocate)))
            : 0U);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s0s1_notEmpty_connect_ena_data 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__full_reg) 
           & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_gen_next_pc) 
               & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_fence))) 
              & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_EN_mav_prediction_response 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_gen_next_pc) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence)));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_gen_next_pc) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U] 
            = ((0xfffffff0U & ((IData)((0xfffffffffffffffcULL 
                                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_pc)) 
                               << 4U)) | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_eEpoch) 
                                            << 3U) 
                                           | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_wEpoch) 
                                              << 2U)) 
                                          | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_fence) 
                                              << 1U) 
                                             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[1U] 
            = ((0xfU & ((IData)((0xfffffffffffffffcULL 
                                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_pc)) 
                        >> 0x1cU)) | (0xfffffff0U & 
                                      ((IData)(((0xfffffffffffffffcULL 
                                                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_pc) 
                                                >> 0x20U)) 
                                       << 4U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[2U] 
            = (0x10U | (0xfU & ((IData)(((0xfffffffffffffffcULL 
                                          & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_pc) 
                                         >> 0x20U)) 
                                >> 0x1cU)));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[1U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[2U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv[2U];
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_rl_flush_stage0) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_fence_port2___05Fread 
            = (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0_common_ma_flush_fl[2U] 
                     >> 1U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence_port2___05Fread 
            = (1U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0_common_ma_flush_fl[2U]);
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_fence_port2___05Fread 
            = (1U & ((~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_gen_next_pc) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_fence))) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_fence)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence_port2___05Fread 
            = (1U & ((~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_gen_next_pc) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence))) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence)));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_ras_stack_top_index_port1___05Fwrite_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_EN_mav_prediction_response) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__NOT_v_reg_btb_tag_31_0_BITS_62_TO_1_1_EQ_mav_p_ETC___05F_d7063));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize_EN 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize) 
            & (0xffU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_bht_index))) 
           | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_EN_mav_prediction_response) 
              & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response_r[2U] 
                 >> 1U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_ghr_port2___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_mkConnectionVtoAf_12) 
            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize))
            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_mkConnectionVtoAf_12)
                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT___theResult___05F___05F_8___05Fh392434)
                : 0U) : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_EN_mav_prediction_response) 
                          & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response_r[2U] 
                                >> 1U))) ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__lv_ghr___05F_2___05Fh379692)
                          : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_ghr)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_put_core_req_put[0U] 
        = ((0xfffffff8U & ((IData)((((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[2U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[1U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U])) 
                                                     >> 4U)))) 
                           << 3U)) | ((4U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U] 
                                             << 1U)) 
                                      | (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[1U] 
                                                << 0x1eU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U] 
                                                  >> 2U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_put_core_req_put[1U] 
        = ((7U & ((IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[2U])) 
                            << 0x3cU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[1U])) 
                                          << 0x1cU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U])) 
                                            >> 4U)))) 
                  >> 0x1dU)) | (0xfffffff8U & ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[2U])) 
                                                          << 0x3cU) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[1U])) 
                                                             << 0x1cU) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U])) 
                                                               >> 4U))) 
                                                        >> 0x20U)) 
                                               << 3U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_put_core_req_put[2U] 
        = (7U & ((IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[2U])) 
                            << 0x3cU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[1U])) 
                                          << 0x1cU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U])) 
                                            >> 4U))) 
                          >> 0x20U)) >> 0x1dU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U] 
        = ((0xfffffffeU & ((IData)((((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[2U])) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[1U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U])) 
                                                     >> 4U)))) 
                           << 1U)) | (1U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U] 
        = ((1U & ((IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[2U])) 
                            << 0x3cU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[1U])) 
                                          << 0x1cU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U])) 
                                            >> 4U)))) 
                  >> 0x1fU)) | (0xfffffffeU & ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[2U])) 
                                                          << 0x3cU) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[1U])) 
                                                             << 0x1cU) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U])) 
                                                               >> 4U))) 
                                                        >> 0x20U)) 
                                               << 1U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[2U] 
        = (1U & ((IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[2U])) 
                            << 0x3cU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[1U])) 
                                          << 0x1cU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U])) 
                                            >> 4U))) 
                          >> 0x20U)) >> 0x1fU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_mkConnectionGetPut 
        = ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[2U] 
            >> 4U) & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_RDY_put_core_req_put) 
                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_RDY_put_core_request_put)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__set_index___05Fh52204 
        = ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_put_core_req_put[0U])
            ? 0U : (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_put_core_req_put[1U] 
                              << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_put_core_req_put[0U] 
                                           >> 9U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_3_5_BITS_61_TO_44_7_8_AND_ETC___05F_d91 
        = (((0x7fc0000U | (0x3ffffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[2U] 
                                        << 0x14U) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[1U] 
                                        >> 0xcU)))) 
            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U] 
                << 0x13U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U] 
                             >> 0xdU))) == (0x7ffffffU 
                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[2U] 
                                                  >> 6U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_2_7_BITS_61_TO_44_0_1_AND_ETC___05F_d74 
        = (((0x7fc0000U | (0x3ffffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[2U] 
                                        << 0x14U) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[1U] 
                                        >> 0xcU)))) 
            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U] 
                << 0x13U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U] 
                             >> 0xdU))) == (0x7ffffffU 
                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[2U] 
                                                  >> 6U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_1_9_BITS_61_TO_44_2_3_AND_ETC___05F_d56 
        = (((0x7fc0000U | (0x3ffffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[2U] 
                                        << 0x14U) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[1U] 
                                        >> 0xcU)))) 
            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U] 
                << 0x13U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U] 
                             >> 0xdU))) == (0x7ffffffU 
                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[2U] 
                                                  >> 6U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38 
        = (((0x7fc0000U | (0x3ffffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[2U] 
                                        << 0x14U) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[1U] 
                                        >> 0xcU)))) 
            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U] 
                << 0x13U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U] 
                             >> 0xdU))) == (0x7ffffffU 
                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                << 0x1aU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[2U] 
                                                  >> 6U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_mkConnectionGetPut) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U] 
                 >> 1U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_EN_put_core_req_put 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_mkConnectionGetPut) 
           & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__ff_to_cache_rv_port1___05Fread[0U]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66 
        = (1U & ((((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                       >> 1U)) | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                  | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                     & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                           >> 6U)))) & (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                             >> 1U)) 
                                         | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_1_9_BITS_61_TO_44_2_3_AND_ETC___05F_d56))) 
                                        | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1_9_BITS_69_TO_62_9_EQ_IF_wr_satp_wh_ETC___05F_d60)) 
                                           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                                 >> 6U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__rg_sfence_EN 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
            & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__rg_sfence));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_read_write 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_EN_put_core_req_put)) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__rg_performing_replay))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_EN_put_core_req_put)) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__rg_performing_replay))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__NOT_ff_core_request_notEmpty___05F49_50_AND_NOT_wr_ETC___05F_d860 
        = (1U & (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_core_request__DOT__empty_reg)) 
                  & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_EN_put_core_req_put))) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_release_info___05F38_BITS_12_TO_7___05FETC___05F_d858))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66) 
           & (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                   >> 1U)) | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_2_7_BITS_61_TO_44_0_1_AND_ETC___05F_d74))) 
              | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2_7_BITS_69_TO_62_7_EQ_IF_wr_satp_wh_ETC___05F_d78)) 
                 & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                       >> 6U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__WILL_FIRE_RL_rl_release_from_fillbuffer 
        = ((((((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__replacement_rg_init)) 
               & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_fbfull) 
                   | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__rg_fence_stall)) 
                  | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__NOT_ff_core_request_notEmpty___05F49_50_AND_NOT_wr_ETC___05F_d860))) 
              & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_fbempty))) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_fbhead_valid)) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__rg_performing_replay))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_EN_put_core_req_put)));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d84) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d144 
            = (1U & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                        >> 4U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d405 
            = ((((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                     >> 1U)) | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_3_5_BITS_61_TO_44_7_8_AND_ETC___05F_d91))) 
                | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3_5_BITS_69_TO_62_3_EQ_IF_wr_satp_wh_ETC___05F_d94)) 
                   & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                         >> 6U)))) & 1U);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__mask___05Fh4249 
            = (0x3ffffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[2U] 
                            << 0x14U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[1U] 
                                         >> 0xcU)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d155 
            = (1U & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                        >> 7U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d166 
            = (1U & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                        >> 5U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d171 
            = (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                     >> 5U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__x___05Fh4532 
            = (0xfffffffffffULL & (((QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[0U]))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106 
            = (1U & (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                       >> 1U) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_3_5_BITS_61_TO_44_7_8_AND_ETC___05F_d91)) 
                     & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3_5_BITS_69_TO_62_3_EQ_IF_wr_satp_wh_ETC___05F_d94) 
                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_3[3U] 
                           >> 6U))));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d144 
            = (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                      ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                            >> 4U)) : ((1U & (((~ (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                   >> 1U)) 
                                               | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                              | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                 & (~ 
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                     >> 6U)))))
                                        ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                              >> 4U))
                                        : (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                              >> 4U)))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d405 = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__mask___05Fh4249 
            = (0x3ffffU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                            ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[2U] 
                                << 0x14U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[1U] 
                                             >> 0xcU))
                            : ((1U & (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                           >> 1U)) 
                                       | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                      | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                         & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                               >> 6U)))))
                                ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[2U] 
                                    << 0x14U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[1U] 
                                                 >> 0xcU))
                                : ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[2U] 
                                    << 0x14U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[1U] 
                                                 >> 0xcU)))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d155 
            = (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                      ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                            >> 7U)) : ((1U & (((~ (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                   >> 1U)) 
                                               | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                              | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                 & (~ 
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                     >> 6U)))))
                                        ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                              >> 7U))
                                        : (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                              >> 7U)))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d166 
            = (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                      ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                            >> 5U)) : ((1U & (((~ (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                   >> 1U)) 
                                               | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                              | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                 & (~ 
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                     >> 6U)))))
                                        ? (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                              >> 5U))
                                        : (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                              >> 5U)))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d171 
            = (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                      ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                         >> 5U) : ((1U & (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                               >> 1U)) 
                                           | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                          | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                             & (~ (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                   >> 6U)))))
                                    ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                       >> 5U) : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                 >> 5U))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__x___05Fh4532 
            = (0xfffffffffffULL & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                                    ? (((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[0U])))
                                    : ((1U & (((~ (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                   >> 1U)) 
                                               | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                              | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                 & (~ 
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                     >> 6U)))))
                                        ? (((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[0U])))
                                        : (((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[0U]))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106 
            = (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d66)
                      ? (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                           >> 1U) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_2_7_BITS_61_TO_44_0_1_AND_ETC___05F_d74)) 
                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2_7_BITS_69_TO_62_7_EQ_IF_wr_satp_wh_ETC___05F_d78) 
                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_2[3U] 
                               >> 6U))) : ((1U & ((
                                                   (~ 
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                     >> 1U)) 
                                                   | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_0_0_BITS_61_TO_44_3_4_AND_ETC___05F_d38))) 
                                                  | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0_0_BITS_69_TO_62_1_EQ_IF_wr_satp_wh_ETC___05F_d43)) 
                                                     & (~ 
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                                         >> 6U)))))
                                            ? (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT___511_CONCAT_v_vpn_tag_1_9_BITS_61_TO_44_2_3_AND_ETC___05F_d56)) 
                                               & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1_9_BITS_69_TO_62_9_EQ_IF_wr_satp_wh_ETC___05F_d60) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_1[3U] 
                                                     >> 6U)))
                                            : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__v_vpn_tag_0[3U] 
                                               >> 1U))));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__MUX_v_fb_addr_valid_0_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__WILL_FIRE_RL_rl_release_from_fillbuffer) 
           & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__rg_fbhead)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__MUX_v_fb_addr_valid_1_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__WILL_FIRE_RL_rl_release_from_fillbuffer) 
           & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__rg_fbhead)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__MUX_v_fb_addr_valid_2_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__WILL_FIRE_RL_rl_release_from_fillbuffer) 
           & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__rg_fbhead)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__MUX_v_fb_addr_valid_3_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__WILL_FIRE_RL_rl_release_from_fillbuffer) 
           & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__rg_fbhead)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__rg_performing_replay_EN 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__WILL_FIRE_RL_rl_release_from_fillbuffer) 
             & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_release_info[0U])) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_release_info___05F38_BITS_12_TO_7___05FETC___05F_d858)) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__rg_performing_replay));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_EN_ma_request 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_EN_put_core_req_put) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__WILL_FIRE_RL_rl_release_from_fillbuffer) 
               & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_release_info[0U]))) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__rg_performing_replay));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_EN_put_core_req_put) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__WILL_FIRE_RL_rl_release_from_fillbuffer) 
               & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_release_info[0U]))) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__rg_performing_replay));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__MUX_m_data_ma_request_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__WILL_FIRE_RL_rl_release_from_fillbuffer) 
           & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_release_info[0U]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d407 
        = ((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
             & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                       >> 0x3cU))))) 
            & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CONCAT_ETC___05F_d405));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d181 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d155) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d166) 
                & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv)))) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d171) 
               & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv)))) 
           | ((0x1ffffffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[2U] 
                              << 0x18U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U] 
                                           >> 8U))) 
              != (0x1ffffffU & (- (IData)((1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U] 
                                                 >> 7U)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__lower_pa___05Fh4252 
        = (0x3ffffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__mask___05Fh4249 
                        & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__x___05Fh4532)) 
                       | ((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__mask___05Fh4249) 
                          & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U] 
                              << 0x13U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U] 
                                           >> 0xdU)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d198 
        = ((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
             & (0U != (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                       >> 0x3cU))))) 
            & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_IF_wr_sat_ETC___05F_d108 
        = ((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U]) 
           & (((0U == (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                       >> 0x3cU)))) 
               | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d106)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__replacement_random_r_D_IN 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__replacement_rg_init)
            ? 1U : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__MUX_m_data_ma_request_1___05FSEL_2)
                     ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__replacement_random_r))
                         ? (8U | ((6U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__replacement_random_r) 
                                         >> 1U)) | 
                                  (1U & (~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__replacement_random_r) 
                                            >> 1U)))))
                         : (7U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__replacement_random_r) 
                                  >> 1U))) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__CAN_FIRE_RL_rl_fence_operation)
                                               ? 1U
                                               : 0U)));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache_EN_put_core_req_put) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_index 
            = (0x3fU & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__set_index___05Fh52204));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_index 
            = (0x3fU & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__set_index___05Fh52204));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_way = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way = 0U;
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_index 
            = (0x3fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__MUX_m_data_ma_request_1___05FSEL_2)
                         ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_release_info[1U] 
                             << 0x19U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_release_info[0U] 
                                          >> 7U)) : 
                        ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__rg_performing_replay)
                          ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__rg_recent_req)
                          : 0U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_index 
            = (0x3fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__MUX_m_data_ma_request_1___05FSEL_2)
                         ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_release_info[1U] 
                             << 0x19U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_release_info[0U] 
                                          >> 7U)) : 
                        ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__rg_performing_replay)
                          ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__rg_recent_req)
                          : 0U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_way 
            = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__MUX_m_data_ma_request_1___05FSEL_2)
                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__v___05Fh47367)
                : 0U);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way 
            = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__MUX_m_data_ma_request_1___05FSEL_2)
                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__v___05Fh47367)
                : 0U);
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__MUX_rg_tlb_miss_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_NOT_IF_wr_ETC___05F_d407));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__ff_core_respone_ENQ 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_IF_wr_sat_ETC___05F_d108)) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_ptwalk_resp_to_itlb));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__ff_core_respone_D_IN 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_EN_put_core_request_put) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__NOT_put_core_request_put_BIT_0_1_AND_IF_wr_sat_ETC___05F_d108))
            ? (((0U == (0xfU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                        >> 0x3cU)))) 
                | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv)))
                ? (((QData)((IData)(((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U] 
                                      << 0x1fU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U] 
                                                   >> 1U)))) 
                    << 8U) | (QData)((IData)((1U | 
                                              ((0U 
                                                != 
                                                ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U] 
                                                    >> 1U))) 
                                               << 7U)))))
                : (((QData)((IData)(((0xc0000000U & 
                                      ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__x___05Fh4532 
                                                >> 0x12U)) 
                                       << 0x1eU)) | 
                                     ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__lower_pa___05Fh4252 
                                       << 0xcU) | (0xfffU 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[1U] 
                                                       << 0x1fU) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb_put_core_request_put[0U] 
                                                         >> 1U))))))) 
                    << 8U) | (QData)((IData)((0xcU 
                                              | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d144) 
                                                  | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__IF_NOT_v_vpn_tag_0_0_BIT_97_1_2_OR_NOT_511_CON_ETC___05F_d181)) 
                                                 << 7U))))))
            : (((QData)((IData)(((0xc0000000U & ((IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                                          >> 0x26U)) 
                                                 << 0x1eU)) 
                                 | ((0x3ffff000U & 
                                     (((((IData)(0x3ffffU) 
                                         << (0x1fU 
                                             & ((IData)(9U) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                                              >> 8U)))))) 
                                        & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                                   >> 0x14U))) 
                                       | ((~ ((IData)(0x3ffffU) 
                                              << (0x1fU 
                                                  & ((IData)(9U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(
                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg 
                                                                 >> 8U))))))) 
                                          & (IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__rg_miss_queue 
                                                     >> 0xcU)))) 
                                      << 0xcU)) | (0xfffU 
                                                   & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__itlb__DOT__rg_miss_queue)))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_response__DOT__data0_reg))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag__DOT__v_tags_0_ram_single_0_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag__DOT__v_tags_1_ram_single_0_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag__DOT__v_tags_2_ram_single_0_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag__DOT__v_tags_3_ram_single_0_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag__DOT__v_tags_0_ram_single_0_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_EN_ma_request) 
           & ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_way)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag__DOT__v_tags_1_ram_single_0_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_EN_ma_request) 
           & ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_way)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag__DOT__v_tags_2_ram_single_0_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_EN_ma_request) 
           & ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_way)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag__DOT__v_tags_3_ram_single_0_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_EN_ma_request) 
           & ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_way)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_tag_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_0_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_1_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_10_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_11_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_12_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_13_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_14_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_15_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_2_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_3_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_4_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_5_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_6_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_7_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_8_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_9_wea 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_0_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_1_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_10_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_11_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_12_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_13_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_14_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_15_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_2_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_3_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_4_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_5_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_6_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_7_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_8_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_9_wea 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_0_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_1_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_10_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_11_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_12_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_13_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_14_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_15_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_2_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_3_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_4_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_5_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_6_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_7_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_8_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_9_wea 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_0_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_1_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_10_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_11_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_12_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_13_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_14_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_15_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_2_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_3_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_4_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_5_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_6_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_7_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_8_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_9_wea 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_0_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_1_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_10_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_11_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_12_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_13_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_14_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_15_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_2_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_3_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_4_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_5_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_6_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_7_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_8_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_0_ram_single_9_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_0_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_1_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_10_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_11_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_12_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_13_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_14_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_15_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_2_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_3_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_4_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_5_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_6_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_7_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_8_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_1_ram_single_9_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_0_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_1_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_10_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_11_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_12_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_13_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_14_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_15_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_2_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_3_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_4_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_5_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_6_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_7_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_8_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_2_ram_single_9_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_0_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_1_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_10_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_11_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_12_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_13_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_14_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_15_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_2_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_3_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_4_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_5_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_6_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_7_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_8_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data__DOT__v_data_3_ram_single_9_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_EN_ma_request) 
           & (((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_way)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write)) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_data_ma_request_read_write))));
}

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__22(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__22\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2704[3];
    WData/*95:0*/ __Vtemp2716[3];
    WData/*95:0*/ __Vtemp2726[3];
    WData/*95:0*/ __Vtemp2729[3];
    WData/*95:0*/ __Vtemp2730[3];
    WData/*95:0*/ __Vtemp2731[3];
    WData/*95:0*/ __Vtemp2734[3];
    WData/*159:0*/ __Vtemp2774[5];
    WData/*95:0*/ __Vtemp2776[3];
    WData/*159:0*/ __Vtemp2797[5];
    WData/*191:0*/ __Vtemp2808[6];
    // Body
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__ras_stack_array_reg_D_OUT_1 
        = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__ras_stack_array_reg__DOT__arr
        [(7U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__ras_stack_top_index) 
                - (IData)(1U)))];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__i___05Fh378998 
        = (7U & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_EN_mav_prediction_response) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__NOT_v_reg_btb_tag_31_0_BITS_62_TO_1_1_EQ_mav_p_ETC___05F_d7085))
                  ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__ras_stack_top_index) 
                     - (IData)(1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__ras_stack_top_index)));
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_EN_ma_allocate_io) 
              & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_tail))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_EN_ma_increment_head) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuff_valid_0 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__MUX_v_iobuff_commit_0_write_1___05FSEL_1;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuff_valid_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_EN_ma_allocate_io) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_tail)) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_EN_ma_increment_head) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuff_valid_1 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__MUX_v_iobuff_commit_1_write_1___05FSEL_1;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuff_valid_1 = 0U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__target___05F___05F2___05Fh379691 
        = ((0U == vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT___theResult___05F___05F_6___05Fh8146)
            ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response_r[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response_r[0U])))
            : ((1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__v_reg_btb_tag_0_86_BITS_62_TO_1_87_EQ_mav_pred_ETC___05F_d7057) 
                      | (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response_r[2U])))
                ? ((3U == (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__v_reg_btb_tag_0_86_BITS_62_TO_1_87_EQ_mav_pred_ETC___05F_d6456) 
                            << 1U) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__v_reg_btb_tag_0_86_BITS_62_TO_1_87_EQ_mav_pred_ETC___05F_d6551)))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__ras_stack_array_reg_D_OUT_1
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__hit_entry_target___05Fh10186)
                : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response_r[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response_r[0U])))));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_perform_atomic) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_readword 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_storebuffer_ma_perform_atomic_1___05FSEL_1)
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_1_word___05Fh99196
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rdata___05Fh40211);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_readword = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_line) 
              & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_tail))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_global_dirty_write_1___05FSEL_2) 
                & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_0 
                = (1U & (~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_global_dirty_write_1___05FSEL_2) 
                            & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head)))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_line) 
              & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_tail))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_global_dirty_write_1___05FSEL_2) 
                & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_1 
                = (1U & (~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_global_dirty_write_1___05FSEL_2) 
                            & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head)))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_line) 
              & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_tail))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_global_dirty_write_1___05FSEL_2) 
                & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_2 
                = (1U & (~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_global_dirty_write_1___05FSEL_2) 
                            & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head)))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_global_dirty_write_1___05FSEL_2) 
              & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))) 
             | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_line) 
                & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_tail))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_3 
                = (1U & (~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_global_dirty_write_1___05FSEL_2) 
                            & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head)))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CAN_FIRE_RL_rl_commit_from_sb_to_line) 
               & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head))) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_store) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail)))) 
             | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_RDY_cache_mv_initiate_store_snd) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget))) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__ma_commit_store_c_BIT_1_86_EQ_SEL_ARR_v_sb_met_ETC___05F_d488))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_0 
                = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_valid_0_write_1___05FSEL_1)) 
                         & (~ (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_RDY_cache_mv_initiate_store_snd) 
                                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget))) 
                               & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__ma_commit_store_c_BIT_1_86_EQ_SEL_ARR_v_sb_met_ETC___05F_d488))))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CAN_FIRE_RL_rl_commit_from_sb_to_line) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head)) 
              | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_store) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail))) 
             | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_RDY_cache_mv_initiate_store_snd) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget)) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__ma_commit_store_c_BIT_1_86_EQ_SEL_ARR_v_sb_met_ETC___05F_d488))))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_1 
                = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_valid_1_write_1___05FSEL_1)) 
                         & (~ (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_RDY_cache_mv_initiate_store_snd) 
                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget)) 
                               & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__ma_commit_store_c_BIT_1_86_EQ_SEL_ARR_v_sb_met_ETC___05F_d488))))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_perform_atomic) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_writeword 
                = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_storebuffer_ma_perform_atomic_1___05FSEL_1)
                    ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[3U])) 
                        << 0x39U) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U])) 
                                      << 0x19U) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U])) 
                                                   >> 7U)))
                    : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                        << 0x3aU) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U])) 
                                      << 0x1aU) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])) 
                                                   >> 6U))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_writeword = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_perform_atomic) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op 
                = (0x1fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_storebuffer_ma_perform_atomic_1___05FSEL_1)
                             ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[4U] 
                                 << 0x19U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[3U] 
                                              >> 7U))
                             : ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                 << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                              >> 1U))));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy_EN) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fence_operation) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fence_operation) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way = 1U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_performing_replay 
        = ((IData)(vlTOPp->RST_N) & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fill_release) 
                                      & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_recent_req) 
                                           == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_set)) 
                                          | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_eviction)) 
                                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__empty_reg))) 
                                     | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_store_release) 
                                         & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d959)) 
                                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction))) 
                                        & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_recent_req) 
                                             == (0x3fU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U] 
                                                       >> 6U)))) 
                                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction)) 
                                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__empty_reg)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[0U] 
        = ((0xfffff000U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__target___05F___05F2___05Fh379691) 
                           << 0xcU)) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__v_reg_btb_tag_0_86_BITS_62_TO_1_87_EQ_mav_pred_ETC___05F_d7057) 
                                         << 0xbU) | 
                                        (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__lv_ghr___05F_2___05Fh379692) 
                                          << 3U) | 
                                         (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__prediction___05F___05F2___05Fh379689) 
                                           << 1U) | 
                                          (0U != vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT___theResult___05F___05F_6___05Fh8146)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[1U] 
        = ((0xfffU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__target___05F___05F2___05Fh379691) 
                      >> 0x14U)) | (0xfffff000U & ((IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__target___05F___05F2___05Fh379691 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[2U] 
        = ((0xfffff000U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__v_reg_btb_tag_0_86_BITS_62_TO_1_87_EQ_mav_pred_ETC___05F_d6861) 
                           << 0xcU)) | (0xfffU & ((IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu__DOT__target___05F___05F2___05Fh379691 
                                                           >> 0x20U)) 
                                                  >> 0x14U)));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_EN_ma_allocate_io) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_tail 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_tail_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_tail = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_EN_ma_increment_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head = 0U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_empty 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuff_valid_0)) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuff_valid_1))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_full 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuff_valid_0) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuff_valid_1));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__nextpc___05Fh2303 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence)
            ? (4ULL + (0xfffffffffffffffcULL & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_pc))
            : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[2U])
                ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[0U])))
                : ((1U & (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[0U] 
                            >> 2U) & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[0U]) 
                          & ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[0U] 
                                 >> 0xbU)) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[2U] 
                                              >> 0xcU))))
                    ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[2U])) 
                        << 0x34U) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[1U])) 
                                      << 0x14U) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[0U])) 
                                                   >> 0xcU)))
                    : (4ULL + (0xfffffffffffffffcULL 
                               & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_pc)))));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_rl_flush_stage0) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect_port2___05Fread[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect_port2___05Fread[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect_port2___05Fread[2U] = 0U;
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect_port2___05Fread[0U] 
            = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_gen_next_pc) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence))) 
                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[2U] 
                   | ((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[0U] 
                         >> 0xbU) & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[2U] 
                                        >> 0xcU))) 
                       & (1U < (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[0U] 
                                       >> 1U))))) & 
                      (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_fence)))))
                ? (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[2U])) 
                            << 0x34U) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[1U])) 
                                          << 0x14U) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[0U])) 
                                            >> 0xcU))))
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect_port2___05Fread[1U] 
            = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_gen_next_pc) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence))) 
                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[2U] 
                   | ((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[0U] 
                         >> 0xbU) & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[2U] 
                                        >> 0xcU))) 
                       & (1U < (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[0U] 
                                       >> 1U))))) & 
                      (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_fence)))))
                ? (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[2U])) 
                             << 0x34U) | (((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[1U])) 
                                           << 0x14U) 
                                          | ((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[0U])) 
                                             >> 0xcU))) 
                           >> 0x20U)) : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[1U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect_port2___05Fread[2U] 
            = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_gen_next_pc) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence))) 
                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[2U] 
                   | ((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[0U] 
                         >> 0xbU) & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[2U] 
                                        >> 0xcU))) 
                       & (1U < (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__bpu_mav_prediction_response[0U] 
                                       >> 1U))))) & 
                      (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_fence)))))
                ? (1U & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[2U]))
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[2U]);
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_global_dirty_write_1___05FSEL_2) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_line) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_tail 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_tail_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_tail = 0U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_0_read_AND_v_lb_valid_1_read_AND_v___05FETC___05F_d13 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_0) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_1)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_2)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_3));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_line_empty 
        = (1U & ((((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_0)) 
                   & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_1))) 
                  & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_2))) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_3))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_line_full 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_0) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_1)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_2)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_3));
    if (vlTOPp->RST_N) {
        if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_RDY_cache_mv_initiate_store_snd) 
              & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__ma_commit_store_c_BIT_1_86_EQ_SEL_ARR_v_sb_met_ETC___05F_d488))) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CAN_FIRE_RL_rl_commit_from_sb_to_line))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_rg_sb_head_write_1___05FVAL_2;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head = 0U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_sb_full 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_0) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_1));
    if ((0x10U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_readword;
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op2___05Fh4996 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_writeword;
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_readword 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_readword)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op2___05Fh4996 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_writeword 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_writeword)));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy_D_IN 
        = (1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way_D_IN 
        = ((1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_global_dirty)) 
                  | ((0x3fU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set)) 
                     & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way) 
                        >> 3U)))) ? 1U : ((0xeU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way) 
                                                   << 1U)) 
                                          | (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way) 
                                                   >> 3U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh24767 
        = (((8U & (((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_3 
                             >> (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set))) 
                    & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3 
                               >> (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set)))) 
                   << 3U)) | ((4U & (((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_2 
                                               >> (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set))) 
                                      & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2 
                                                 >> (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set)))) 
                                     << 2U)) | ((2U 
                                                 & (((IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_1 
                                                              >> (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set))) 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1 
                                                                >> (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set)))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_0 
                                                               >> (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set))) 
                                                      & (IData)(
                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0 
                                                                 >> (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set)))))))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555 
        = ((2U & ((0x7ffffffeU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way) 
                                  >> 1U)) | (0x3ffffffeU 
                                             & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way) 
                                                >> 2U)))) 
           | (1U & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way) 
                     >> 1U) | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way) 
                               >> 3U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_2___05Fh28945 
        = (0x3fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set) 
                    + (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way) 
                             >> 3U))));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_EN_receive_core_req_put) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_recent_req 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05Fh123294;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_recent_req = 0U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_pc_port2___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_initialize) 
            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_rl_flush_stage0))
            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_initialize)
                ? 0x1000ULL : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0_common_ma_flush_fl[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0_common_ma_flush_fl[0U]))))
            : ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_gen_next_pc) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_fence))) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence)))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__nextpc___05Fh2303
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_pc));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory 
        = ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype__DOT__empty_reg) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_perform_fwding)) 
              & ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta__DOT__empty_reg) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_perform_fwding)) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta__DOT__empty_reg)) 
                   & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_mtval__DOT__empty_reg)) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_commitlog__DOT__empty_reg)) 
                 & (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_perform_fwding) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1__DOT__not_ring_full)) 
                        & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1__DOT__not_ring_full)) 
                       & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_perform_fwding)) 
                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_trapout_1__DOT__not_ring_full)) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1__DOT__not_ring_full)) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout__DOT__not_ring_full)))) 
             & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT))) 
            & ((((((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_ff__DOT__full_reg) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__full_reg)) 
                        & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_stall))) 
                       & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_line_full))) 
                      & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_sb_full))) 
                     & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_eviction_required))) 
                    & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_handling))) 
                   & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_performing_replay))) 
                  & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy))) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_full))) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request__DOT__empty_reg))) 
               & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__rg_tlb_miss)) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__ff_lookup_result__DOT__full_reg)))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__rg_eEpoch_read___05F16_CONCAT_rg_wEpoch_7_17_EQ_IF_ETC___05F_d120));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_rg_performing_replay_port0___05Fread___05F3_4_AND___05FETC___05F_d1723 
        = (1U & (((((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_performing_replay)) 
                    & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_handling))) 
                   & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_stall))) 
                  & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_line_full))) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_sb_full))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__IF_rg_atomic_op_6_BIT_4_7_THEN_rg_atomic_readw_ETC___05F_d57 
        = (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995 
           <= vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op2___05Fh4996);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__IF_rg_atomic_op_6_BIT_4_7_THEN_rg_atomic_readw_ETC___05F_d62 
        = ((0x8000000000000000ULL ^ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995) 
           <= (0x8000000000000000ULL ^ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op2___05Fh4996));
    if ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[0U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[1U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[1U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[1U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[2U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[2U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[2U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[3U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[3U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[3U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[4U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[4U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[4U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[5U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[5U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[5U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[6U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[6U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[6U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[7U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[7U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[7U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[8U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[8U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[8U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[9U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[9U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[9U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[0xaU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xaU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xaU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[0xbU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xbU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xbU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[0xcU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xcU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xcU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[0xdU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xdU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xdU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[0xeU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xeU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xeU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[0xfU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xfU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xfU]);
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[0U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[1U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[1U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[1U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[2U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[2U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[2U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[3U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[3U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[3U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[4U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[4U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[4U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[5U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[5U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[5U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[6U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[6U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[6U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[7U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[7U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[7U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[8U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[8U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[8U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[9U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[9U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[9U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[0xaU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xaU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xaU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[0xbU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xbU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xbU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[0xcU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xcU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xcU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[0xdU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xdU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xdU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[0xeU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xeU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xeU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh29001[0xfU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xfU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xfU]);
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_address___05Fh24743 
        = ((((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
              ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                  ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_3_ram_double_0__DOT__out_reg
                  : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_2_ram_double_0__DOT__out_reg)
              : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh25555))
                  ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_1_ram_double_0__DOT__out_reg
                  : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_0_ram_double_0__DOT__out_reg)) 
            << 0xcU) | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set) 
                        << 6U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set_D_IN 
        = ((1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_global_dirty)) 
                  | ((0x3fU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set)) 
                     & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way) 
                        >> 3U)))) ? 0U : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_2___05Fh28945));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_tail_D_IN 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_tail)) 
                 & ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_tail))));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_tail) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_tail) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_tail_0_NOT_v_iobuff_valid_0_1_NOT_v_io_ETC___05Fq11 
                = (1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuff_valid_1)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_tail_0_NOT_v_iobuff_valid_0_1_NOT_v_io_ETC___05Fq11 
            = (1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuff_valid_0)));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head_D_IN 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head)) 
                 & ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head))));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuff_valid_0_1_v_iobuff_val_ETC___05Fq1 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuff_valid_1;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuff_valid_0_1_v_iobuff_val_ETC___05Fq1 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuff_valid_0;
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuff_commit_0_1_v_iobuff_co_ETC___05Fq2 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuff_commit_1;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuff_commit_0_1_v_iobuff_co_ETC___05Fq2 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuff_commit_0;
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_71_TO_70_1_v___05FETC___05Fq3 
                = (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[3U] 
                          << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[2U] 
                                       >> 6U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_71_TO_70_1_v___05FETC___05Fq3 
            = (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[3U] 
                      << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[2U] 
                                   >> 6U)));
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_69_TO_65_1_v___05FETC___05Fq4 
                = (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[3U] 
                             << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[2U] 
                                          >> 1U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_69_TO_65_1_v___05FETC___05Fq4 
            = (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[3U] 
                         << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[2U] 
                                      >> 1U)));
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_64_TO_1_1_v_i_ETC___05Fq5 
                = (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[2U])) 
                    << 0x3fU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[1U])) 
                                  << 0x1fU) | ((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[0U])) 
                                               >> 1U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_64_TO_1_1_v_i_ETC___05Fq5 
            = (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[2U])) 
                << 0x3fU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[1U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[0U])) 
                                           >> 1U)));
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BIT_0_1_v_iobuffer_ETC___05Fq6 
                = (1U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[0U]);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BIT_0_1_v_iobuffer_ETC___05Fq6 
            = (1U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[0U]);
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_75_TO_73_1_v___05FETC___05Fq7 
                = (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[3U] 
                          << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[2U] 
                                       >> 9U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_75_TO_73_1_v___05FETC___05Fq7 
            = (7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[3U] 
                      << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[2U] 
                                   >> 9U)));
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BIT_72_1_v_iobuffe_ETC___05Fq8 
                = (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[2U] 
                         >> 8U));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BIT_72_1_v_iobuffe_ETC___05Fq8 
            = (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[2U] 
                     >> 8U));
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_171_TO_140_1___05FETC___05Fq9 
                = ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[5U] 
                    << 0x14U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[4U] 
                                 >> 0xcU));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_171_TO_140_1___05FETC___05Fq9 
            = ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[5U] 
                << 0x14U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[4U] 
                             >> 0xcU));
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_139_TO_76_1_v_ETC___05Fq10 
                = (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[4U])) 
                    << 0x34U) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[3U])) 
                                  << 0x14U) | ((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_1[2U])) 
                                               >> 0xcU)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_139_TO_76_1_v_ETC___05Fq10 
            = (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[4U])) 
                << 0x34U) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[3U])) 
                              << 0x14U) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__v_iobuffer_0[2U])) 
                                           >> 0xcU)));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head_D_IN 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
            ? 0U : (3U & ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_valid_0_read_v_lb_valid_1_read_v___05FETC___05F_d527 
        = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
            ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_3)
                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_2))
            : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_1)
                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_0)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_tail_D_IN 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_tail))
            ? 0U : (3U & ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_tail))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_NOT_v_lb_valid_0_read_4_NOT_v_lb_valid_ETC___05F_d199 
        = (1U & ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_tail))
                  ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_tail))
                      ? (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_3))
                      : (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_2)))
                  : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_tail))
                      ? (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_1))
                      : (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_0)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_rg_sb_head_write_1___05FVAL_2 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head)) 
                 & ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head))));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_1_TO_0_2_v_sb_ETC___05F_d128 
                = (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[0U]);
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_1_TO_0_2_v_sb_ETC___05F_d128 
            = (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[0U]);
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_65_TO_2_8_v_s_ETC___05F_d140 
                = (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[2U])) 
                    << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[1U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[0U])) 
                                               >> 2U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_65_TO_2_8_v_s_ETC___05F_d140 
            = (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[2U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[0U])) 
                                           >> 2U)));
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_132_TO_69_36___05FETC___05F_d139 
                = (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[4U])) 
                    << 0x3bU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[3U])) 
                                  << 0x1bU) | ((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[2U])) 
                                               >> 5U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_132_TO_69_36___05FETC___05F_d139 
            = (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[4U])) 
                << 0x3bU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[3U])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[2U])) 
                                           >> 5U)));
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                = ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[5U] 
                    << 0x1bU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[4U] 
                                 >> 5U));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
            = ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[5U] 
                << 0x1bU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[4U] 
                             >> 5U));
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_valid_0_read___05F1_v_sb_valid_1_read_ETC___05F_d108 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_1;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_valid_0_read___05F1_v_sb_valid_1_read_ETC___05F_d108 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_0;
    }
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115 
                = (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[3U] 
                          << 0x1eU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[2U] 
                                       >> 2U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115 
            = (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[3U] 
                      << 0x1eU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[2U] 
                                   >> 2U)));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_data_9 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout__DOT__not_ring_full) 
           & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory) 
                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
               & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_rx_meta_w_data_whas___05F2_THEN_rx_meta_w_d_ETC___05F_d838)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_data_6 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1__DOT__not_ring_full) 
           & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_arith) 
                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
               | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory) 
                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_rx_meta_w_data_whas___05F2_THEN_rx_meta_w_d_ETC___05F_d824))) 
              | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control) 
                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ETC___05F_d1044))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_data_7 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_trapout_1__DOT__not_ring_full) 
           & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__wr_op1_avail_wget___05F63_AND_wr_op2_avail_wget___05F4_ETC___05F_d766)) 
               | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control) 
                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ins_ETC___05F_d1082))) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__WILL_FIRE_RL_rl_structural_stalls 
        = ((((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta__DOT__empty_reg) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_mbox))) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control))) 
               & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory))) 
              & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_arith))) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev))) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_system_instr))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_drop_instr)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_data_10 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1__DOT__not_ring_full) 
           & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_system_instr) 
                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
               | ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_mbox) 
                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control)) 
                     | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory)) 
                    | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_arith)) 
                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U])) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_data_11 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1__DOT__not_ring_full) 
           & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_system_instr) 
                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
               | ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_mbox) 
                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control)) 
                     | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory)) 
                    | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_arith)) 
                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U])) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)));
    VL_EXTEND_WQ(72,64, __Vtemp2704, (((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                       << 0x39U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                        << 0x19U) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                        >> 7U))));
    if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory) 
         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__wr_op1_avail_wget___05F63_AND_wr_op2_avail_wget___05F4_ETC___05F_d766))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_trapout_to_stage4_enq_data[0U] 
            = (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__memory_address___05Fh18556);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_trapout_to_stage4_enq_data[1U] 
            = (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__memory_address___05Fh18556 
                       >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_trapout_to_stage4_enq_data[2U] 
            = ((0U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                             >> 7U))) ? 4U : 6U);
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_trapout_to_stage4_enq_data[0U] 
            = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control) 
                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ins_ETC___05F_d1082))
                ? __Vtemp2704[0U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)
                                      ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_mtval_D_OUT)
                                      : 0U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_trapout_to_stage4_enq_data[1U] 
            = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control) 
                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ins_ETC___05F_d1082))
                ? __Vtemp2704[1U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)
                                      ? (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_mtval_D_OUT 
                                                 >> 0x20U))
                                      : 0U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_trapout_to_stage4_enq_data[2U] 
            = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control) 
                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ins_ETC___05F_d1082))
                ? __Vtemp2704[2U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)
                                      ? (0xffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                  >> 0xaU))
                                      : 0U));
    }
    __Vtemp2716[0U] = ((0xfffffe00U & ((IData)((((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                 << 0x39U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                    << 0x19U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                      >> 7U)))) 
                                       << 9U)) | ((0x1f0U 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                                         >> 2U)) 
                                                     | (((((1U 
                                                            == 
                                                            (3U 
                                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                                >> 0xaU))) 
                                                           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__memory_address___05Fh18556)) 
                                                          | ((2U 
                                                              == 
                                                              (3U 
                                                               & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                                  >> 0xaU))) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__memory_address___05Fh18556))))) 
                                                         | ((3U 
                                                             == 
                                                             (3U 
                                                              & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                                 >> 0xaU))) 
                                                            & (0U 
                                                               != 
                                                               (7U 
                                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__memory_address___05Fh18556)))))
                                                         ? 2U
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                              >> 7U)))
                                                          ? 0U
                                                          : 3U)))));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_RDY_muldiv_mv_mbox_inputs) {
        __Vtemp2726[0U] = (4U | ((0xfffffe00U & ((IData)(
                                                         (((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                              << 0x19U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                                >> 7U)))) 
                                                 << 9U)) 
                                 | ((0x1f0U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                               << 4U)) 
                                    | (8U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                             >> 2U)))));
        __Vtemp2726[1U] = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                << 0x39U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                     >> 7U)))) 
                                      >> 0x17U)) | 
                           (0xfffffe00U & ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                      << 0x39U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                         << 0x19U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                           >> 7U))) 
                                                    >> 0x20U)) 
                                           << 9U)));
        __Vtemp2726[2U] = ((0xfffffe00U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                                           << 9U)) 
                           | (0x1ffU & ((IData)(((((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                      << 0x19U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                        >> 7U))) 
                                                 >> 0x20U)) 
                                        >> 0x17U)));
    } else {
        __Vtemp2726[0U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)
                            ? (2U | ((0xfffffe00U & 
                                      ((IData)((((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                 << 0x39U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                    << 0x19U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                      >> 7U)))) 
                                       << 9U)) | ((0x1f0U 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                                      << 4U)) 
                                                  | (8U 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                                        >> 2U)))))
                            : 0U);
        __Vtemp2726[1U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)
                            ? ((0x1ffU & ((IData)((
                                                   ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                       << 0x19U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                         >> 7U)))) 
                                          >> 0x17U)) 
                               | (0xfffffe00U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                                 >> 7U))) 
                                                          >> 0x20U)) 
                                                 << 9U)))
                            : 0U);
        __Vtemp2726[2U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)
                            ? ((0xfffffe00U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                                               << 9U)) 
                               | (0x1ffU & ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                       << 0x39U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                          << 0x19U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                            >> 7U))) 
                                                     >> 0x20U)) 
                                            >> 0x17U)))
                            : 0U);
    }
    if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory) 
          & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
         & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U])) {
        __Vtemp2729[1U] = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                << 0x39U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                     >> 7U)))) 
                                      >> 0x17U)) | 
                           (0xfffffe00U & ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                      << 0x39U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                         << 0x19U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                           >> 7U))) 
                                                    >> 0x20U)) 
                                           << 9U)));
        __Vtemp2729[2U] = ((0xfffffe00U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                                           << 9U)) 
                           | (0x1ffU & ((IData)(((((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                      << 0x19U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                        >> 7U))) 
                                                 >> 0x20U)) 
                                        >> 0x17U)));
    } else {
        __Vtemp2729[1U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_fuid_w_data_wset_1___05FSEL_4)
                            ? ((0x1ffU & ((IData)((
                                                   ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                       << 0x19U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                         >> 7U)))) 
                                          >> 0x17U)) 
                               | (0xfffffe00U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                                 >> 7U))) 
                                                          >> 0x20U)) 
                                                 << 9U)))
                            : __Vtemp2726[1U]);
        __Vtemp2729[2U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_fuid_w_data_wset_1___05FSEL_4)
                            ? ((0xfffffe00U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                                               << 9U)) 
                               | (0x1ffU & ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                       << 0x39U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                          << 0x19U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                            >> 7U))) 
                                                     >> 0x20U)) 
                                            >> 0x17U)))
                            : __Vtemp2726[2U]);
    }
    __Vtemp2730[0U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_baseout_w_data_wset_1___05FSEL_1)
                        ? ((0xfffffe00U & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                        << 0x19U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                          >> 7U)))) 
                                           << 9U)) 
                           | ((0x1f0U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                         << 4U)) | 
                              (8U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                     >> 2U)))) : ((
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory) 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U])
                                                   ? 
                                                  __Vtemp2716[0U]
                                                   : 
                                                  ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_fuid_w_data_wset_1___05FSEL_4)
                                                    ? 
                                                   ((0xfffffe00U 
                                                     & ((IData)(
                                                                (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                                  << 0x39U) 
                                                                 | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                                     << 0x19U) 
                                                                    | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                                       >> 7U)))) 
                                                        << 9U)) 
                                                    | ((0x1f0U 
                                                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                                              >> 2U)) 
                                                          | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ETC___05F_d1044)
                                                              ? 0U
                                                              : 2U))))
                                                    : 
                                                   __Vtemp2726[0U])));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_rx_commitlog_w_ena_wset_1___05FSEL_1) {
        __Vtemp2731[1U] = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                << 0x39U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                     >> 7U)))) 
                                      >> 0x17U)) | 
                           (0xfffffe00U & ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                      << 0x39U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                         << 0x19U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                           >> 7U))) 
                                                    >> 0x20U)) 
                                           << 9U)));
        __Vtemp2731[2U] = ((0xfffffe00U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                                           << 9U)) 
                           | (0x1ffU & ((IData)(((((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                      << 0x19U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                        >> 7U))) 
                                                 >> 0x20U)) 
                                        >> 0x17U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_fuid_to_stage4_enq_data[0U] 
            = (1U | ((0xfffffe00U & ((IData)((((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                               << 0x39U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                  << 0x19U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                    >> 7U)))) 
                                     << 9U)) | ((0x1f0U 
                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                                    << 4U)) 
                                                | (8U 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                                      >> 2U)))));
    } else {
        __Vtemp2731[1U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_baseout_w_data_wset_1___05FSEL_1)
                            ? ((0x1ffU & ((IData)((
                                                   ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                       << 0x19U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                         >> 7U)))) 
                                          >> 0x17U)) 
                               | (0xfffffe00U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                                 >> 7U))) 
                                                          >> 0x20U)) 
                                                 << 9U)))
                            : __Vtemp2729[1U]);
        __Vtemp2731[2U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_baseout_w_data_wset_1___05FSEL_1)
                            ? ((0xfffffe00U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                                               << 9U)) 
                               | (0x1ffU & ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                       << 0x39U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                          << 0x19U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                            >> 7U))) 
                                                     >> 0x20U)) 
                                            >> 0x17U)))
                            : __Vtemp2729[2U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_fuid_to_stage4_enq_data[0U] 
            = __Vtemp2730[0U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_fuid_to_stage4_enq_data[1U] 
        = __Vtemp2731[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_fuid_to_stage4_enq_data[2U] 
        = __Vtemp2731[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_connect_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta__DOT__empty_reg) 
           & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_system_instr) 
                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                | ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_mbox) 
                       | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control)) 
                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory)) 
                     | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_arith)) 
                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U])) 
               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_drop_instr)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_connect_ena_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_mtval__DOT__empty_reg) 
           & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_system_instr) 
                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                | ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_mbox) 
                       | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control)) 
                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory)) 
                     | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_arith)) 
                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U])) 
               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_drop_instr)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_connect_ena_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype__DOT__empty_reg) 
           & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_system_instr) 
                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                | ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_mbox) 
                       | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control)) 
                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory)) 
                     | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_arith)) 
                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U])) 
               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_drop_instr)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_connect_ena_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta__DOT__empty_reg) 
           & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_system_instr) 
                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                | ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_mbox) 
                       | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control)) 
                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory)) 
                     | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_arith)) 
                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U])) 
               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_drop_instr)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_1_connect_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_commitlog__DOT__empty_reg) 
           & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_system_instr) 
                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                | ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_mbox) 
                       | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control)) 
                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory)) 
                     | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_arith)) 
                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U])) 
               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_drop_instr)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_system_instr) 
             & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
            | ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_mbox) 
                   | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control)) 
                  | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory)) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_arith)) 
                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
               & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U])) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev));
    VL_EXTEND_WI(70,1, __Vtemp2734, (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__rg_wEpoch));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_baseout_w_data_wset_1___05FSEL_1) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_baseout_to_stage4_enq_data[0U] 
            = ((0xffffffc0U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__baseoutput_rdvalue___05Fh15373) 
                               << 6U)) | ((0x3eU & 
                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                            << 1U)) 
                                          | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__rg_wEpoch)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_baseout_to_stage4_enq_data[1U] 
            = ((0x3fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__baseoutput_rdvalue___05Fh15373) 
                         >> 0x1aU)) | (0xffffffc0U 
                                       & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__baseoutput_rdvalue___05Fh15373 
                                                   >> 0x20U)) 
                                          << 6U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_baseout_to_stage4_enq_data[2U] 
            = ((0xffffffc0U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                               << 6U)) | (0x3fU & ((IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__baseoutput_rdvalue___05Fh15373 
                                                            >> 0x20U)) 
                                                   >> 0x1aU)));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_baseout_to_stage4_enq_data[0U] 
            = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory) 
                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_rx_meta_w_data_whas___05F2_THEN_rx_meta_w_d_ETC___05F_d824))
                ? __Vtemp2734[0U] : (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control) 
                                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                                       & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ETC___05F_d1044))
                                      ? ((0xffffffc0U 
                                          & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__nlogical_pc___05Fh22984) 
                                             << 6U)) 
                                         | ((0x3eU 
                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                                << 1U)) 
                                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__rg_wEpoch)))
                                      : 0U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_baseout_to_stage4_enq_data[1U] 
            = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory) 
                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_rx_meta_w_data_whas___05F2_THEN_rx_meta_w_d_ETC___05F_d824))
                ? __Vtemp2734[1U] : (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control) 
                                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                                       & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ETC___05F_d1044))
                                      ? ((0x3fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__nlogical_pc___05Fh22984) 
                                                   >> 0x1aU)) 
                                         | (0xffffffc0U 
                                            & ((IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__nlogical_pc___05Fh22984 
                                                        >> 0x20U)) 
                                               << 6U)))
                                      : 0U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_baseout_to_stage4_enq_data[2U] 
            = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory) 
                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_rx_meta_w_data_whas___05F2_THEN_rx_meta_w_d_ETC___05F_d824))
                ? ((0xffffffc0U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                                   << 6U)) | __Vtemp2734[2U])
                : (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control) 
                      & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                     & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ETC___05F_d1044))
                    ? ((0xffffffc0U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                                       << 6U)) | (0x3fU 
                                                  & ((IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__nlogical_pc___05Fh22984 
                                                              >> 0x20U)) 
                                                     >> 0x1aU)))
                    : 0U));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_RDY_receive_core_req_put 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_rg_performing_replay_port0___05Fread___05F3_4_AND___05FETC___05F_d1723) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request__DOT__empty_reg)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__IF_rg_atomic_op_6_BITS_3_TO_0_8_EQ_0b11_9_THEN_ETC___05F_d76 
        = ((8U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
            ? ((4U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
                ? ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
                    ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__IF_rg_atomic_op_6_BIT_4_7_THEN_rg_atomic_readw_ETC___05F_d57)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op2___05Fh4996
                            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995))
                    : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__IF_rg_atomic_op_6_BIT_4_7_THEN_rg_atomic_readw_ETC___05F_d57)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995
                            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op2___05Fh4996)))
                : ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
                    ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__IF_rg_atomic_op_6_BIT_4_7_THEN_rg_atomic_readw_ETC___05F_d62)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op2___05Fh4996
                            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995))
                    : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__IF_rg_atomic_op_6_BIT_4_7_THEN_rg_atomic_readw_ETC___05F_d62)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995
                            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op2___05Fh4996))))
            : ((4U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
                ? ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
                    ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op2___05Fh4996
                        : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995 
                           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op2___05Fh4996))
                    : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995
                        : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995 
                           | vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op2___05Fh4996)))
                : ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
                    ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op2___05Fh4996
                        : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995 
                           ^ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op2___05Fh4996))
                    : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995
                        : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op1___05Fh4995 
                           + vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__op2___05Fh4996)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head_valid 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuff_valid_0_1_v_iobuff_val_ETC___05Fq1) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuff_commit_0_1_v_iobuff_co_ETC___05Fq2));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[0U] 
        = ((0xfffffffeU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_64_TO_1_1_v_i_ETC___05Fq5) 
                           << 1U)) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BIT_0_1_v_iobuffer_ETC___05Fq6));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[1U] 
        = ((1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_64_TO_1_1_v_i_ETC___05Fq5) 
                  >> 0x1fU)) | (0xfffffffeU & ((IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_64_TO_1_1_v_i_ETC___05Fq5 
                                                        >> 0x20U)) 
                                               << 1U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U] 
        = ((0xfffff000U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_139_TO_76_1_v_ETC___05Fq10) 
                           << 0xcU)) | ((0xfffffe00U 
                                         & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_75_TO_73_1_v___05FETC___05Fq7) 
                                            << 9U)) 
                                        | ((0xffffff00U 
                                            & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BIT_72_1_v_iobuffe_ETC___05Fq8) 
                                               << 8U)) 
                                           | ((0xffffffc0U 
                                               & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_71_TO_70_1_v___05FETC___05Fq3) 
                                                  << 6U)) 
                                              | ((0xfffffffeU 
                                                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_69_TO_65_1_v___05FETC___05Fq4) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_64_TO_1_1_v_i_ETC___05Fq5 
                                                                >> 0x20U)) 
                                                       >> 0x1fU)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[3U] 
        = ((0xfffU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_139_TO_76_1_v_ETC___05Fq10) 
                      >> 0x14U)) | (0xfffff000U & ((IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_139_TO_76_1_v_ETC___05Fq10 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[4U] 
        = ((0xfffU & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_139_TO_76_1_v_ETC___05Fq10 
                               >> 0x20U)) >> 0x14U)) 
           | (0xfffff000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_171_TO_140_1___05FETC___05Fq9 
                             << 0xcU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[5U] 
        = (0xfffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_171_TO_140_1___05FETC___05Fq9 
                     >> 0x14U));
    if ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[1U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[1U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[1U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[2U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[2U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[2U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[3U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[3U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[3U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[4U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[4U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[4U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[5U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[5U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[5U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[6U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[6U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[6U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[7U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[7U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[7U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[8U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[8U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[8U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[9U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[9U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[9U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xaU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xaU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xaU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xbU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xbU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xbU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xcU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xcU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xcU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xdU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xdU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xdU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xeU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xeU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xeU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xfU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xfU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xfU]);
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[1U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[1U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[1U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[2U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[2U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[2U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[3U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[3U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[3U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[4U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[4U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[4U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[5U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[5U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[5U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[6U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[6U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[6U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[7U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[7U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[7U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[8U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[8U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[8U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[9U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[9U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[9U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xaU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xaU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xaU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xbU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xbU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xbU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xcU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xcU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xcU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xdU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xdU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xdU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xeU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xeU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xeU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xfU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xfU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xfU]);
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_FULL_N 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta__DOT__empty_reg)) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_connect_ena)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_mtval_FULL_N 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_mtval__DOT__empty_reg)) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_connect_ena_1)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_FULL_N 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype__DOT__empty_reg)) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_connect_ena_2)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta_FULL_N 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta__DOT__empty_reg)) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_connect_ena_3)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_commitlog_FULL_N 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_commitlog__DOT__empty_reg)) 
                 | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_1_connect_ena)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_1_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (1U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_1));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_2_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (2U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_2));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_3_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (3U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_3));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_4_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (4U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_4));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_5_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (5U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_5));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_6_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (6U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_6));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_7_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (7U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_7));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_8_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (8U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_8));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_9_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (9U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_9));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_10_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0xaU == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_10));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_11_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0xbU == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_11));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_12_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0xcU == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_12));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_13_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0xdU == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_13));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_14_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0xeU == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_14));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_15_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0xfU == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_15));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_16_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x10U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_16));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_17_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x11U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_17));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_18_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x12U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_18));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_19_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x13U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_19));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_20_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x14U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_20));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_21_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x15U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_21));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_22_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x16U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_22));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_23_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x17U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_23));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_24_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x18U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_24));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_25_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x19U == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_25));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_26_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x1aU == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_26));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_27_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x1bU == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_27));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_28_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x1cU == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_28));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_29_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x1dU == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_29));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_30_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x1eU == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_30));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_31_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_EN_ma_lock_rd) 
            & (0x1fU == (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])))
            ? (1U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
                     << 1U)) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_31));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_RDY_receive_core_req_put 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_RDY_receive_core_req_put) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_RDY_put_core_request_put));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT___theResult___05F___05Fh4491 
        = ((0x10U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_atomic_op))
            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__IF_rg_atomic_op_6_BITS_3_TO_0_8_EQ_0b11_9_THEN_ETC___05F_d76
            : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__IF_rg_atomic_op_6_BITS_3_TO_0_8_EQ_0b11_9_THEN_ETC___05F_d76)) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__IF_rg_atomic_op_6_BITS_3_TO_0_8_EQ_0b11_9_THEN_ETC___05F_d76))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_initiate_io 
        = ((((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_request__DOT__empty_reg)) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head_valid)) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_empty))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_io_busy)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head___05F154_BIT_72_168_EQ_ma_co_ETC___05F_d1754 
        = ((1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U] 
                  >> 8U)) == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__rg_epoch));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op2___05Fh95021 
        = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
            ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[4U])) 
                << 0x34U) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[3U])) 
                              << 0x14U) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])) 
                                           >> 0xcU)))
            : (((QData)((IData)((- (IData)((1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[3U] 
                                                  >> 0xbU)))))) 
                << 0x20U) | (QData)((IData)(((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[3U] 
                                              << 0x14U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U] 
                                                >> 0xcU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94537 
        = ((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_resp_D_OUT[2U])) 
             << 0x3fU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_resp_D_OUT[1U])) 
                           << 0x1fU) | ((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_resp_D_OUT[0U])) 
                                        >> 1U))) >> 
           (0x38U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[5U] 
                      << 0x17U) | (0x7ffff8U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[4U] 
                                                >> 9U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_io_atomic_done_D_IN 
        = (((2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[3U] 
                           << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U] 
                                        >> 6U)))) & 
            (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_io_atomic_done))) 
           & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_resp_D_OUT[0U]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head___05F154_BIT_0_171_OR_NOT_m___05FETC___05F_d1196 
        = (1U & (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[0U] 
                   | (2U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[3U] 
                                    << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U] 
                                                 >> 6U))))) 
                  | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_io_atomic_done)) 
                 | vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_resp_D_OUT[0U]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_iobuffer_mv_io_head___05F154_BIT_0_171_173_A_ETC___05F_d1235 
        = ((((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[0U]) 
             & (2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[3U] 
                              << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U] 
                                           >> 6U))))) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_io_atomic_done))) 
           & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_resp_D_OUT[0U]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_io_atomic_done_EN 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_io_response) 
             & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[0U])) 
            & (2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[3U] 
                             << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U] 
                                          >> 6U))))) 
           & ((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_resp_D_OUT[0U]) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_io_atomic_done)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324 
        = ((((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135)
              ? ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135)
                  ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135)
                      ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xfU])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xeU])))
                      : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xdU])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xcU]))))
                  : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135)
                      ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xbU])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xaU])))
                      : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[9U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[8U])))))
              : ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135)
                  ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135)
                      ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[7U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[6U])))
                      : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[5U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[4U]))))
                  : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135)
                      ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[3U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[2U])))
                      : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0U])))))) 
            & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_65_TO_2_8_v_s_ETC___05F_d140)) 
           | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_65_TO_2_8_v_s_ETC___05F_d140 
              & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_132_TO_69_36___05FETC___05F_d139));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__CAN_FIRE_RL_decode_and_opfetch 
        = (((((((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__initialize)) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__initialize))) 
               & (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__empty_reg) 
                       & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_2__DOT__empty_reg)) 
                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_FULL_N)) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_mtval_FULL_N)) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_FULL_N)) 
                   & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta_FULL_N)) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_commitlog_FULL_N))) 
              & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_stall))) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__empty_reg)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_FULL_N)) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_wfi)));
    if ((0x10U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F2_BITS_4_TO_ETC___05F_d108 
            = (0xfU & ((8U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                        ? ((4U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                            ? ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_31_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_30_port1___05Fread) 
                                                 >> 1U))
                                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_29_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_28_port1___05Fread) 
                                                 >> 1U)))
                            : ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_27_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_26_port1___05Fread) 
                                                 >> 1U))
                                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_25_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_24_port1___05Fread) 
                                                 >> 1U))))
                        : ((4U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                            ? ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_23_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_22_port1___05Fread) 
                                                 >> 1U))
                                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_21_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_20_port1___05Fread) 
                                                 >> 1U)))
                            : ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_19_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_18_port1___05Fread) 
                                                 >> 1U))
                                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_17_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_16_port1___05Fread) 
                                                 >> 1U))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F2_BIT_0_12___05FETC___05F_d145 
            = (1U & ((8U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                      ? ((4U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                          ? ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                              ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_31_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_30_port1___05Fread))
                              : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_29_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_28_port1___05Fread)))
                          : ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                              ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_27_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_26_port1___05Fread))
                              : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_25_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_24_port1___05Fread))))
                      : ((4U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                          ? ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                              ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_23_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_22_port1___05Fread))
                              : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_21_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_20_port1___05Fread)))
                          : ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                              ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_19_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_18_port1___05Fread))
                              : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_17_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_16_port1___05Fread))))));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F2_BITS_4_TO_ETC___05F_d108 
            = (0xfU & ((8U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                        ? ((4U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                            ? ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_15_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_14_port1___05Fread) 
                                                 >> 1U))
                                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_13_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_12_port1___05Fread) 
                                                 >> 1U)))
                            : ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_11_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_10_port1___05Fread) 
                                                 >> 1U))
                                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_9_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_8_port1___05Fread) 
                                                 >> 1U))))
                        : ((4U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                            ? ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_7_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_6_port1___05Fread) 
                                                 >> 1U))
                                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_5_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_4_port1___05Fread) 
                                                 >> 1U)))
                            : ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_3_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_2_port1___05Fread) 
                                                 >> 1U))
                                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_1_port1___05Fread) 
                                       >> 1U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0) 
                                                 >> 1U))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F2_BIT_0_12___05FETC___05F_d145 
            = (1U & ((8U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                      ? ((4U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                          ? ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                              ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_15_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_14_port1___05Fread))
                              : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_13_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_12_port1___05Fread)))
                          : ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                              ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_11_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_10_port1___05Fread))
                              : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_9_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_8_port1___05Fread))))
                      : ((4U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                          ? ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                              ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_7_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_6_port1___05Fread))
                              : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_5_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_4_port1___05Fread)))
                          : ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                              ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_3_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_2_port1___05Fread))
                              : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_1_port1___05Fread)
                                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0))))));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_core_req_mkConnectionGetPut 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory) 
            & ((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U] 
                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                 & ((1U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                  >> 0xaU))) | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__memory_address___05Fh18556)))) 
                & ((2U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                 >> 0xaU))) | (0U == 
                                               (3U 
                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__memory_address___05Fh18556))))) 
               & ((3U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                >> 0xaU))) | (0U == 
                                              (7U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__memory_address___05Fh18556)))))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_RDY_receive_core_req_put));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_meta_0_write_1___05FVAL_2[0U] 
        = ((0xfffffffcU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh5446) 
                           << 2U)) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh5456));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_meta_0_write_1___05FVAL_2[1U] 
        = ((3U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh5446) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh5446 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_meta_0_write_1___05FVAL_2[2U] 
        = ((0xffffffe0U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT___theResult___05F___05Fh4491) 
                           << 5U)) | ((0xfffffff0U 
                                       & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh5423) 
                                          << 4U)) | 
                                      ((0xfffffffcU 
                                        & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh5437) 
                                           << 2U)) 
                                       | (3U & ((IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh5446 
                                                         >> 0x20U)) 
                                                >> 0x1eU)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_meta_0_write_1___05FVAL_2[3U] 
        = ((0x1fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT___theResult___05F___05Fh4491) 
                     >> 0x1bU)) | (0xffffffe0U & ((IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT___theResult___05F___05Fh4491 
                                                           >> 0x20U)) 
                                                  << 5U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_meta_0_write_1___05FVAL_2[4U] 
        = ((0x1fU & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT___theResult___05F___05Fh4491 
                              >> 0x20U)) >> 0x1bU)) 
           | (0xffffffe0U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh5467 
                             << 5U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_meta_0_write_1___05FVAL_2[5U] 
        = (0x1fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh5467 
                    >> 0x1bU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_EN_ma_commit_io 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_RDY_cache_mv_initiate_ioop) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head___05F154_BIT_72_168_EQ_ma_co_ETC___05F_d1754));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94535 
        = ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94537
                    : (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94537)))
                : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? (QData)((IData)((0xffffU & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94537))))
                    : (QData)((IData)((0xffU & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94537))))))
            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94537
                    : (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94537 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94537))))
                : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? ((0xffffffffffff0000ULL & ((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94537 
                                                                                >> 0xfU)))))) 
                                                 << 0x10U)) 
                       | (QData)((IData)((0xffffU & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94537)))))
                    : ((0xffffffffffffff00ULL & ((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94537 
                                                                                >> 7U)))))) 
                                                 << 8U)) 
                       | (QData)((IData)((0xffU & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94537))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_EN_ma_increment_head 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_RDY_cache_mv_initiate_ioop) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head___05F154_BIT_72_168_EQ_ma_co_ETC___05F_d1754))) 
           | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_io_response) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head___05F154_BIT_0_171_OR_NOT_m___05FETC___05F_d1196)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_io_request_enq_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_io_response) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_iobuffer_mv_io_head___05F154_BIT_0_171_173_A_ETC___05F_d1235));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_request_ENQ 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_io_response) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_iobuffer_mv_io_head___05F154_BIT_0_171_173_A_ETC___05F_d1235)) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_initiate_io));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[0U] 
        = (IData)(((0U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                 >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                    : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0U])))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[1U] 
        = (IData)((((0U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                  >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                     : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0U])))) 
                   >> 0x20U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[2U] 
        = (IData)(((1U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                 >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                    : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[2U])))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[3U] 
        = (IData)((((1U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                  >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                     : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[2U])))) 
                   >> 0x20U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[4U] 
        = (IData)(((2U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                 >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                    : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[4U])))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[5U] 
        = (IData)((((2U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                  >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                     : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[4U])))) 
                   >> 0x20U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[6U] 
        = (IData)(((3U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                 >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                    : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[6U])))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[7U] 
        = (IData)((((3U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                  >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                     : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[6U])))) 
                   >> 0x20U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[8U] 
        = (IData)(((4U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                 >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                    : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[8U])))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[9U] 
        = (IData)((((4U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                  >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                     : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[9U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[8U])))) 
                   >> 0x20U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[0xaU] 
        = (IData)(((5U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                 >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                    : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xbU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xaU])))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[0xbU] 
        = (IData)((((5U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                  >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                     : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xbU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xaU])))) 
                   >> 0x20U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[0xcU] 
        = (IData)(((6U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                 >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                    : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xdU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xcU])))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[0xdU] 
        = (IData)((((6U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                  >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                     : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xdU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xcU])))) 
                   >> 0x20U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[0xeU] 
        = (IData)(((7U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                 >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                    : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xfU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xeU])))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_lb_line_0_write_1___05FVAL_1[0xfU] 
        = (IData)((((7U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_164_TO_133_1___05FETC___05F_d135 
                                  >> 3U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh7324
                     : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xfU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_line_0_read___05F55_v_lb_line_1_read___05FETC___05F_d160[0xeU])))) 
                   >> 0x20U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_12 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_2__DOT__empty_reg) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__CAN_FIRE_RL_decode_and_opfetch));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_s2_pipe1_connect_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__empty_reg) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__CAN_FIRE_RL_decode_and_opfetch));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_wfi_EN 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__CAN_FIRE_RL_decode_and_opfetch) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__eEpoch_read___05F8_CONCAT_wEpoch_read___05F9_0_EQ_IF_r_ETC___05F_d73)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__IF_rg_microtrap_4_OR_chk_interrupt_5_BIT_0_6_A_ETC___05F_d98)) 
           | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_wfi) 
              & (((0ULL != ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh3602 
                             & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh3799) 
                            << 1U)) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[2U] 
                                       >> 1U)) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_common_mv_flush_fst))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__MUX_rg_microtrap_write_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__CAN_FIRE_RL_decode_and_opfetch) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__eEpoch_read___05F8_CONCAT_wEpoch_read___05F9_0_EQ_IF_r_ETC___05F_d73)) 
           & (7U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2_tx_tx_instrtype_to_stage3_enq_data)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F2_BITS_4_TO_ETC___05F_d108) 
            << 1U) | (((0xfU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls) 
                                >> 5U)) != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F2_BITS_4_TO_ETC___05F_d108)) 
                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F2_BIT_0_12___05FETC___05F_d145)));
    __Vtemp2774[2U] = ((0xffff8000U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__memory_address___05Fh18556) 
                                       << 0xfU)) | 
                       ((0x4000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U] 
                                    << 9U)) | ((0x3800U 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                   << 1U)) 
                                               | ((0xfffffc00U 
                                                   & (((4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                            >> 7U))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                              >> 7U)))) 
                                                      << 0xaU)) 
                                                  | ((0x300U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                         << 1U)) 
                                                     | (0xffU 
                                                        & ((IData)(
                                                                   ((((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[0U]))) 
                                                                    >> 0x20U)) 
                                                           >> 0x18U)))))));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_core_req_mkConnectionGetPut) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[0U] 
            = ((0xffffff00U & ((IData)((((QData)((IData)(
                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[0U])))) 
                               << 8U)) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__req_atomic_op___05Fh18774) 
                                           << 3U) | 
                                          ((5U == (7U 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                      >> 7U))) 
                                           << 2U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[1U] 
            = ((0xffU & ((IData)((((QData)((IData)(
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[0U])))) 
                         >> 0x18U)) | (0xffffff00U 
                                       & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[0U]))) 
                                                   >> 0x20U)) 
                                          << 8U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U] 
            = __Vtemp2774[2U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[3U] 
            = ((0x7fffU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__memory_address___05Fh18556) 
                           >> 0x11U)) | (0xffff8000U 
                                         & ((IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__memory_address___05Fh18556 
                                                     >> 0x20U)) 
                                            << 0xfU)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[4U] 
            = (0x7fffU & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__memory_address___05Fh18556 
                                   >> 0x20U)) >> 0x11U));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[0U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_req__DOT__data0_reg[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[1U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_req__DOT__data0_reg[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_req__DOT__data0_reg[2U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[3U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_req__DOT__data0_reg[3U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[4U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_req__DOT__data0_reg[4U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_ptwalk_req_mkConnectionGetPut 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_RDY_receive_core_req_put) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_req__DOT__empty_reg)) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_core_req_mkConnectionGetPut)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020 
        = ((0x20U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94535
            : (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94535 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94535))));
    __Vtemp2776[0U] = ((0xfffff000U & ((IData)(((1U 
                                                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_resp_D_OUT[0U])
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[1U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[0U])) 
                                                       >> 1U)))
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[3U] 
                                                       << 0x1aU) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U] 
                                                         >> 6U))))
                                                  ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_atomic_rd_data
                                                  : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94535))) 
                                       << 0xcU)) | 
                       ((0x800U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_resp_D_OUT[0U] 
                                   << 0xbU)) | ((((0U 
                                                   == 
                                                   (3U 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[3U] 
                                                        << 0x1aU) 
                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U] 
                                                          >> 6U))))
                                                   ? 5U
                                                   : 7U) 
                                                 << 4U) 
                                                | (8U 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U] 
                                                      >> 5U)))));
    __Vtemp2776[1U] = ((0xfffU & ((IData)(((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_resp_D_OUT[0U])
                                            ? (((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])) 
                                                << 0x3fU) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[0U])) 
                                                     >> 1U)))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[3U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U] 
                                                       >> 6U))))
                                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_atomic_rd_data
                                                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94535))) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           (((1U 
                                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_resp_D_OUT[0U])
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])) 
                                                               << 0x3fU) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[1U])) 
                                                                  << 0x1fU) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[0U])) 
                                                                    >> 1U)))
                                                              : 
                                                             ((2U 
                                                               == 
                                                               (3U 
                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[3U] 
                                                                    << 0x1aU) 
                                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U] 
                                                                      >> 6U))))
                                                               ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_atomic_rd_data
                                                               : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94535)) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_ff_ptw_response_rv_port0___05Fwrite_1___05FVAL_2[0U] 
        = __Vtemp2776[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_ff_ptw_response_rv_port0___05Fwrite_1___05FVAL_2[1U] 
        = __Vtemp2776[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_ff_ptw_response_rv_port0___05Fwrite_1___05FVAL_2[2U] 
        = (0x1000U | (0xfffU & ((IData)((((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_io_resp_D_OUT[0U])
                                           ? (((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])) 
                                               << 0x3fU) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[0U])) 
                                                    >> 1U)))
                                           : ((2U == 
                                               (3U 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[3U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U] 
                                                      >> 6U))))
                                               ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_atomic_rd_data
                                               : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh94535)) 
                                         >> 0x20U)) 
                                >> 0x14U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_connect_ena_data 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_FULL_N) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__MUX_rg_microtrap_write_1___05FSEL_2));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_connect_ena_data_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_mtval_FULL_N) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__MUX_rg_microtrap_write_1___05FSEL_2));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_connect_ena_data_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta_FULL_N) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__MUX_rg_microtrap_write_1___05FSEL_2));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_connect_ena_data_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_FULL_N) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__MUX_rg_microtrap_write_1___05FSEL_2));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s2s3_notEmpty_connect_ena_data_4 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_commitlog_FULL_N) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__MUX_rg_microtrap_write_1___05FSEL_2));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__MUX_rg_microtrap_write_1___05FSEL_2) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op2type_port1___05Fread 
            = (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[2U] 
                      << 0x11U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[1U] 
                                   >> 0xfU)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op3_port1___05Fread[0U] 
            = ((0xfffffffeU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__SEXT_fn_decode_5_BITS_39_TO_8_94___05F_d195) 
                               << 1U)) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__wEpoch));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op3_port1___05Fread[1U] 
            = ((1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__SEXT_fn_decode_5_BITS_39_TO_8_94___05F_d195) 
                      >> 0x1fU)) | (0xfffffffeU & ((IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__SEXT_fn_decode_5_BITS_39_TO_8_94___05F_d195 
                                                            >> 0x20U)) 
                                                   << 1U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op3_port1___05Fread[2U] 
            = (0x40U | (1U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__SEXT_fn_decode_5_BITS_39_TO_8_94___05F_d195 
                                       >> 0x20U)) >> 0x1fU)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[0U] 
            = ((0xfffffffeU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__xrf_D_OUT_2) 
                               << 1U)) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__wEpoch));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[1U] 
            = ((1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__xrf_D_OUT_2) 
                      >> 0x1fU)) | (0xfffffffeU & ((IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__xrf_D_OUT_2 
                                                            >> 0x20U)) 
                                                   << 1U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[2U] 
            = (0x40U | ((0x3eU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[2U] 
                                   << 5U) | (0x1eU 
                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[1U] 
                                                >> 0x1bU)))) 
                        | (1U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__xrf_D_OUT_2 
                                          >> 0x20U)) 
                                 >> 0x1fU))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U] 
            = ((0xfffffffeU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__op2___05Fh3749) 
                               << 1U)) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__wEpoch));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[1U] 
            = ((1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__op2___05Fh3749) 
                      >> 0x1fU)) | (0xfffffffeU & ((IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__op2___05Fh3749 
                                                            >> 0x20U)) 
                                                   << 1U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
            = (0x40U | ((0x3eU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[2U] 
                                   << 0xaU) | (0x3feU 
                                               & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[1U] 
                                                  >> 0x16U)))) 
                        | (1U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__op2___05Fh3749 
                                          >> 0x20U)) 
                                 >> 0x1fU))));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op2type_port1___05Fread 
            = (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op2type));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op3_port1___05Fread[0U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op3[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op3_port1___05Fread[1U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op3[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op3_port1___05Fread[2U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op3[2U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[0U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op1[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[1U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op1[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[2U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op1[2U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op2[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[1U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op2[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_op2[2U];
    }
    __Vtemp2797[2U] = ((0xffffe000U & ((IData)((((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[4U])) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[3U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U])) 
                                                      >> 0xfU)))) 
                                       << 0xdU)) | 
                       ((0x1000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U] 
                                    << 2U)) | ((0x800U 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U] 
                                                   >> 3U)) 
                                               | ((0x600U 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U] 
                                                      << 1U)) 
                                                  | ((0x1c0U 
                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[3U] 
                                                          << 0x1bU) 
                                                         | (0x7ffffc0U 
                                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U] 
                                                               >> 5U)))) 
                                                     | ((1U 
                                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U] 
                                                            >> 2U)) 
                                                        | (0x3eU 
                                                           & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[3U] 
                                                               << 0x1eU) 
                                                              | (0x3ffffffeU 
                                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U] 
                                                                    >> 2U))))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_receive_core_req_put[0U] 
        = ((0xfffffffeU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[1U] 
                            << 0x1eU) | (0x3ffffffeU 
                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[0U] 
                                            >> 2U)))) 
           | (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[0U] 
                    >> 1U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_receive_core_req_put[1U] 
        = ((1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[1U] 
                  >> 2U)) | (0xfffffffeU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U] 
                                             << 0x1eU) 
                                            | (0x3ffffffeU 
                                               & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[1U] 
                                                  >> 2U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_receive_core_req_put[2U] 
        = __Vtemp2797[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_receive_core_req_put[3U] 
        = ((0x1fffU & ((IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[4U])) 
                                 << 0x31U) | (((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[3U])) 
                                               << 0x11U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U])) 
                                                 >> 0xfU)))) 
                       >> 0x13U)) | (0xffffe000U & 
                                     ((IData)(((((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[4U])) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[3U])) 
                                                    << 0x11U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U])) 
                                                      >> 0xfU))) 
                                               >> 0x20U)) 
                                      << 0xdU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_receive_core_req_put[4U] 
        = (0x1fffU & ((IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[4U])) 
                                 << 0x31U) | (((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[3U])) 
                                               << 0x11U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U])) 
                                                 >> 0xfU))) 
                               >> 0x20U)) >> 0x13U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
        = ((0xfffff000U & ((IData)((((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[4U])) 
                                     << 0x31U) | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[3U])) 
                                                   << 0x11U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U])) 
                                                     >> 0xfU)))) 
                           << 0xcU)) | ((0xc00U & (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U] 
                                                   << 2U)) 
                                        | ((0x3f8U 
                                            & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[1U] 
                                                << 0x1bU) 
                                               | (0x7fffff8U 
                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[0U] 
                                                     >> 5U)))) 
                                           | ((4U & 
                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[0U] 
                                                << 2U)) 
                                              | ((2U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[0U]) 
                                                 | (1U 
                                                    & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[0U] 
                                                       >> 2U)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[1U] 
        = ((0xfffU & ((IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[4U])) 
                                << 0x31U) | (((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[3U])) 
                                              << 0x11U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U])) 
                                                >> 0xfU)))) 
                      >> 0x14U)) | (0xfffff000U & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[4U])) 
                                                              << 0x31U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[3U])) 
                                                                 << 0x11U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U])) 
                                                                   >> 0xfU))) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[2U] 
        = (0xfffU & ((IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[4U])) 
                                << 0x31U) | (((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[3U])) 
                                              << 0x11U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U])) 
                                                >> 0xfU))) 
                              >> 0x20U)) >> 0x14U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_EN_receive_core_req_put 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_core_req_mkConnectionGetPut) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__WILL_FIRE_RL_ptwalk_req_mkConnectionGetPut));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_m_iobuffer_mv_io_head___05F154_BIT_69_238_THEN___05FETC___05F_d1254 
        = (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020 
           <= vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op2___05Fh95021);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_m_iobuffer_mv_io_head___05F154_BIT_69_238_THEN___05FETC___05F_d1259 
        = ((0x8000000000000000ULL ^ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020) 
           <= (0x8000000000000000ULL ^ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op2___05Fh95021));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05Fh123294 
        = ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_receive_core_req_put[2U])
            ? 0U : (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_receive_core_req_put[3U] 
                              << 0xdU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_receive_core_req_put[2U] 
                                          >> 0x13U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_put_core_request_put_BIT_2_52_54_AND_IF_wr_ETC___05F_d275 
        = (1U & ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                     >> 2U)) & (((0U == (0xfU & (IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                                         >> 0x3cU)))) 
                                 | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__priv___05Fh2553))) 
                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                                   >> 1U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301 
        = (1U & (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[3U] 
                      >> 1U)) | (((0x7fc0000U | (0x3ffffU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[2U] 
                                                     << 0x14U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[1U] 
                                                       >> 0xcU)))) 
                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[1U] 
                                      << 8U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                                                >> 0x18U))) 
                                 != (0x7ffffffU & (
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[3U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[2U] 
                                                      >> 6U))))) 
                 | (((0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[2U] 
                                << 2U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[1U] 
                                          >> 0x1eU))) 
                     != (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                          >> 0x2cU)))) 
                    & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[3U] 
                          >> 6U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318 
        = (1U & (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[3U] 
                      >> 1U)) | (((0x7fc0000U | (0x3ffffU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[2U] 
                                                     << 0x14U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[1U] 
                                                       >> 0xcU)))) 
                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[1U] 
                                      << 8U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                                                >> 0x18U))) 
                                 != (0x7ffffffU & (
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[3U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[2U] 
                                                      >> 6U))))) 
                 | (((0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[2U] 
                                << 2U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[1U] 
                                          >> 0x1eU))) 
                     != (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                          >> 0x2cU)))) 
                    & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[3U] 
                          >> 6U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_2_20_BIT_97_21_22_OR_NOT_511_CON_ETC___05F_d336 
        = (1U & (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[3U] 
                      >> 1U)) | (((0x7fc0000U | (0x3ffffU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[2U] 
                                                     << 0x14U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[1U] 
                                                       >> 0xcU)))) 
                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[1U] 
                                      << 8U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                                                >> 0x18U))) 
                                 != (0x7ffffffU & (
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[3U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[2U] 
                                                      >> 6U))))) 
                 | (((0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[2U] 
                                << 2U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[1U] 
                                          >> 0x1eU))) 
                     != (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                          >> 0x2cU)))) 
                    & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[3U] 
                          >> 6U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_EN_put_core_request_put 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_EN_receive_core_req_put) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[2U] 
                 >> 0xaU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_EN_receive_core_req_put 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_EN_receive_core_req_put) 
           & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[0U] 
               >> 1U) | (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem_receive_core_req_put[0U] 
                            >> 2U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___new_store___05Fh94542 
        = ((0x10U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
            ? ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_m_iobuffer_mv_io_head___05F154_BIT_69_238_THEN___05FETC___05F_d1254)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op2___05Fh95021
                            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020))
                    : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_m_iobuffer_mv_io_head___05F154_BIT_69_238_THEN___05FETC___05F_d1254)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020
                            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op2___05Fh95021)))
                : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_m_iobuffer_mv_io_head___05F154_BIT_69_238_THEN___05FETC___05F_d1259)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op2___05Fh95021
                            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020))
                    : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_m_iobuffer_mv_io_head___05F154_BIT_69_238_THEN___05FETC___05F_d1259)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020
                            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op2___05Fh95021))))
            : ((8U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                ? ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020
                        : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020 
                           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op2___05Fh95021))
                    : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020
                        : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020 
                           | vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op2___05Fh95021)))
                : ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op2___05Fh95021
                        : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020 
                           ^ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op2___05Fh95021))
                    : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020
                        : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op1___05Fh95020 
                           + vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__op2___05Fh95021)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d355 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_2_20_BIT_97_21_22_OR_NOT_511_CON_ETC___05F_d336)) 
           & (((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[3U] 
                   >> 1U)) | (((0x7fc0000U | (0x3ffffU 
                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[2U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[1U] 
                                                    >> 0xcU)))) 
                               & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[1U] 
                                   << 8U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                                             >> 0x18U))) 
                              != (0x7ffffffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[3U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[2U] 
                                                   >> 6U))))) 
              | (((0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[2U] 
                             << 2U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[1U] 
                                       >> 0x1eU))) 
                  != (0xffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                       >> 0x2cU)))) 
                 & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[3U] 
                       >> 6U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__ff_lookup_result_ENQ 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_EN_put_core_request_put) 
           & ((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U]) 
              | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                 >> 1U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__rg_tlb_miss_EN 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_EN_put_core_request_put) 
           & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
               | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__rg_tlb_miss) 
                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                     >> 2U))) | ((((0U != (0xfU & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                                           >> 0x3cU)))) 
                                   & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__priv___05Fh2553))) 
                                  & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                                        >> 1U))) & 
                                 (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                                     >> 2U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__rg_tlb_miss_D_IN 
        = (((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U]) 
            & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__rg_tlb_miss)) 
               | (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                     >> 2U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d355));
    __Vtemp2808[5U] = ((0xfe000U & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_put_core_request_put_BIT_2_52_54_AND_IF_wr_ETC___05F_d275)
                                      ? ((0U == (3U 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[1U] 
                                                     << 0x16U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                                                       >> 0xaU))))
                                          ? 5U : 7U)
                                      : ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[1U] 
                                          << 0x1dU) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                                            >> 3U))) 
                                    << 0xdU)) | ((0xfffff000U 
                                                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d355) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & (((((0U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(
                                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_satp 
                                                                        >> 0x3cU)))) 
                                                           | (3U 
                                                              == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__priv___05Fh2553))) 
                                                          << 0xbU) 
                                                         | (0xfffff800U 
                                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                                                               << 0xaU))) 
                                                        | (0xfffff800U 
                                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                                                              << 9U)))) 
                                                    | (0x7ffU 
                                                       & ((IData)(
                                                                  ((((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[2U])) 
                                                                     << 0x34U) 
                                                                    | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[1U])) 
                                                                        << 0x14U) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U])) 
                                                                          >> 0xcU))) 
                                                                   >> 0x20U)) 
                                                          >> 0x15U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__ff_lookup_result_D_IN[0U] 
        = ((0xfffffffcU & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318)) 
                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_2_20_BIT_97_21_22_OR_NOT_511_CON_ETC___05F_d336))
                             ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[0U]
                             : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318))
                                 ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[0U]
                                 : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301)
                                     ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[0U]
                                     : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[0U]))) 
                           << 2U)) | (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[1U] 
                                             << 0x16U) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                                               >> 0xaU))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__ff_lookup_result_D_IN[1U] 
        = ((3U & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318)) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_2_20_BIT_97_21_22_OR_NOT_511_CON_ETC___05F_d336))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[0U]
                    : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
                        & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[0U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[0U]
                            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[0U]))) 
                  >> 0x1eU)) | (0xfffffffcU & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
                                                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318)) 
                                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_2_20_BIT_97_21_22_OR_NOT_511_CON_ETC___05F_d336))
                                                 ? 
                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[1U]
                                                 : 
                                                (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
                                                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318))
                                                  ? 
                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[1U]
                                                  : 
                                                 ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301)
                                                   ? 
                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[1U]
                                                   : 
                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[1U]))) 
                                               << 2U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__ff_lookup_result_D_IN[2U] 
        = ((3U & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318)) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_2_20_BIT_97_21_22_OR_NOT_511_CON_ETC___05F_d336))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[1U]
                    : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
                        & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[1U]
                        : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[1U]
                            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[1U]))) 
                  >> 0x1eU)) | (0xfffffffcU & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
                                                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318)) 
                                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_2_20_BIT_97_21_22_OR_NOT_511_CON_ETC___05F_d336))
                                                 ? 
                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[2U]
                                                 : 
                                                (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
                                                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318))
                                                  ? 
                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[2U]
                                                  : 
                                                 ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301)
                                                   ? 
                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[2U]
                                                   : 
                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[2U]))) 
                                               << 2U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__ff_lookup_result_D_IN[3U] 
        = ((0xfffff800U & ((IData)((((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[2U])) 
                                     << 0x34U) | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[1U])) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U])) 
                                                     >> 0xcU)))) 
                           << 0xbU)) | ((3U & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
                                                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318)) 
                                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_2_20_BIT_97_21_22_OR_NOT_511_CON_ETC___05F_d336))
                                                 ? 
                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[2U]
                                                 : 
                                                (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
                                                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318))
                                                  ? 
                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[2U]
                                                  : 
                                                 ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301)
                                                   ? 
                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[2U]
                                                   : 
                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[2U]))) 
                                               >> 0x1eU)) 
                                        | (0xfffffffcU 
                                           & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
                                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318)) 
                                                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_2_20_BIT_97_21_22_OR_NOT_511_CON_ETC___05F_d336))
                                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_3[3U]
                                                : (
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301) 
                                                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_1_02_BIT_97_03_04_OR_NOT_511_CON_ETC___05F_d318))
                                                    ? 
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_2[3U]
                                                    : 
                                                   ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d301)
                                                     ? 
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_1[3U]
                                                     : 
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__v_vpn_tag_0[3U]))) 
                                              << 2U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__ff_lookup_result_D_IN[4U] 
        = ((0x7ffU & ((IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[2U])) 
                                << 0x34U) | (((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[1U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U])) 
                                                >> 0xcU)))) 
                      >> 0x15U)) | (0xfffff800U & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[2U])) 
                                                              << 0x34U) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[1U])) 
                                                                 << 0x14U) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U])) 
                                                                   >> 0xcU))) 
                                                            >> 0x20U)) 
                                                   << 0xbU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__ff_lookup_result_D_IN[5U] 
        = ((0x100000U & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_put_core_request_put_BIT_2_52_54_AND_IF_wr_ETC___05F_d275)
                           ? (0U != ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[2U] 
                                      << 0x14U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[1U] 
                                                   >> 0xcU)))
                           : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                              >> 2U)) << 0x14U)) | 
           __Vtemp2808[5U]);
}
