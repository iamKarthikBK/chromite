// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTbSoc.h for the primary calling header

#include "VmkTbSoc.h"
#include "VmkTbSoc__Syms.h"

void VmkTbSoc::_settle__TOP__20(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_settle__TOP__20\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2441[3];
    WData/*95:0*/ __Vtemp2442[3];
    WData/*95:0*/ __Vtemp2443[3];
    WData/*95:0*/ __Vtemp2444[3];
    WData/*159:0*/ __Vtemp2455[5];
    WData/*95:0*/ __Vtemp2458[3];
    WData/*159:0*/ __Vtemp2462[5];
    WData/*95:0*/ __Vtemp2465[3];
    WData/*95:0*/ __Vtemp2479[3];
    WData/*95:0*/ __Vtemp2489[3];
    WData/*95:0*/ __Vtemp2492[3];
    WData/*95:0*/ __Vtemp2493[3];
    WData/*95:0*/ __Vtemp2494[3];
    WData/*159:0*/ __Vtemp2503[5];
    WData/*95:0*/ __Vtemp2507[3];
    WData/*95:0*/ __Vtemp2510[3];
    WData/*95:0*/ __Vtemp2512[3];
    WData/*95:0*/ __Vtemp2513[3];
    WData/*95:0*/ __Vtemp2514[3];
    WData/*95:0*/ __Vtemp2517[3];
    WData/*95:0*/ __Vtemp2518[3];
    WData/*95:0*/ __Vtemp2519[3];
    WData/*191:0*/ __Vtemp2546[6];
    WData/*95:0*/ __Vtemp2548[3];
    WData/*95:0*/ __Vtemp2553[3];
    WData/*95:0*/ __Vtemp2598[3];
    WData/*95:0*/ __Vtemp2602[3];
    WData/*95:0*/ __Vtemp2603[3];
    WData/*95:0*/ __Vtemp2610[3];
    WData/*95:0*/ __Vtemp2633[3];
    WData/*95:0*/ __Vtemp2650[3];
    WData/*95:0*/ __Vtemp2657[3];
    WData/*223:0*/ __Vtemp2658[7];
    WData/*223:0*/ __Vtemp2660[7];
    WData/*319:0*/ __Vtemp2664[10];
    WData/*95:0*/ __Vtemp2668[3];
    WData/*223:0*/ __Vtemp2669[7];
    WData/*95:0*/ __Vtemp2675[3];
    WData/*223:0*/ __Vtemp2676[7];
    WData/*319:0*/ __Vtemp2684[10];
    // Body
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULE_fn_pmp_look_ETC___05F_d19 
        = ((0x1fffffffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req 
                                   >> 5U))) <= (0x1fffffffU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[1U] 
                                                    << 0x1dU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[0U] 
                                                      >> 3U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d17 
        = ((0x1fffffffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req 
                                   >> 5U))) < (0x1fffffffU 
                                               & (((1U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                        >> 3U)))
                                                    ? 0U
                                                    : 
                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[1U] 
                                                     << 0x1dU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[0U] 
                                                       >> 3U))) 
                                                  & ((3U 
                                                      == 
                                                      (3U 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                          >> 3U)))
                                                      ? 
                                                     (~ 
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__mask___05Fh409 
                                                       & (~ 
                                                          ((IData)(1U) 
                                                           + vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__mask___05Fh409))))
                                                      : 0x1fffffffU))));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__y___05Fh19644 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1_read___05F2_BITS_65_TO_2_9_AND_v_sb_me_ETC___05F_d448;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__y___05Fh19644 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0_read___05F0_BITS_65_TO_2_8_AND_v_sb_me_ETC___05F_d412;
    }
    if ((1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail) 
               - (IData)(1U)))) {
        if ((1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail) 
                   - (IData)(1U)))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh19645 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1_read___05F2_BITS_65_TO_2_9_AND_v_sb_me_ETC___05F_d448;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh19645 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0_read___05F0_BITS_65_TO_2_8_AND_v_sb_me_ETC___05F_d412;
    }
    if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv_port1___05Fread[0U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv_port1___05Fread[1U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv_port1___05Fread[2U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv_port1___05Fread[3U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv_port1___05Fread[4U] 
            = (0x2000U | vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[4U]);
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv_port1___05Fread[0U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv_port1___05Fread[1U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv_port1___05Fread[2U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv[2U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv_port1___05Fread[3U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv[3U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv_port1___05Fread[4U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv[4U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request_DEQ 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_ff_core_response_enqw_wset_1___05FSEL_1) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_axi4fabric_f_s_wd_route_info_0_dequeue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_0_dequeueing_whas) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_0_ff__DOT__empty_reg));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_axi4fabric_f_s_wd_route_info_0_enqueue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_0_enqw_whas) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_0_dequeueing_whas)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_0_ff__DOT__empty_reg)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_axi4fabric_f_s_wd_route_info_1_dequeue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_1_dequeueing_whas) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_1_ff__DOT__empty_reg));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_axi4fabric_f_s_wd_route_info_1_enqueue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_1_enqw_whas) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_1_dequeueing_whas)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_1_ff__DOT__empty_reg)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_axi4fabric_f_m_wd_route_info_0_dequeue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_0_dequeueing_whas) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_0_ff__DOT__empty_reg));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_axi4fabric_f_m_wd_route_info_0_enqueue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_0_enqw_whas) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_0_dequeueing_whas)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_0_ff__DOT__empty_reg)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_axi4fabric_f_m_wd_route_info_2_dequeue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_2_dequeueing_whas) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_2_ff__DOT__empty_reg));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_axi4fabric_f_m_wd_route_info_2_enqueue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_2_enqw_whas) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_2_dequeueing_whas)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_2_ff__DOT__empty_reg)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_axi4fabric_f_m_wd_route_info_3_dequeue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_3_dequeueing_whas) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_3_ff__DOT__empty_reg));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_axi4fabric_f_m_wd_route_info_3_enqueue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_3_enqw_whas) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_3_dequeueing_whas)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_3_ff__DOT__empty_reg)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_axi4fabric_f_s_wd_route_info_2_dequeue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_2_dequeueing_whas) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_2_ff__DOT__empty_reg));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_axi4fabric_f_s_wd_route_info_2_enqueue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_2_enqw_whas) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_2_dequeueing_whas)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_s_wd_route_info_2_ff__DOT__empty_reg)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_axi4fabric_f_m_wd_route_info_4_dequeue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_4_dequeueing_whas) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_4_ff__DOT__empty_reg));
    vlTOPp->mkTbSoc__DOT__soc__DOT__CAN_FIRE_RL_axi4fabric_f_m_wd_route_info_4_enqueue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_4_enqw_whas) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_4_dequeueing_whas)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__axi4fabric_f_m_wd_route_info_4_ff__DOT__empty_reg)));
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
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__x___05Fh1804 
        = (1U & (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_muldiv_mv_mbox_inputs[0U] 
                   >> 2U) & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_muldiv_mv_mbox_inputs[0U])) 
                 & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__IF_ma_inputs_wordop_THEN_IF_ma_inputs_funct3_B_ETC___05F_d112 
                            >> 0x3fU))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__x___05Fh1768 
        = (1U & (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_muldiv_mv_mbox_inputs[0U] 
                   >> 2U) & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_muldiv_mv_mbox_inputs[0U])) 
                 & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__IF_ma_inputs_wordop_THEN_IF_ma_inputs_funct3_B_ETC___05F_d100 
                            >> 0x3fU))));
    __Vtemp2441[0U] = (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__shin___05Fh28);
    __Vtemp2441[1U] = (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__shin___05Fh28 
                               >> 0x20U));
    __Vtemp2441[2U] = (1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                              >> 0x10U) & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__shin___05Fh28 
                                                   >> 0x3fU))));
    VL_SHIFTR_WWI(65,65,6, __Vtemp2442, __Vtemp2441, (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__shift_amt___05Fh25));
    __Vtemp2443[0U] = 0xffffffffU;
    __Vtemp2443[1U] = 0xffffffffU;
    __Vtemp2443[2U] = 1U;
    VL_SHIFTR_WWI(65,65,6, __Vtemp2444, __Vtemp2443, (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__shift_amt___05Fh25));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
        = (__Vtemp2442[0U] | ((~ __Vtemp2444[0U]) & 
                              (- (IData)((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                 >> 0x10U) 
                                                & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__shin___05Fh28 
                                                           >> 0x3fU))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
        = (__Vtemp2442[1U] | ((~ __Vtemp2444[1U]) & 
                              (- (IData)((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                 >> 0x10U) 
                                                & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__shin___05Fh28 
                                                           >> 0x3fU))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[2U] 
        = (1U & (__Vtemp2442[2U] | ((~ __Vtemp2444[2U]) 
                                    & (- (IData)((1U 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                      >> 0x10U) 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__shin___05Fh28 
                                                                >> 0x3fU)))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ins_ETC___05F_d1082 
        = (((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__jump_address___05Fh22982 
                     >> 1U)) & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                           >> 2U)))) 
           & (((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT)) 
               | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT))) 
              | ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT)) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__btaken___05Fh22985))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT___theResult___05F___05Fh22990 
        = (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT)) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__btaken___05Fh22985)))
            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__nlogical_pc___05Fh22984
            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__jump_address___05Fh22982);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__IF_rx_instrtype_w_data_whas___05F45_THEN_rx_instrt_ETC___05F_d1032 
        = (((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT)) 
            & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__btaken___05Fh22985) 
               != (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                         >> 0x14U)))) | (((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT)) 
                                          | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT))) 
                                         & ((((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[3U])) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[2U])) 
                                                 << 0x16U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[1U])) 
                                                   >> 0xaU))) 
                                            != vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__jump_address___05Fh22982)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ETC___05F_d1044 
        = (1U & (((~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__jump_address___05Fh22982 
                              >> 1U))) | (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                  >> 2U))) 
                 | (((4U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT)) 
                     & (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT))) 
                    & ((2U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT)) 
                       | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__btaken___05Fh22985))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_data_9 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout__DOT__not_ring_full) 
           & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory) 
                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
               & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_rx_meta_w_data_whas___05F2_THEN_rx_meta_w_d_ETC___05F_d838)));
    __Vtemp2455[2U] = ((0xffff8000U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__memory_address___05Fh18556) 
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
            = __Vtemp2455[2U];
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
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___05FEN_ma_inputs 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_RDY_muldiv_mv_mbox_inputs) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_muldiv_mv_mbox_inputs[0U] 
              >> 2U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__mul___05FEN_ma_inputs 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_RDY_muldiv_mv_mbox_inputs) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_muldiv_mv_mbox_inputs[0U] 
                 >> 2U)));
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
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__registerfile_EN_commit_rd 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_mkConnectionVtoAf_1) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U] 
                 >> 5U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__MUX_v_fb_addr_valid_0_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_EN_mav_allocate_line) 
           & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__rg_fbtail)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__MUX_v_fb_addr_valid_1_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_EN_mav_allocate_line) 
           & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__rg_fbtail)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__MUX_v_fb_addr_valid_2_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_EN_mav_allocate_line) 
           & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__rg_fbtail)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__MUX_v_fb_addr_valid_3_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer_EN_mav_allocate_line) 
           & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__m_fillbuffer__DOT__rg_fbtail)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__lv_response_word___05Fh17319 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__IF_wr_nc_state_whas___05F86_THEN_wr_nc_state_wget___05FETC___05F_d371)
            ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[2U] 
                << 0x1dU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[1U] 
                             >> 3U)) : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__lv_response_word___05Fh17335);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__func_cause___05Fh3331 
        = (0x7fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_microtrap)
                     ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_microtrap_cause)
                     : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__chk_interrupt___05F_d75) 
                         & (7U != (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[2U] 
                                            << 0x15U) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[1U] 
                                              >> 0xbU)))))
                         ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__chk_interrupt___05F_d75) 
                            >> 1U) : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[0U])
                                       ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[0U]
                                       : ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[0U] 
                                             >> 1U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__xrf_D_OUT_2 
        = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__xrf__DOT__arr
        [(0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[2U] 
                    << 4U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[1U] 
                              >> 0x1cU)))];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__SEXT_fn_decode_5_BITS_39_TO_8_94___05F_d195 
        = (((QData)((IData)((- (IData)((1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[1U] 
                                              >> 7U)))))) 
            << 0x20U) | (QData)((IData)(((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[1U] 
                                          << 0x18U) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[0U] 
                                            >> 8U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2_tx_tx_instrtype_to_stage3_enq_data 
        = ((1U & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_microtrap) 
                   | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__chk_interrupt___05F_d75) 
                      & (7U != (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[2U] 
                                         << 0x15U) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[1U] 
                                           >> 0xbU)))))) 
                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[0U] 
                     >> 7U))) ? 6U : (0xfU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[2U] 
                                               << 0x15U) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[1U] 
                                                 >> 0xbU))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_0_CONCAT_m_tag_v_tags_3_rg_output_0_port1___05FETC___05F_d390 
        = (1U < (7U & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_EQ___05FETC___05F_d365) 
                         + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__b___05Fh38584)) 
                        + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__b___05Fh38572)) 
                       + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__b___05Fh38560))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__b___05Fh38584) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_EQ___05FETC___05F_d365)) 
            << 1U) | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__b___05Fh38572) 
                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_EQ___05FETC___05F_d365)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_hitmask___05Fh37878 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_EQ___05FETC___05F_d365) 
            << 3U) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__b___05Fh38584) 
                       << 2U) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__b___05Fh38572) 
                                  << 1U) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__b___05Fh38560))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__IF_fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pm_ETC___05F_d166 
        = ((1U & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d17) 
                   | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULE_fn_pmp_look_ETC___05F_d19))) 
                  | (0U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                  >> 3U))))) ? (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                  >> 0xfU) 
                                                 | (3U 
                                                    != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
                                                & ((((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req))) 
                                                     & (~ 
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                         >> 8U))) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req))) 
                                                       & (~ 
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                           >> 9U)))) 
                                                   | ((2U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req))) 
                                                      & (~ 
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                          >> 0xaU)))))
            : (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                 >> 7U) | (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
               & ((((0U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req))) 
                    & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg)) 
                   | ((1U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req))) 
                      & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                            >> 1U)))) | ((2U == (3U 
                                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req))) 
                                         & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                               >> 2U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d99 
        = (1U & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d17) 
                   | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULE_fn_pmp_look_ETC___05F_d19))) 
                  | (0U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                  >> 3U)))) & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d39) 
                                                | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULE_fn_pmp_look_ETC___05F_d41))) 
                                               | (0U 
                                                  == 
                                                  (3U 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                      >> 0xbU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh19495 
        = ((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh19645) 
           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__y___05Fh19644);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_mkConnectionGetPut_3 
        = (1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv_port1___05Fread[4U] 
                  >> 0xdU) & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req__DOT__empty_reg))));
    VL_ADD_W(3, __Vtemp2458, vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__remainder___05Fh499, vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__SEXT_INV_rg_op2_2_PLUS_1_3___05F_d14);
    VL_EXTEND_WQ(129,64, __Vtemp2462, (((- (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__x___05Fh1768))) 
                                        ^ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__IF_ma_inputs_wordop_THEN_IF_ma_inputs_funct3_B_ETC___05F_d100) 
                                       + (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__x___05Fh1768))));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__CAN_FIRE_RL_single_step_div) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial_D_IN[0U] 
            = (IData)(((0xfffffffffffffffcULL & (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial[1U])) 
                                                  << 0x22U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial[0U])) 
                                                    << 2U))) 
                       | (QData)((IData)(((2U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial_BITS_126_TO_63_ULT_rg_op2___05F_d10)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__IF_partial_BITS_126_TO_63_ULT_rg_op2_0_THEN_pa_ETC___05F_d20))))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial_D_IN[1U] 
            = (IData)((((0xfffffffffffffffcULL & (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial[1U])) 
                                                   << 0x22U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial[0U])) 
                                                     << 2U))) 
                        | (QData)((IData)(((2U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial_BITS_126_TO_63_ULT_rg_op2___05F_d10)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__IF_partial_BITS_126_TO_63_ULT_rg_op2_0_THEN_pa_ETC___05F_d20))))))) 
                       >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial_D_IN[2U] 
            = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__IF_partial_BITS_126_TO_63_ULT_rg_op2_0_THEN_pa_ETC___05F_d20)
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__remainder___05Fh499[0U]
                : __Vtemp2458[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial_D_IN[3U] 
            = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__IF_partial_BITS_126_TO_63_ULT_rg_op2_0_THEN_pa_ETC___05F_d20)
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__remainder___05Fh499[1U]
                : __Vtemp2458[1U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial_D_IN[4U] 
            = (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__IF_partial_BITS_126_TO_63_ULT_rg_op2_0_THEN_pa_ETC___05F_d20)
                      ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__remainder___05Fh499[2U]
                      : __Vtemp2458[2U]));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial_D_IN[0U] 
            = __Vtemp2462[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial_D_IN[1U] 
            = __Vtemp2462[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial_D_IN[2U] 
            = __Vtemp2462[2U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial_D_IN[3U] 
            = __Vtemp2462[3U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__mbox__DOT__div___DOT__partial_D_IN[4U] 
            = __Vtemp2462[4U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__shift_l___05Fh31 
        = (((QData)((IData)(((0x80000000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                             << 0x1fU)) 
                             | ((0x40000000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                << 0x1dU)) 
                                | ((0x20000000U & (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                   << 0x1bU)) 
                                   | ((0x10000000U 
                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                          << 0x19U)) 
                                      | ((0x8000000U 
                                          & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                             << 0x17U)) 
                                         | ((0x4000000U 
                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                << 0x15U)) 
                                            | ((0x2000000U 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                   << 0x13U)) 
                                               | ((0x1000000U 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                      << 0x11U)) 
                                                  | ((0x800000U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                         << 0xfU)) 
                                                     | ((0x400000U 
                                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                            << 0xdU)) 
                                                        | ((0x200000U 
                                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                               << 0xbU)) 
                                                           | ((0x100000U 
                                                               & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                  << 9U)) 
                                                              | ((0x80000U 
                                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                     << 7U)) 
                                                                 | ((0x40000U 
                                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                        << 5U)) 
                                                                    | ((0x20000U 
                                                                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                           << 3U)) 
                                                                       | ((0x10000U 
                                                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                              << 1U)) 
                                                                          | ((0x8000U 
                                                                              & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 1U)) 
                                                                             | ((0x4000U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 0x1dU)) 
                                                                                | (1U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U] 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))))) 
            << 0x20U) | (QData)((IData)(((0x80000000U 
                                          & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                             << 0x1fU)) 
                                         | ((0x40000000U 
                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                << 0x1dU)) 
                                            | ((0x20000000U 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                   << 0x1bU)) 
                                               | ((0x10000000U 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                      << 0x19U)) 
                                                  | ((0x8000000U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                         << 0x17U)) 
                                                     | ((0x4000000U 
                                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                            << 0x15U)) 
                                                        | ((0x2000000U 
                                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                               << 0x13U)) 
                                                           | ((0x1000000U 
                                                               & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                  << 0x11U)) 
                                                              | ((0x800000U 
                                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                     << 0xfU)) 
                                                                 | ((0x400000U 
                                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                        << 0xdU)) 
                                                                    | ((0x200000U 
                                                                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                           << 0xbU)) 
                                                                       | ((0x100000U 
                                                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                              << 9U)) 
                                                                          | ((0x80000U 
                                                                              & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                << 7U)) 
                                                                             | ((0x40000U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 0x1dU)) 
                                                                                | (1U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U] 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_data_7 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_trapout_1__DOT__not_ring_full) 
           & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_memory) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__wr_op1_avail_wget___05F63_AND_wr_op2_avail_wget___05F4_ETC___05F_d766)) 
               | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control) 
                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ins_ETC___05F_d1082))) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)));
    VL_EXTEND_WQ(72,64, __Vtemp2465, (((QData)((IData)(
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
                ? __Vtemp2465[0U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)
                                      ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_mtval_D_OUT)
                                      : 0U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_trapout_to_stage4_enq_data[1U] 
            = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control) 
                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ins_ETC___05F_d1082))
                ? __Vtemp2465[1U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)
                                      ? (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_mtval_D_OUT 
                                                 >> 0x20U))
                                      : 0U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_trapout_to_stage4_enq_data[2U] 
            = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control) 
                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ins_ETC___05F_d1082))
                ? __Vtemp2465[2U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)
                                      ? (0xffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                  >> 0xaU))
                                      : 0U));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0_common_ma_flush_fl[0U] 
        = (IData)(((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[2U])
                    ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[2U])) 
                        << 0x3fU) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[1U])) 
                                      << 0x1fU) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[0U])) 
                                                   >> 1U)))
                    : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_fuid_w_data_wset_1___05FSEL_4)
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT___theResult___05F___05Fh22990
                        : 0ULL)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0_common_ma_flush_fl[1U] 
        = (IData)((((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[2U])
                     ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[2U])) 
                         << 0x3fU) | (((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[1U])) 
                                       << 0x1fU) | 
                                      ((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[0U])) 
                                       >> 1U))) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_fuid_w_data_wset_1___05FSEL_4)
                                                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT___theResult___05F___05Fh22990
                                                    : 0ULL)) 
                   >> 0x20U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0_common_ma_flush_fl[2U] 
        = ((2U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[0U] 
                  << 1U)) | (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[2U] 
                                   >> 2U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__rg_eEpoch_D_IN 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__IF_rx_instrtype_w_data_whas___05F45_THEN_rx_instrt_ETC___05F_d1032) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ETC___05F_d1044)) 
           ^ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__rg_eEpoch));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__IF_rx_instrtype_w_data_whas___05F45_THEN_rx_instrt_ETC___05F_d1047 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__IF_rx_instrtype_w_data_whas___05F45_THEN_rx_instrt_ETC___05F_d1032) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ETC___05F_d1044)) 
            & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[2U]) 
           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[2U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_common_mv_flush_fst 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_fuid_w_data_wset_1___05FSEL_4) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__IF_rx_instrtype_w_data_whas___05F45_THEN_rx_instrt_ETC___05F_d1032) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__NOT_IF_IF_rx_instrtype_w_data_whas___05F45_THEN_rx_ETC___05F_d1044)));
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
    __Vtemp2479[0U] = ((0xfffffe00U & ((IData)((((QData)((IData)(
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
        __Vtemp2489[0U] = (4U | ((0xfffffe00U & ((IData)(
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
        __Vtemp2489[1U] = ((0x1ffU & ((IData)((((QData)((IData)(
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
        __Vtemp2489[2U] = ((0xfffffe00U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
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
        __Vtemp2489[0U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)
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
        __Vtemp2489[1U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)
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
        __Vtemp2489[2U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_trap_from_prev)
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
        __Vtemp2492[1U] = ((0x1ffU & ((IData)((((QData)((IData)(
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
        __Vtemp2492[2U] = ((0xfffffe00U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
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
        __Vtemp2492[1U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_fuid_w_data_wset_1___05FSEL_4)
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
                            : __Vtemp2489[1U]);
        __Vtemp2492[2U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_fuid_w_data_wset_1___05FSEL_4)
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
                            : __Vtemp2489[2U]);
    }
    __Vtemp2493[0U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_baseout_w_data_wset_1___05FSEL_1)
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
                                                  __Vtemp2479[0U]
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
                                                   __Vtemp2489[0U])));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_rx_commitlog_w_ena_wset_1___05FSEL_1) {
        __Vtemp2494[1U] = ((0x1ffU & ((IData)((((QData)((IData)(
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
        __Vtemp2494[2U] = ((0xfffffe00U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_renameid) 
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
        __Vtemp2494[1U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_baseout_w_data_wset_1___05FSEL_1)
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
                            : __Vtemp2492[1U]);
        __Vtemp2494[2U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__MUX_tx_baseout_w_data_wset_1___05FSEL_1)
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
                            : __Vtemp2492[2U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_fuid_to_stage4_enq_data[0U] 
            = __Vtemp2493[0U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_fuid_to_stage4_enq_data[1U] 
        = __Vtemp2494[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_tx_tx_fuid_to_stage4_enq_data[2U] 
        = __Vtemp2494[2U];
    __Vtemp2503[2U] = ((0xffffe000U & ((IData)((((QData)((IData)(
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
        = __Vtemp2503[2U];
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
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__MUX_xrf_upd_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__registerfile_EN_commit_rd) 
           & (0U != (0x1fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_core_response_rv_port1___05Fread 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__CAN_FIRE_RL_rl_response_to_core)
            ? (0x40000000000ULL | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__lv_response_word___05Fh17319)) 
                                    << 0xaU) | (QData)((IData)(
                                                               (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__IF_wr_nc_state_whas___05F86_THEN_wr_nc_state_wget___05FETC___05F_d371) 
                                                                 << 9U) 
                                                                | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__lv_response_cause___05Fh17321) 
                                                                    << 2U) 
                                                                   | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__lv_response_epochs___05Fh17322)))))))
            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_core_response_rv);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2_tx_tx_mtval_to_stage3_enq_data 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__func_cause___05Fh3331))
            ? (QData)((IData)(((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[1U] 
                                << 0x16U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[0U] 
                                             >> 0xaU))))
            : ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__func_cause___05Fh3331))
                ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[3U])) 
                    << 0x36U) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[2U])) 
                                  << 0x16U) | ((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[1U])) 
                                               >> 0xaU)))
                : (((0xcU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__func_cause___05Fh3331)) 
                    & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[3U] 
                       >> 0x17U)) ? (2ULL + (((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[3U])) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[2U])) 
                                                 << 0x16U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[1U])) 
                                                   >> 0xaU))))
                    : ((0xcU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__func_cause___05Fh3331))
                        ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[3U])) 
                            << 0x36U) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[2U])) 
                                          << 0x16U) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__data0_reg[1U])) 
                                            >> 0xaU)))
                        : 0ULL))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__op2___05Fh3749 
        = ((0x10000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[1U])
            ? ((0x8000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[1U])
                ? 2ULL : 4ULL) : ((0x8000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[1U])
                                   ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__SEXT_fn_decode_5_BITS_39_TO_8_94___05F_d195
                                   : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__xrf__DOT__arr
                                  [(0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[2U] 
                                              << 9U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[1U] 
                                                >> 0x17U)))]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_v_reg_dirty_0_write_1___05FVAL_3 
        = (((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
             ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                 ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_3
                 : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_2)
             : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                 ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_1
                 : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_0)) 
           & (~ (1ULL << (0x3fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                           >> 0xfU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_v_reg_valid_0_write_1___05FVAL_3 
        = (((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
             ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                 ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3
                 : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2)
             : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                 ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1
                 : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0)) 
           & (~ (1ULL << (0x3fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                           >> 0xfU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__IF_fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pm_ETC___05F_d168 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d99) 
            & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d62) 
                | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULE_fn_pmp_look_ETC___05F_d64))) 
               | (0U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                               >> 0x13U))))) ? (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                  >> 0x1fU) 
                                                 | (3U 
                                                    != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
                                                & ((((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req))) 
                                                     & (~ 
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                         >> 0x18U))) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req))) 
                                                       & (~ 
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                           >> 0x19U)))) 
                                                   | ((2U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req))) 
                                                      & (~ 
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                          >> 0x1aU)))))
            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d99)
                ? (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                     >> 0x17U) | (3U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv))) 
                   & ((((0U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req))) 
                        & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                              >> 0x10U))) | ((1U == 
                                              (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req))) 
                                             & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                   >> 0x11U)))) 
                      | ((2U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req))) 
                         & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                               >> 0x12U))))) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__IF_fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pm_ETC___05F_d166)));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh35113 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0_read___05F0_BITS_65_TO_2_8_AND_v_sb_me_ETC___05F_d412;
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__y___05Fh35114 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh19495;
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh35113 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh19495;
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__y___05Fh35114 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1_read___05F2_BITS_65_TO_2_9_AND_v_sb_me_ETC___05F_d448;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__lv_shiftout___05Fh31 
        = (((5U == (0xfU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                            >> 0xdU))) | (0xbU == (0xfU 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                      >> 0xdU))))
            ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__fn_shift_fn_BIT_3_AND_IF_fn_shift_fn_EQ_5_OR_f_ETC___05F_d116[0U])))
            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__instance_fn_shift_2__DOT__shift_l___05Fh31);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__IF_rg_microtrap_4_OR_chk_interrupt_5_BIT_0_6_A_ETC___05F_d112 
        = ((7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2_tx_tx_instrtype_to_stage3_enq_data)) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_common_mv_flush_fst) 
              | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[2U] 
                 >> 1U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_rl_clear_stall_in_decode_stage 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_stall) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_common_mv_flush_fst) 
              | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[2U] 
                 >> 1U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__IF_rg_microtrap_4_OR_chk_interrupt_5_BIT_0_6_A_ETC___05F_d98 
        = (((7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2_tx_tx_instrtype_to_stage3_enq_data)) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_common_mv_flush_fst))) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[2U] 
                 >> 1U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_rl_flush_stage0 
        = (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_initialize)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__rg_reset_done)) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_common_mv_flush_fst) 
              | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[2U] 
                 >> 1U)));
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
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_12 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_2__DOT__empty_reg) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__CAN_FIRE_RL_decode_and_opfetch));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_s2_pipe1_connect_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__empty_reg) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__CAN_FIRE_RL_decode_and_opfetch));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__MUX_rg_microtrap_write_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__CAN_FIRE_RL_decode_and_opfetch) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__eEpoch_read___05F8_CONCAT_wEpoch_read___05F9_0_EQ_IF_r_ETC___05F_d73)) 
           & (7U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2_tx_tx_instrtype_to_stage3_enq_data)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F2_BITS_4_TO_ETC___05F_d108) 
            << 1U) | (((0xfU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls) 
                                >> 5U)) != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F2_BITS_4_TO_ETC___05F_d108)) 
                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F2_BIT_0_12___05FETC___05F_d145)));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff__DOT__empty_reg) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d220 
            = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff__DOT__data0_reg 
                             >> 9U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__cause___05Fh3987 
            = (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff__DOT__data0_reg 
                                >> 2U)));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d220 
            = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_core_response_rv_port1___05Fread 
                             >> 9U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__cause___05Fh3987 
            = (0x7fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_core_response_rv_port1___05Fread 
                                >> 2U)));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_mkConnectionGetPut_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff__DOT__full_reg) 
           & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_core_response_rv_port1___05Fread 
                      >> 0x2aU)));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff__DOT__empty_reg) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__y___05Fh2057 
            = (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff__DOT__data0_reg));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
            = (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff__DOT__data0_reg 
                       >> 0xaU));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__y___05Fh2057 
            = (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_core_response_rv_port1___05Fread));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
            = (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_core_response_rv_port1___05Fread 
                       >> 0xaU));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__fn_pmp_lookup___05F_d407 
        = (((((((((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d17)) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULE_fn_pmp_look_ETC___05F_d19)) 
                 & (0U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                 >> 3U)))) | (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d39)) 
                                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULE_fn_pmp_look_ETC___05F_d41)) 
                                              & (0U 
                                                 != 
                                                 (3U 
                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                     >> 0xbU))))) 
               | (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d62)) 
                   & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULE_fn_pmp_look_ETC___05F_d64)) 
                  & (0U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                  >> 0x13U))))) | (
                                                   (((0x1fffffffU 
                                                      & (IData)(
                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req 
                                                                 >> 5U))) 
                                                     >= 
                                                     (0x1fffffffU 
                                                      & (((1U 
                                                           == 
                                                           (3U 
                                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                               >> 0x1bU)))
                                                           ? 
                                                          ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[3U] 
                                                            << 0x1dU) 
                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[2U] 
                                                              >> 3U))
                                                           : 
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[3U] 
                                                           >> 3U)) 
                                                         & ((3U 
                                                             == 
                                                             (3U 
                                                              & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                                 >> 0x1bU)))
                                                             ? 
                                                            (~ 
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__mask___05Fh1358 
                                                              & (~ 
                                                                 ((IData)(1U) 
                                                                  + vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__mask___05Fh1358))))
                                                             : 0x1fffffffU)))) 
                                                    & ((0x1fffffffU 
                                                        & (IData)(
                                                                  (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req 
                                                                   >> 5U))) 
                                                       <= 
                                                       (0x1fffffffU 
                                                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[3U] 
                                                           >> 3U)))) 
                                                   & (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                          >> 0x1bU))))) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__IF_fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pm_ETC___05F_d168)) 
            << 7U) | ((0U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req)))
                       ? 5U : ((1U == (3U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req)))
                                ? 7U : 1U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__lv_storemask___05Fh14864 
        = (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh35113 
           | vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__y___05Fh35114);
    __Vtemp2507[0U] = (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[0U]))));
    __Vtemp2507[1U] = (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[0U]))) 
                               >> 0x20U));
    __Vtemp2507[2U] = (1U ^ (1U & ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                       >> 0xeU)) & 
                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[1U] 
                                    >> 0x1fU))));
    __Vtemp2510[0U] = (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[0U]))));
    __Vtemp2510[1U] = (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[0U]))) 
                               >> 0x20U));
    __Vtemp2510[2U] = (1U ^ (1U & ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                       >> 0xeU)) & 
                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U] 
                                    >> 0x1fU))));
    __Vtemp2512[0U] = (1U | (0xfffffffeU & ((IData)(
                                                    ((0x1000U 
                                                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta_D_OUT))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                       << 0x39U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                          << 0x19U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                            >> 7U)))
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[0U]))))) 
                                            << 1U)));
    __Vtemp2512[1U] = ((1U & ((IData)(((0x1000U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta_D_OUT))
                                        ? (((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                 >> 7U)))
                                        : (((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[0U]))))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & ((IData)(
                                                       (((0x1000U 
                                                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta_D_OUT))
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                              << 0x19U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                                >> 7U)))
                                                          : 
                                                         (((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[0U])))) 
                                                        >> 0x20U)) 
                                               << 1U)));
    __Vtemp2512[2U] = (1U & ((IData)((((0x1000U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta_D_OUT))
                                        ? (((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                 >> 7U)))
                                        : (((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[0U])))) 
                                      >> 0x20U)) >> 0x1fU));
    __Vtemp2513[0U] = ((0xfffffffeU & ((IData)(((((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[0U]))) 
                                                ^ (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                                         >> 0xeU))))))) 
                                       << 1U)) | (1U 
                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                     >> 0xeU)));
    __Vtemp2513[1U] = ((1U & ((IData)(((((QData)((IData)(
                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[0U]))) 
                                       ^ (- (QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                                >> 0xeU))))))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & ((IData)(
                                                       (((((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[0U]))) 
                                                         ^ 
                                                         (- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                                                >> 0xeU)))))) 
                                                        >> 0x20U)) 
                                               << 1U)));
    __Vtemp2513[2U] = (1U & ((IData)((((((QData)((IData)(
                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[0U]))) 
                                       ^ (- (QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                                >> 0xeU)))))) 
                                      >> 0x20U)) >> 0x1fU));
    VL_ADD_W(3, __Vtemp2514, __Vtemp2512, __Vtemp2513);
    __Vtemp2517[0U] = (1U | (0xfffffffeU & ((IData)(
                                                    ((0x1000U 
                                                      & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta_D_OUT))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                       << 0x39U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                          << 0x19U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                            >> 7U)))
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[0U]))))) 
                                            << 1U)));
    __Vtemp2517[1U] = ((1U & ((IData)(((0x1000U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta_D_OUT))
                                        ? (((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                 >> 7U)))
                                        : (((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[0U]))))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & ((IData)(
                                                       (((0x1000U 
                                                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta_D_OUT))
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                                              << 0x19U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                                >> 7U)))
                                                          : 
                                                         (((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[0U])))) 
                                                        >> 0x20U)) 
                                               << 1U)));
    __Vtemp2517[2U] = (1U & ((IData)((((0x1000U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta_D_OUT))
                                        ? (((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[1U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[0U])) 
                                                 >> 7U)))
                                        : (((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d83[0U])))) 
                                      >> 0x20U)) >> 0x1fU));
    __Vtemp2518[0U] = ((0xfffffffeU & ((IData)(((((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[0U]))) 
                                                ^ (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                                         >> 0xeU))))))) 
                                       << 1U)) | (1U 
                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                     >> 0xeU)));
    __Vtemp2518[1U] = ((1U & ((IData)(((((QData)((IData)(
                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[0U]))) 
                                       ^ (- (QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                                >> 0xeU))))))) 
                              >> 0x1fU)) | (0xfffffffeU 
                                            & ((IData)(
                                                       (((((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[0U]))) 
                                                         ^ 
                                                         (- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                                                >> 0xeU)))))) 
                                                        >> 0x20U)) 
                                               << 1U)));
    __Vtemp2518[2U] = (1U & ((IData)((((((QData)((IData)(
                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__fn_bypass___05F_d94[0U]))) 
                                       ^ (- (QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                                                >> 0xeU)))))) 
                                      >> 0x20U)) >> 0x1fU));
    VL_ADD_W(3, __Vtemp2519, __Vtemp2517, __Vtemp2518);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__alu_result___05Fh14863 
        = ((0x10000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])
            ? ((0x8000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])
                ? ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__lv_logic___05Fh32
                    : (QData)((IData)(VL_LT_W(3, __Vtemp2507, __Vtemp2510))))
                : ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])
                    ? ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__lv_shiftout___05Fh31
                        : (((QData)((IData)((1U & __Vtemp2514[2U]))) 
                            << 0x3fU) | (((QData)((IData)(
                                                          __Vtemp2514[1U])) 
                                          << 0x1fU) 
                                         | ((QData)((IData)(
                                                            __Vtemp2514[0U])) 
                                            >> 1U))))
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__lv_logic___05Fh32))
            : ((0x8000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])
                ? ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__lv_logic___05Fh32
                    : ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__lv_shiftout___05Fh31
                        : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__lv_logic___05Fh32))
                : ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__lv_logic___05Fh32
                    : ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__instance_fn_base_alu_1__DOT__lv_shiftout___05Fh31
                        : (((QData)((IData)((1U & __Vtemp2519[2U]))) 
                            << 0x3fU) | (((QData)((IData)(
                                                          __Vtemp2519[1U])) 
                                          << 0x1fU) 
                                         | ((QData)((IData)(
                                                            __Vtemp2519[0U])) 
                                            >> 1U)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_microtrap_D_IN 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_rl_clear_stall_in_decode_stage)) 
                 & ((((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_microtrap)) 
                      & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__fn_decode___05F_d65[0U]) 
                     & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_common_mv_flush_fst))) 
                    & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[2U] 
                          >> 1U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_wfi_EN 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__CAN_FIRE_RL_decode_and_opfetch) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__eEpoch_read___05F8_CONCAT_wEpoch_read___05F9_0_EQ_IF_r_ETC___05F_d73)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__IF_rg_microtrap_4_OR_chk_interrupt_5_BIT_0_6_A_ETC___05F_d98)) 
           | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage2__DOT__rg_wfi) 
              & (((0ULL != ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh3602 
                             & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh3799) 
                            << 1U)) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_common_mv_flush[2U] 
                                       >> 1U)) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3_common_mv_flush_fst))));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_rl_flush_stage0) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_fence_port2___05Fread 
            = (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0_common_ma_flush_fl[2U] 
                     >> 1U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence_port2___05Fread 
            = (1U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0_common_ma_flush_fl[2U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect_port2___05Fread[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect_port2___05Fread[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect_port2___05Fread[2U] = 0U;
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_fence_port2___05Fread 
            = (1U & ((~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_gen_next_pc) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_fence))) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_fence)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence_port2___05Fread 
            = (1U & ((~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_gen_next_pc) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence))) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage0__DOT__rg_sfence)));
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
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff__DOT__empty_reg) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_NOT_f_ETC___05F_d182 
            = (1U & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff__DOT__data0_reg 
                                >> 9U))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d186 
            = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff__DOT__data0_reg 
                             >> 9U)));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_NOT_f_ETC___05F_d182 
            = (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_mkConnectionGetPut_1) 
                     & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_core_response_rv_port1___05Fread 
                                   >> 9U)))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d186 
            = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_mkConnectionGetPut_1)) 
                     | (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__imem__DOT__icache__DOT__ff_core_response_rv_port1___05Fread 
                                >> 9U))));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__CAN_FIRE_RL_process_instruction 
        = (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff__DOT__empty_reg) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_mkConnectionGetPut_1)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__empty_reg)) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_2__DOT__full_reg)) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__full_reg)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__empty_reg)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__full_reg));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_1_CONCAT_rg_wEpoch_2_3_EQ_IF_ff_memo_ETC___05F_d89 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__curr_epoch___05Fh1651) 
           == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__y___05Fh2057));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_NOT_rg_action_7_8_AND_rg_prev_9_BITS_13_TO___05FETC___05F_d223 
        = (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_9_BITS_13_TO_12_0_EQ_rg_eEpoch_1_CONCA_ETC___05F_d64))
            ? (3U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                             << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                          >> 0xeU))))
            : ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U] 
                       >> 0xcU) & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                           >> 2U))))
                ? (3U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
                                >> 0x10U))) : ((3U 
                                                != 
                                                (3U 
                                                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73)) 
                                               & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                          >> 2U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__NOT_rg_action_7_8_AND_rg_prev_9_BITS_13_TO_12___05FETC___05F_d205 
        = (1U & (((((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action)) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_9_BITS_13_TO_12_0_EQ_rg_eEpoch_1_CONCA_ETC___05F_d64)) 
                   | (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U] 
                         >> 0xcU))) | (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                  >> 2U)))) 
                 | (3U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
                                 >> 0x10U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
        = (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_9_BITS_13_TO_12_0_EQ_rg_eEpoch_1_CONCA_ETC___05F_d64))
            ? ((((3U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                                << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                             >> 0xeU))))
                  ? (0xffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73)
                  : 0U) << 0x10U) | (0xffffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                                                 << 0x12U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                                   >> 0xeU))))
            : ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U] 
                       >> 0xcU) & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                           >> 2U))))
                ? (0xffffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
                              >> 0x10U)) : ((3U == 
                                             (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73))
                                             ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73
                                             : (0xffffU 
                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_wr_cache_enable_wget___05F13_37_OR_ff_from_tlb_ETC___05F_d574 
        = (((0x80000000U > (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                    >> 9U))) & (~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__fn_pmp_lookup___05F_d407) 
                                                   >> 7U))) 
           & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                         >> 8U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_1_cause___05Fh40255 
        = (0x7fU & ((1U & ((~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                       >> 8U))) & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__fn_pmp_lookup___05F_d407) 
                                                   >> 7U)))
                     ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__fn_pmp_lookup___05F_d407)
                     : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                       >> 8U))) ? (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                           >> 1U))
                         : ((0U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                           << 0x17U) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                             >> 9U))))
                             ? 5U : 7U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_IF_ff_core_request_first___05F2_BITS_74_TO_73___05FETC___05F_d417 
        = ((((0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh38897)) 
             & (~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__fn_pmp_lookup___05F_d407) 
                   >> 7U))) & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                          >> 8U)))) 
           & (0x80000000U <= (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                      >> 9U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__lv_word___05Fh14866 
        = ((((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__lv_index___05F_h15012))
              ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__lv_index___05F_h15012))
                  ? ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                    >> 0xeU))) ? ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                              >> 0xdU)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                               >> 0xcU)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xfU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xeU])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xdU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xcU]))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                               >> 0xcU)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xbU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xaU])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[9U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[8U])))))
                      : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                        >> 0xdU))) ? 
                         ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                         >> 0xcU)))
                           ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[7U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[6U])))
                           : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[5U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[4U]))))
                          : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                            >> 0xcU)))
                              ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[2U])))
                              : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0U]))))))
                  : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                    >> 0xeU))) ? ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                              >> 0xdU)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                               >> 0xcU)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xfU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xeU])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xdU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xcU]))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                               >> 0xcU)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xbU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xaU])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[9U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[8U])))))
                      : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                        >> 0xdU))) ? 
                         ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                         >> 0xcU)))
                           ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[7U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[6U])))
                           : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[5U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[4U]))))
                          : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                            >> 0xcU)))
                              ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[2U])))
                              : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0U])))))))
              : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__lv_index___05F_h15012))
                  ? ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                    >> 0xeU))) ? ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                              >> 0xdU)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                               >> 0xcU)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xfU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xeU])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xdU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xcU]))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                               >> 0xcU)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xbU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xaU])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[9U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[8U])))))
                      : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                        >> 0xdU))) ? 
                         ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                         >> 0xcU)))
                           ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[7U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[6U])))
                           : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[5U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[4U]))))
                          : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                            >> 0xcU)))
                              ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[2U])))
                              : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0U]))))))
                  : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                    >> 0xeU))) ? ((1U 
                                                   & (IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                              >> 0xdU)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                               >> 0xcU)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xfU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xeU])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xdU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xcU]))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                               >> 0xcU)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xbU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xaU])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[9U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[8U])))))
                      : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                        >> 0xdU))) ? 
                         ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                         >> 0xcU)))
                           ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[7U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[6U])))
                           : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[5U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[4U]))))
                          : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                            >> 0xcU)))
                              ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[2U])))
                              : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0U])))))))) 
            & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__lv_storemask___05Fh14864)) 
           | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__lv_storemask___05Fh14864 
              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh35113 
                  & (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[4U])) 
                      << 0x3bU) | (((QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[3U])) 
                                    << 0x1bU) | ((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[2U])) 
                                                 >> 5U)))) 
                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__y___05Fh35114 
                    & (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[4U])) 
                        << 0x3bU) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[3U])) 
                                      << 0x1bU) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[2U])) 
                                                   >> 5U)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__baseoutput_rdvalue___05Fh15373 
        = ((0x80000000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U])
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__alu_result___05Fh14863 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__alu_result___05Fh14863)))
            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__alu_result___05Fh14863);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__rg_tlb_miss_D_IN 
        = (((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U]) 
            & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__rg_tlb_miss)) 
               | (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb_put_core_request_put[0U] 
                     >> 2U)))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_v_vpn_tag_0_83_BIT_97_84_85_OR_NOT_511_CON_ETC___05F_d355));
    __Vtemp2546[5U] = ((0xfe000U & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__NOT_put_core_request_put_BIT_2_52_54_AND_IF_wr_ETC___05F_d275)
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
           __Vtemp2546[5U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action_D_IN 
        = (1U & (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_1_CONCAT_rg_wEpoch_2_3_EQ_IF_ff_memo_ETC___05F_d89)) 
                  | ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action)) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_9_BITS_13_TO_12_0_EQ_rg_eEpoch_1_CONCA_ETC___05F_d64))) 
                 | ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U] 
                            >> 0xcU) & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                >> 2U))))
                     ? (3U != (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
                                     >> 0x10U))) : 
                    ((3U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73)) 
                     | ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U] 
                            >> 0xbU)) & (1U < (3U & 
                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U] 
                                                >> 1U))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_rg_eEpoch_1_CONCAT_rg_wEpoch_2_3_EQ_IF_ff_m_ETC___05F_d176 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_1_CONCAT_rg_wEpoch_2_3_EQ_IF_ff_memo_ETC___05F_d89)
            ? (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action)) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_9_BITS_13_TO_12_0_EQ_rg_eEpoch_1_CONCA_ETC___05F_d64))
                ? ((0xfffffffffffffffcULL & (((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                              << 0x22U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                << 2U))) 
                   | (QData)((IData)((2U | (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                                  >> 0x1eU))))))
                : ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U] 
                           >> 0xcU) & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                               >> 2U))))
                    ? ((3U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
                                     >> 0x10U))) ? 
                       (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))
                        : ((0xfffffffffffffffcULL & 
                            (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                              << 0x20U) | (0xfffffffffffffffcULL 
                                           & (QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U]))))) 
                           | (QData)((IData)((2U | 
                                              (1U & 
                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U]))))))
                    : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))))
            : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U]))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action_EN 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__CAN_FIRE_RL_process_instruction) 
           & (((((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action)) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_9_BITS_13_TO_12_0_EQ_rg_eEpoch_1_CONCA_ETC___05F_d64)) 
                & ((1U < (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__x___05Fh2661)) 
                   | (3U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                                    << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                                 >> 0xeU)))))) 
               | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action) 
                   | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_9_BITS_13_TO_12_0_EQ_rg_eEpoch_1_CONCA_ETC___05F_d64))) 
                  & ((3U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73)) 
                     | (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                >> 2U))))) | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_1_CONCAT_rg_wEpoch_2_3_EQ_IF_ff_memo_ETC___05F_d89))));
    __Vtemp2548[0U] = ((0xc0000000U & ((IData)(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_1_CONCAT_rg_wEpoch_2_3_EQ_IF_ff_memo_ETC___05F_d89)
                                                 ? 
                                                (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action)) 
                                                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_9_BITS_13_TO_12_0_EQ_rg_eEpoch_1_CONCA_ETC___05F_d64))
                                                  ? 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                                                        << 0x12U) 
                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                                          >> 0xeU))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                       << 2U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                         >> 0x1eU))))
                                                  : 
                                                 ((1U 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U] 
                                                       >> 0xcU) 
                                                      & (IData)(
                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                                 >> 2U))))
                                                   ? 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
                                                        >> 0x10U)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                          >> 0x1eU))))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                          >> 0x1eU)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                                >> 2U)))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                      << 0x22U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                         << 2U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                           >> 0x1eU)))))))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                     << 2U) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                       >> 0x1eU))))) 
                                       << 0x1eU)) | 
                       ((0x3fffc000U & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_1_CONCAT_rg_wEpoch_2_3_EQ_IF_ff_memo_ETC___05F_d89)
                                          ? (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action)) 
                                              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_9_BITS_13_TO_12_0_EQ_rg_eEpoch_1_CONCA_ETC___05F_d64))
                                              ? ((3U 
                                                  == 
                                                  (3U 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                                                       << 0x12U) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                                         >> 0xeU))))
                                                  ? 
                                                 (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
                                                  >> 0x10U)
                                                  : 
                                                 ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                                     >> 0xeU)))
                                              : ((1U 
                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U] 
                                                      >> 0xcU) 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                                >> 2U))))
                                                  ? 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
                                                       >> 0x10U)))
                                                   ? 
                                                  (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
                                                   >> 0x10U)
                                                   : 
                                                  ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                                      >> 0xeU)))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73))
                                                   ? 
                                                  ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                                      >> 0xeU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                               >> 2U)))
                                                    ? 
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
                                                    >> 0x10U)
                                                    : 
                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                                                     << 0x12U) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                                       >> 0xeU))))))
                                          : ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                                              << 0x12U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                                >> 0xeU))) 
                                        << 0xeU)) | 
                        (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__curr_epoch___05Fh1651) 
                          << 0xcU) | (0xfffU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_1_CONCAT_rg_wEpoch_2_3_EQ_IF_ff_memo_ETC___05F_d89)
                                                 ? 
                                                (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action)) 
                                                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_9_BITS_13_TO_12_0_EQ_rg_eEpoch_1_CONCA_ETC___05F_d64))
                                                  ? 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                                                        << 0x12U) 
                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                                          >> 0xeU))))
                                                   ? 
                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U]
                                                   : 
                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])
                                                  : 
                                                 ((1U 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U] 
                                                       >> 0xcU) 
                                                      & (IData)(
                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                                 >> 2U))))
                                                   ? 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
                                                        >> 0x10U)))
                                                    ? 
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U]
                                                    : 
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73))
                                                    ? 
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U]
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                                >> 2U)))
                                                     ? 
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U]
                                                     : 
                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U]))))
                                                 : 
                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])))));
    __Vtemp2548[1U] = ((0x3fffffffU & ((IData)(((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_1_CONCAT_rg_wEpoch_2_3_EQ_IF_ff_memo_ETC___05F_d89)
                                                 ? 
                                                (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action)) 
                                                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_9_BITS_13_TO_12_0_EQ_rg_eEpoch_1_CONCA_ETC___05F_d64))
                                                  ? 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                                                        << 0x12U) 
                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                                          >> 0xeU))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                       << 2U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                         >> 0x1eU))))
                                                  : 
                                                 ((1U 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U] 
                                                       >> 0xcU) 
                                                      & (IData)(
                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                                 >> 2U))))
                                                   ? 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
                                                        >> 0x10U)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                          >> 0x1eU))))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                          >> 0x1eU)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                                >> 2U)))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                      << 0x22U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                         << 2U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                           >> 0x1eU)))))))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                     << 2U) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                       >> 0x1eU))))) 
                                       >> 2U)) | (0xc0000000U 
                                                  & ((IData)(
                                                             (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_1_CONCAT_rg_wEpoch_2_3_EQ_IF_ff_memo_ETC___05F_d89)
                                                                ? 
                                                               (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action)) 
                                                                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_9_BITS_13_TO_12_0_EQ_rg_eEpoch_1_CONCA_ETC___05F_d64))
                                                                 ? 
                                                                ((3U 
                                                                  == 
                                                                  (3U 
                                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                                                                       << 0x12U) 
                                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                                                         >> 0xeU))))
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))
                                                                  : 
                                                                 (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                                   << 0x22U) 
                                                                  | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                                      << 2U) 
                                                                     | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                                        >> 0x1eU))))
                                                                 : 
                                                                ((1U 
                                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U] 
                                                                      >> 0xcU) 
                                                                     & (IData)(
                                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                                                >> 2U))))
                                                                  ? 
                                                                 ((3U 
                                                                   == 
                                                                   (3U 
                                                                    & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
                                                                       >> 0x10U)))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))
                                                                   : 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                                    << 0x22U) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                                       << 2U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                                         >> 0x1eU))))
                                                                  : 
                                                                 ((3U 
                                                                   == 
                                                                   (3U 
                                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                                    << 0x22U) 
                                                                   | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                                       << 2U) 
                                                                      | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                                         >> 0x1eU)))
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                                               >> 2U)))
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                                     << 0x22U) 
                                                                    | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                                        << 2U) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                                          >> 0x1eU)))))))
                                                                : 
                                                               (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                                 << 0x22U) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                                    << 2U) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                                      >> 0x1eU)))) 
                                                              >> 0x20U)) 
                                                     << 0x1eU)));
    __Vtemp2548[2U] = (0x3fffffffU & ((IData)((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_1_CONCAT_rg_wEpoch_2_3_EQ_IF_ff_memo_ETC___05F_d89)
                                                 ? 
                                                (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action)) 
                                                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_9_BITS_13_TO_12_0_EQ_rg_eEpoch_1_CONCA_ETC___05F_d64))
                                                  ? 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                                                        << 0x12U) 
                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                                          >> 0xeU))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                       << 2U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                         >> 0x1eU))))
                                                  : 
                                                 ((1U 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[2U] 
                                                       >> 0xcU) 
                                                      & (IData)(
                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                                 >> 2U))))
                                                   ? 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73 
                                                        >> 0x10U)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                          >> 0x1eU))))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d73))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                     << 0x22U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                        << 2U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                          >> 0x1eU)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_sbread_mv_csr_misa 
                                                                >> 2U)))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                      << 0x22U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                         << 2U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                           >> 0x1eU)))))))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                     << 2U) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                       >> 0x1eU)))) 
                                               >> 0x20U)) 
                                      >> 2U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_D_IN[0U] 
        = __Vtemp2548[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_D_IN[1U] 
        = __Vtemp2548[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_D_IN[2U] 
        = __Vtemp2548[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_dequeueing_whas 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__CAN_FIRE_RL_process_instruction) 
           & ((((3U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[1U] 
                               << 0x12U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev[0U] 
                                            >> 0xeU)))) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_action)) 
               | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_prev_9_BITS_13_TO_12_0_EQ_rg_eEpoch_1_CONCA_ETC___05F_d64))) 
              | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_1_CONCAT_rg_wEpoch_2_3_EQ_IF_ff_memo_ETC___05F_d89))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__tx_tostage2_w_ena_whas 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__CAN_FIRE_RL_process_instruction) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_1_CONCAT_rg_wEpoch_2_3_EQ_IF_ff_memo_ETC___05F_d89)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__NOT_rg_action_7_8_AND_rg_prev_9_BITS_13_TO_12___05FETC___05F_d205));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__x___05Fh4254 
        = ((0x200U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                      >> 3U)) | ((0x180U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                            << 4U)) 
                                 | ((0x40U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                              << 1U)) 
                                    | ((0x20U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                 << 3U)) 
                                       | (0x10U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                   >> 2U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_12_CONCAT_fn_decompress_ETC___05Fq1 
        = ((0x20U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                     >> 7U)) | (0x1fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                         >> 2U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_5_4_AND_fn_decompress_i_ETC___05F_d288 
        = (((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
               >> 5U) & (2U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))) 
             | ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                 >> 4U) & (2U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
            | ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                >> 3U) & (2U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
           | (6U == (7U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_10_AND_fn_decompress_in_ETC___05F_d277 
        = (((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
               >> 0xaU) & (2U == (0x7fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))) 
             | ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                 >> 9U) & (2U == (0x7fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
            | ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                >> 8U) & (2U == (0x7fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
           | (0x82U == (0xffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___ma_allocate_io_RL_rl_ram_check_EN_m_iobuffer_wget 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_wr_cache_enable_wget___05F13_37_OR_ff_from_tlb_ETC___05F_d574) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_EN_ma_allocate_io 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_wr_cache_enable_wget___05F13_37_OR_ff_from_tlb_ETC___05F_d574)) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_store 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_IF_ff_core_request_first___05F2_BITS_74_TO_73___05FETC___05F_d417)) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[0U] 
        = ((0xfffffffcU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__lv_word___05Fh14866) 
                           << 2U)) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__lv_index___05F_h15012));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[1U] 
        = ((3U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__lv_word___05Fh14866) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__lv_word___05Fh14866 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[2U] 
        = ((0xfffffffcU & ((0U != (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__b___05Fh13906) 
                                    << 3U) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__b___05Fh13894) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__b___05Fh13882) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__IF_v_lb_valid_0_read_AND_v_lb_tag_0_read___05F89_E_ETC___05F_d292)))))) 
                           << 2U)) | (3U & ((IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__lv_word___05Fh14866 
                                                     >> 0x20U)) 
                                            >> 0x1eU)));
    VL_EXTEND_WI(70,1, __Vtemp2553, (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__rg_wEpoch));
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
                ? __Vtemp2553[0U] : (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control) 
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
                ? __Vtemp2553[1U] : (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_exe_base_control) 
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
                                   << 6U)) | __Vtemp2553[2U])
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
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_pipe_s0s1_notEmpty_1_connect_ena 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__empty_reg) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_dequeueing_whas));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__CAN_FIRE_RL_ff_memory_response_dequeue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_dequeueing_whas) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff__DOT__empty_reg));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__CAN_FIRE_RL_ff_memory_response_enqueue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_mkConnectionGetPut_1) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_dequeueing_whas)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff__DOT__empty_reg)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_data_12 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_2__DOT__full_reg) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__tx_tostage2_w_ena_whas));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_s1_pipe1_connect_ena_data 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_pipe1__DOT__full_reg) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__tx_tostage2_w_ena_whas));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67 
        = ((0xfc0U & ((- (IData)((1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_12_CONCAT_fn_decompress_ETC___05Fq1) 
                                        >> 5U)))) << 6U)) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_12_CONCAT_fn_decompress_ETC___05Fq1));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_12_EQ_0b1000___05FETC___05F_d322 
        = (((8U == (0xfU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                            >> 0xcU))) & (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                            >> 6U) 
                                           & (2U == 
                                              (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))) 
                                          | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_5_4_AND_fn_decompress_i_ETC___05F_d288)))
            ? (0x33U | ((0x1f00000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                       << 0x12U)) | 
                        (0xf80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
            : ((0x9002U == (0xffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))
                ? 0x100073U : ((((0x13U == (0x1fU & 
                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                             >> 0xbU))) 
                                 & (2U == (0x7fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))) 
                                | ((9U == (0xfU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                   >> 0xcU))) 
                                   & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_10_AND_fn_decompress_in_ETC___05F_d277)))
                                ? (0xe7U | (0xf8000U 
                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                               << 8U)))
                                : (((9U == (0xfU & 
                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                             >> 0xcU))) 
                                    & (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                         >> 6U) & (2U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))) 
                                       | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_5_4_AND_fn_decompress_i_ETC___05F_d288)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))
                                    : (((6U == (7U 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                   >> 0xdU))) 
                                        & (2U == (3U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                                        ? (0x12023U 
                                           | (((0xc000000U 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                   << 0x13U)) 
                                               | (0x2000000U 
                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                     << 0xdU))) 
                                              | ((0x1f00000U 
                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                     << 0x12U)) 
                                                 | (0xe00U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))
                                        : (((7U == 
                                             (7U & 
                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                               >> 0xdU))) 
                                            & (2U == 
                                               (3U 
                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                                            ? (0x13023U 
                                               | (((0x1c000000U 
                                                    & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                       << 0x13U)) 
                                                   | (0x2000000U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                         << 0xdU))) 
                                                  | ((0x1f00000U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                         << 0x12U)) 
                                                     | (0xc00U 
                                                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))
                                            : (0xffffU 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__MUX_v_iobuff_commit_0_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_EN_ma_allocate_io) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_tail)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__MUX_v_iobuff_commit_1_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_EN_ma_allocate_io) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_tail));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_ETC___05F_d393 
        = ((0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_hitmask___05Fh37878)) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[2U] 
              >> 2U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_ETC___05F_d647 
        = (1U & ((((0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_hitmask___05Fh37878)) 
                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[2U] 
                      >> 2U)) | (0x80000000U > (IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                        >> 9U)))) 
                 | (((2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                    << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                 >> 9U)))) 
                     & (7U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                           >> 1U))))) 
                    & ((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_reservation_address[2U]) 
                       | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_rg_reservation_address_07_BIT_64_08_THEN_rg_ETC___05F_d312))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_2_rg_output_0_port1___05Fread___05F13_EQ___05FETC___05F_d552 
        = (((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303)) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_IF_ff_core_request_first___05F2_BITS_74_TO_73___05FETC___05F_d417)) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
            & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[2U] 
                  >> 2U))) & (0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_hitmask___05Fh37878)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_2_rg_output_0_port1___05Fread___05F13_EQ___05FETC___05F_d558 
        = (((((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303)) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_IF_ff_core_request_first___05F2_BITS_74_TO_73___05FETC___05F_d417)) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
            & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[2U] 
                  >> 2U))) & (0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_hitmask___05Fh37878)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_2_rg_output_0_port1___05Fread___05F13_EQ___05FETC___05F_d560 
        = (((((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303)) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_IF_ff_core_request_first___05F2_BITS_74_TO_73___05FETC___05F_d417)) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
            & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[2U] 
                  >> 2U))) & (0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_hitmask___05Fh37878)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_2_rg_output_0_port1___05Fread___05F13_EQ___05FETC___05F_d562 
        = (((((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303)) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_IF_ff_core_request_first___05F2_BITS_74_TO_73___05FETC___05F_d417)) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
            & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[2U] 
                  >> 2U))) & (0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_hitmask___05Fh37878)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_EQ___05FETC___05F_d675 
        = ((((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_hitmask___05Fh37878)) 
               & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[2U] 
                     >> 2U))) & (~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__fn_pmp_lookup___05F_d407) 
                                    >> 7U))) & (~ (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                           >> 8U)))) 
            & (0x80000000U <= (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                       >> 9U)))) & 
           (((2U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                            << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 9U)))) 
             | (7U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                 << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                              >> 1U))))) 
            | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_reservation_address[2U] 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_rg_reservation_address_07_BIT_64_08_THEN_rg_ETC___05F_d312))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_storebuffer_ma_allocate_line_1___05FSEL_1 
        = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_IF_ff_core_request_first___05F2_BITS_74_TO_73___05FETC___05F_d417)) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
            & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[2U] 
                  >> 2U))) & (0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_hitmask___05Fh37878)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__word___05Fh40282 
        = (((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[2U])
             ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[2U])) 
                 << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[1U])) 
                               << 0x1eU) | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[0U])) 
                                            >> 2U)))
             : ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                 ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                     ? ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                       >> 0xeU))) ? 
                        ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                        >> 0xdU))) ? 
                         ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                         >> 0xcU)))
                           ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xfU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xeU])))
                           : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xdU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xcU]))))
                          : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                            >> 0xcU)))
                              ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xbU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xaU])))
                              : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[8U])))))
                         : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                           >> 0xdU)))
                             ? ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                               >> 0xcU)))
                                 ? (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[6U])))
                                 : (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[4U]))))
                             : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                               >> 0xcU)))
                                 ? (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[2U])))
                                 : (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0U]))))))
                     : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                       >> 0xeU))) ? 
                        ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                        >> 0xdU))) ? 
                         ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                         >> 0xcU)))
                           ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xfU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xeU])))
                           : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xdU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xcU]))))
                          : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                            >> 0xcU)))
                              ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xbU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xaU])))
                              : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[8U])))))
                         : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                           >> 0xdU)))
                             ? ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                               >> 0xcU)))
                                 ? (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[6U])))
                                 : (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[4U]))))
                             : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                               >> 0xcU)))
                                 ? (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[2U])))
                                 : (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0U])))))))
                 : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                     ? ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                       >> 0xeU))) ? 
                        ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                        >> 0xdU))) ? 
                         ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                         >> 0xcU)))
                           ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xfU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xeU])))
                           : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xdU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xcU]))))
                          : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                            >> 0xcU)))
                              ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xbU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xaU])))
                              : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[8U])))))
                         : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                           >> 0xdU)))
                             ? ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                               >> 0xcU)))
                                 ? (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[6U])))
                                 : (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[4U]))))
                             : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                               >> 0xcU)))
                                 ? (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[2U])))
                                 : (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0U]))))))
                     : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                       >> 0xeU))) ? 
                        ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                        >> 0xdU))) ? 
                         ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                         >> 0xcU)))
                           ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xfU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xeU])))
                           : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xdU])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xcU]))))
                          : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                            >> 0xcU)))
                              ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xbU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xaU])))
                              : (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[8U])))))
                         : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                           >> 0xdU)))
                             ? ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                               >> 0xcU)))
                                 ? (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[6U])))
                                 : (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[4U]))))
                             : ((1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                               >> 0xcU)))
                                 ? (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[2U])))
                                 : (((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0U]))))))))) 
           >> (0x38U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                 >> 9U)) << 3U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_ETC___05F_d597 
        = (1U & ((((((0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_hitmask___05Fh37878)) 
                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[2U] 
                        >> 2U)) | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__fn_pmp_lookup___05F_d407) 
                                   >> 7U)) | (IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                      >> 8U))) 
                  | (0x80000000U > (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                            >> 9U)))) 
                 | (((2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                    << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                 >> 9U)))) 
                     & (7U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                           >> 1U))))) 
                    & ((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_reservation_address[2U]) 
                       | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_rg_reservation_address_07_BIT_64_08_THEN_rg_ETC___05F_d312))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_store_lbindex 
        = (3U & ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[2U])
                  ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[0U]
                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_tail)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_13_EQ_0b10_2___05FETC___05F_d325 
        = ((((2U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                           >> 0xdU))) & (((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                             >> 0xbU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                               >> 0xaU)) 
                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                              >> 9U)) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                             >> 8U)) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                            >> 7U))) 
            & (2U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
            ? (0x12003U | (((0xc000000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                           << 0x18U)) 
                            | ((0x2000000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                              << 0xdU)) 
                               | (0x1c00000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                << 0x12U)))) 
                           | (0xf80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
            : (((3U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                              >> 0xdU))) & (2U == (3U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                ? (0x13003U | (((0x1c000000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                << 0x18U)) 
                                | ((0x2000000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                  << 0xdU)) 
                                   | (0x1800000U & 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                       << 0x12U)))) 
                               | (0xf80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                : ((((0x11U == (0x1fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                         >> 0xbU))) 
                     & (2U == (0x7fU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))) 
                    | ((8U == (0xfU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                       >> 0xcU))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_10_AND_fn_decompress_in_ETC___05F_d277)))
                    ? (0x67U | (0xf8000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                            << 8U)))
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_12_EQ_0b1000___05FETC___05F_d322)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_v_reg_dirty_0_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_2_rg_output_0_port1___05Fread___05F13_EQ___05FETC___05F_d552));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_v_reg_dirty_1_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_2_rg_output_0_port1___05Fread___05F13_EQ___05FETC___05F_d558));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_v_reg_dirty_2_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_2_rg_output_0_port1___05Fread___05F13_EQ___05FETC___05F_d560));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_v_reg_dirty_3_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_2_rg_output_0_port1___05Fread___05F13_EQ___05FETC___05F_d562));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_first_write_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_EQ___05FETC___05F_d675));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_storebuffer_ma_allocate_line_1___05FSEL_1) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_address 
            = (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                       >> 9U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[0U] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0U])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[1U] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[1U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[1U])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[1U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[1U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[2U] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[2U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[2U])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[2U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[2U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[3U] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[3U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[3U])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[3U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[3U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[4U] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[4U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[4U])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[4U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[4U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[5U] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[5U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[5U])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[5U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[5U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[6U] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[6U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[6U])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[6U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[6U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[7U] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[7U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[7U])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[7U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[7U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[8U] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[8U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[8U])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[8U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[8U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[9U] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[9U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[9U])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[9U]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[9U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[0xaU] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xaU]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xaU])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xaU]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xaU]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[0xbU] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xbU]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xbU])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xbU]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xbU]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[0xcU] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xcU]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xcU])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xcU]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xcU]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[0xdU] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xdU]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xdU])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xdU]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xdU]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[0xeU] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xeU]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xeU])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xeU]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xeU]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[0xfU] 
            = ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xfU]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xfU])
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wayindex___05Fh40303))
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xfU]
                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xfU]));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_address 
            = ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                << 0x1cU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                             >> 4U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[0U] 
            = (IData)(((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                        ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                            << 0x3eU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                            >> 2U)))
                        : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_0));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[1U] 
            = (IData)((((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                         ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                             << 0x3eU) | (((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                             >> 2U)))
                         : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_0) 
                       >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[2U] 
            = (IData)(((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                        ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                            << 0x3eU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                            >> 2U)))
                        : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_1));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[3U] 
            = (IData)((((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                         ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                             << 0x3eU) | (((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                             >> 2U)))
                         : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_1) 
                       >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[4U] 
            = (IData)(((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                        ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                            << 0x3eU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                            >> 2U)))
                        : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_2));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[5U] 
            = (IData)((((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                         ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                             << 0x3eU) | (((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                             >> 2U)))
                         : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_2) 
                       >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[6U] 
            = (IData)(((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                        ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                            << 0x3eU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                            >> 2U)))
                        : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_3));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[7U] 
            = (IData)((((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                         ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                             << 0x3eU) | (((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                             >> 2U)))
                         : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_3) 
                       >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[8U] 
            = (IData)(((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                        ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                            << 0x3eU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                            >> 2U)))
                        : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_4));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[9U] 
            = (IData)((((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                         ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                             << 0x3eU) | (((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                             >> 2U)))
                         : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_4) 
                       >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[0xaU] 
            = (IData)(((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                        ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                            << 0x3eU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                            >> 2U)))
                        : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_5));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[0xbU] 
            = (IData)((((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                         ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                             << 0x3eU) | (((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                             >> 2U)))
                         : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_5) 
                       >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[0xcU] 
            = (IData)(((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                        ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                            << 0x3eU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                            >> 2U)))
                        : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_6));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[0xdU] 
            = (IData)((((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                         ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                             << 0x3eU) | (((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                             >> 2U)))
                         : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_6) 
                       >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[0xeU] 
            = (IData)(((7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                        ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                            << 0x3eU) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                            >> 2U)))
                        : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_7));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_line_line[0xfU] 
            = (IData)((((7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
                         ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                             << 0x3eU) | (((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                                           << 0x1eU) 
                                          | ((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                             >> 2U)))
                         : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_7) 
                       >> 0x20U));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rdata___05Fh40211 
        = ((((2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                            << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 9U)))) 
             & (7U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                 << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                              >> 1U))))) 
            & ((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_reservation_address[2U]) 
               | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_rg_reservation_address_07_BIT_64_08_THEN_rg_ETC___05F_d312))))
            ? 1ULL : (((((2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                        << 0x17U) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                        >> 9U)))) & 
                         (7U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                             >> 1U))))) 
                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_reservation_address[2U]) 
                       & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_rg_reservation_address_07_BIT_64_08_THEN_rg_ETC___05F_d312))
                       ? 0ULL : ((1U & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__fn_pmp_lookup___05F_d407) 
                                          >> 7U) | (IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                            >> 8U))) 
                                        | (0x80000000U 
                                           > (IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                      >> 9U)))))
                                  ? (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[4U])) 
                                      << 0x33U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U])) 
                                                    << 0x13U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                                      >> 0xdU)))
                                  : ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__word___05Fh40282 
                                      & ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])
                                          ? ((0x40U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])
                                              ? 0xffffffffffffffffULL
                                              : 0xffffffffULL)
                                          : ((0x40U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])
                                              ? 0xffffULL
                                              : 0xffULL))) 
                                     | (((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])
                                          ? ((0x40U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])
                                              ? 0ULL
                                              : 0xffffffff00000000ULL)
                                          : ((0x40U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])
                                              ? 0xffffffffffff0000ULL
                                              : 0xffffffffffffff00ULL)) 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & (((0U 
                                                                   == 
                                                                   (3U 
                                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                                                        << 0x1aU) 
                                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                                          >> 6U))))
                                                                   ? (IData)(
                                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__word___05Fh40282 
                                                                              >> 7U))
                                                                   : 
                                                                  ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                                                         << 0x1aU) 
                                                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                                           >> 6U))))
                                                                    ? (IData)(
                                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__word___05Fh40282 
                                                                               >> 0xfU))
                                                                    : (IData)(
                                                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__word___05Fh40282 
                                                                               >> 0x1fU)))) 
                                                                 & (~ 
                                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                                     >> 8U))))))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_meta_0_write_1___05FVAL_1[0U] 
        = ((0xfffffffcU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__storemask___05Fh11065) 
                           << 2U)) | (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                             << 0x1aU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                               >> 6U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_meta_0_write_1___05FVAL_1[1U] 
        = ((3U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__storemask___05Fh11065) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__storemask___05Fh11065 
                                                        >> 0x20U)) 
                                               << 2U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_meta_0_write_1___05FVAL_1[2U] 
        = ((0xffffffe0U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh13462) 
                           << 5U)) | ((0x10U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 7U)) 
                                      | ((0xfffffffcU 
                                          & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_store_lbindex) 
                                             << 2U)) 
                                         | (3U & ((IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__storemask___05Fh11065 
                                                           >> 0x20U)) 
                                                  >> 0x1eU)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_meta_0_write_1___05FVAL_1[3U] 
        = ((0x1fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh13462) 
                     >> 0x1bU)) | (0xffffffe0U & ((IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh13462 
                                                           >> 0x20U)) 
                                                  << 5U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_meta_0_write_1___05FVAL_1[4U] 
        = ((0x1fU & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh13462 
                              >> 0x20U)) >> 0x1bU)) 
           | (0xffffffe0U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                      >> 9U)) << 5U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_meta_0_write_1___05FVAL_1[5U] 
        = (0x1fU & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                             >> 9U)) >> 0x1bU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6646 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_store) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail))) 
            & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_store_lbindex))) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_sbpending_0_0));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6648 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_store) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail)) 
            & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_store_lbindex))) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_sbpending_0_1));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6650 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_store) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail))) 
            & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_store_lbindex))) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_sbpending_1_0));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6652 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_store) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail)) 
            & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_store_lbindex))) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_sbpending_1_1));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6654 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_store) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail))) 
            & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_store_lbindex))) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_sbpending_2_0));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6656 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_store) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail)) 
            & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_store_lbindex))) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_sbpending_2_1));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6658 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_store) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail))) 
            & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_store_lbindex))) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_sbpending_3_0));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6660 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_store) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail)) 
            & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_allocate_store_lbindex))) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_sbpending_3_1));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_13_EQ_0b100_8_ETC___05F_d336 
        = ((((4U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                           >> 0xdU))) & (2U == (3U 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                   >> 0xaU)))) 
            & (1U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
            ? (0x47413U | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                            << 0x14U) | ((0x38000U 
                                          & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                             << 8U)) 
                                         | (0x380U 
                                            & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))
            : ((((0x23U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                     >> 0xaU))) & (0U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                       >> 5U)))) 
                & (1U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                ? (0x40840433U | ((0x700000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                << 0x12U)) 
                                  | ((0x38000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                  << 8U)) 
                                     | (0x380U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))
                : ((((0x23U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                         >> 0xaU))) 
                     & (1U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                     >> 5U)))) & (1U 
                                                  == 
                                                  (3U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                    ? (0x844433U | ((0x700000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                  << 0x12U)) 
                                    | ((0x38000U & 
                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                         << 8U)) | 
                                       (0x380U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))
                    : ((((0x23U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                             >> 0xaU))) 
                         & (2U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                         >> 5U)))) 
                        & (1U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                        ? (0x846433U | ((0x700000U 
                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))
                        : ((((0x23U == (0x3fU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                 >> 0xaU))) 
                             & (3U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                             >> 5U)))) 
                            & (1U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                            ? (0x847433U | ((0x700000U 
                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                << 0x12U)) 
                                            | ((0x38000U 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                   << 8U)) 
                                               | (0x380U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))
                            : ((((0x27U == (0x3fU & 
                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                             >> 0xaU))) 
                                 & (0U == (3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                 >> 5U)))) 
                                & (1U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                                ? (0x4084043bU | ((0x700000U 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                      << 0x12U)) 
                                                  | ((0x38000U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                         << 8U)) 
                                                     | (0x380U 
                                                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))
                                : ((((0x27U == (0x3fU 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                   >> 0xaU))) 
                                     & (1U == (3U & 
                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                >> 5U)))) 
                                    & (1U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                                    ? (0x84043bU | 
                                       ((0x700000U 
                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))
                                    : (((5U == (7U 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                   >> 0xdU))) 
                                        & (1U == (3U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                                        ? (0x6fU | 
                                           ((0x80000000U 
                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                << 0x13U)) 
                                            | ((0x40000000U 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                   << 0x16U)) 
                                               | ((0x30000000U 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                      << 0x13U)) 
                                                  | ((0x8000000U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                         << 0x15U)) 
                                                     | ((0x4000000U 
                                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                            << 0x13U)) 
                                                        | ((0x2000000U 
                                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                               << 0x17U)) 
                                                           | ((0x1000000U 
                                                               & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                  << 0xdU)) 
                                                              | ((0xe00000U 
                                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                     << 0x12U)) 
                                                                 | ((0x100000U 
                                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                        << 8U)) 
                                                                    | ((0x80000U 
                                                                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                           << 7U)) 
                                                                       | ((0x40000U 
                                                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                              << 6U)) 
                                                                          | ((0x20000U 
                                                                              & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                                << 5U)) 
                                                                             | ((0x10000U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                                << 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                                << 3U)) 
                                                                                | ((0x4000U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                                << 2U)) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                                << 1U)) 
                                                                                | (0x1000U 
                                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))))))))))))))))
                                        : (((6U == 
                                             (7U & 
                                              (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                               >> 0xdU))) 
                                            & (1U == 
                                               (3U 
                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                                            ? (0x40063U 
                                               | ((0x80000000U 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                      << 0x13U)) 
                                                  | ((0x40000000U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                         << 0x12U)) 
                                                     | ((0x20000000U 
                                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                            << 0x11U)) 
                                                        | ((0x10000000U 
                                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                               << 0x10U)) 
                                                           | ((0xc000000U 
                                                               & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                  << 0x15U)) 
                                                              | ((0x2000000U 
                                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                     << 0x17U)) 
                                                                 | ((0x38000U 
                                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                        << 8U)) 
                                                                    | ((0xc00U 
                                                                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617) 
                                                                       | ((0x300U 
                                                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                              << 5U)) 
                                                                          | (0x80U 
                                                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                                >> 5U))))))))))))
                                            : (((7U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                     >> 0xdU))) 
                                                & (1U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                                                ? (0x41063U 
                                                   | ((0x80000000U 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                          << 0x13U)) 
                                                      | ((0x40000000U 
                                                          & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                             << 0x12U)) 
                                                         | ((0x20000000U 
                                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                << 0x11U)) 
                                                            | ((0x10000000U 
                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                   << 0x10U)) 
                                                               | ((0xc000000U 
                                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                      << 0x15U)) 
                                                                  | ((0x2000000U 
                                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                         << 0x17U)) 
                                                                     | ((0x38000U 
                                                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                            << 8U)) 
                                                                        | ((0xc00U 
                                                                            & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617) 
                                                                           | ((0x300U 
                                                                               & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                                << 5U)) 
                                                                              | (0x80U 
                                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                                >> 5U))))))))))))
                                                : (
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                         >> 0xdU))) 
                                                    & (2U 
                                                       == 
                                                       (3U 
                                                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                                                    ? 
                                                   (0x1013U 
                                                    | ((0x2000000U 
                                                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                           << 0xdU)) 
                                                       | ((0x1f00000U 
                                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                              << 0x12U)) 
                                                          | ((0xf8000U 
                                                              & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                 << 8U)) 
                                                             | (0xf80U 
                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))))
                                                    : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_13_EQ_0b10_2___05FETC___05F_d325)))))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_err_D_IN 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_first_write_1___05FSEL_2)) 
                 & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_err) 
                    | vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh36392 
        = ((((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
              ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6660)
                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6656))
              : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6652)
                  : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6648))) 
            << 1U) | ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                       ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                           ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6658)
                           : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6654))
                       : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                           ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6650)
                           : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x_port1___05Fread___05Fh6646))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_7_3_EQ_0b1110_ETC___05F_d340 
        = ((((0xe2U == (0x1ffU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                  >> 7U))) & (1U == 
                                              (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))) 
            | ((3U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                             >> 0xdU))) & (((5U == 
                                             (0x3fU 
                                              & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                 >> 6U))) 
                                            & (1U == 
                                               (3U 
                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))) 
                                           | ((2U == 
                                               (0x1fU 
                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                   >> 7U))) 
                                              & (((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                     >> 5U) 
                                                    & (1U 
                                                       == 
                                                       (3U 
                                                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))) 
                                                   | ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                       >> 4U) 
                                                      & (1U 
                                                         == 
                                                         (3U 
                                                          & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                  | ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                      >> 3U) 
                                                     & (1U 
                                                        == 
                                                        (3U 
                                                         & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                 | (5U 
                                                    == 
                                                    (7U 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))))))
            ? (0x10113U | ((0xc0000000U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__x___05Fh4254) 
                                                          >> 9U)))) 
                                           << 0x1eU)) 
                           | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__x___05Fh4254) 
                              << 0x14U))) : (((((((
                                                   (0xfU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                        >> 0xbU))) 
                                                   & (1U 
                                                      == 
                                                      (3U 
                                                       & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))) 
                                                  | (((7U 
                                                       == 
                                                       (0xfU 
                                                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                           >> 0xcU))) 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                         >> 0xaU)) 
                                                     & (1U 
                                                        == 
                                                        (3U 
                                                         & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                 | (((7U 
                                                      == 
                                                      (0xfU 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                          >> 0xcU))) 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                        >> 9U)) 
                                                    & (1U 
                                                       == 
                                                       (3U 
                                                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                | (((7U 
                                                     == 
                                                     (0xfU 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                         >> 0xcU))) 
                                                    & (~ 
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                        >> 8U))) 
                                                   & (1U 
                                                      == 
                                                      (3U 
                                                       & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                               | (((7U 
                                                    == 
                                                    (0xfU 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                        >> 0xcU))) 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                      >> 7U)) 
                                                  & (1U 
                                                     == 
                                                     (3U 
                                                      & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                      >> 0xdU))) 
                                                 & (((((((((((((((((((((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                          >> 0xbU) 
                                                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                            >> 6U)) 
                                                                        & (1U 
                                                                           == 
                                                                           (3U 
                                                                            & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))) 
                                                                       | (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                            >> 0xaU) 
                                                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                              >> 6U)) 
                                                                          & (1U 
                                                                             == 
                                                                             (3U 
                                                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                                      | (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                           >> 9U) 
                                                                          & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                             >> 6U)) 
                                                                         & (1U 
                                                                            == 
                                                                            (3U 
                                                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                                     | (((~ 
                                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                           >> 8U)) 
                                                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                            >> 6U)) 
                                                                        & (1U 
                                                                           == 
                                                                           (3U 
                                                                            & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                                    | ((3U 
                                                                        == 
                                                                        (3U 
                                                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                            >> 6U))) 
                                                                       & (1U 
                                                                          == 
                                                                          (3U 
                                                                           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                                   | (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                        >> 0xbU) 
                                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                          >> 5U)) 
                                                                      & (1U 
                                                                         == 
                                                                         (3U 
                                                                          & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                                  | (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                       >> 0xaU) 
                                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                         >> 5U)) 
                                                                     & (1U 
                                                                        == 
                                                                        (3U 
                                                                         & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                                 | (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                      >> 9U) 
                                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                        >> 5U)) 
                                                                    & (1U 
                                                                       == 
                                                                       (3U 
                                                                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                                | (((~ 
                                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                      >> 8U)) 
                                                                    & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                       >> 5U)) 
                                                                   & (1U 
                                                                      == 
                                                                      (3U 
                                                                       & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                               | (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                    >> 7U) 
                                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                      >> 5U)) 
                                                                  & (1U 
                                                                     == 
                                                                     (3U 
                                                                      & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                              | (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                   >> 0xbU) 
                                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                     >> 4U)) 
                                                                 & (1U 
                                                                    == 
                                                                    (3U 
                                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                             | (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                  >> 0xaU) 
                                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                    >> 4U)) 
                                                                & (1U 
                                                                   == 
                                                                   (3U 
                                                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                            | (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                 >> 9U) 
                                                                & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                   >> 4U)) 
                                                               & (1U 
                                                                  == 
                                                                  (3U 
                                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                           | (((~ 
                                                                (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                 >> 8U)) 
                                                               & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                  >> 4U)) 
                                                              & (1U 
                                                                 == 
                                                                 (3U 
                                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                          | (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                               >> 7U) 
                                                              & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                 >> 4U)) 
                                                             & (1U 
                                                                == 
                                                                (3U 
                                                                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                         | (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                              >> 0xbU) 
                                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                >> 3U)) 
                                                            & (1U 
                                                               == 
                                                               (3U 
                                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                        | (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                             >> 0xaU) 
                                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                               >> 3U)) 
                                                           & (1U 
                                                              == 
                                                              (3U 
                                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                       | (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                            >> 9U) 
                                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                              >> 3U)) 
                                                          & (1U 
                                                             == 
                                                             (3U 
                                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                      | (((~ 
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                            >> 8U)) 
                                                          & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                             >> 3U)) 
                                                         & (1U 
                                                            == 
                                                            (3U 
                                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                     | (((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                          >> 7U) 
                                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                            >> 3U)) 
                                                        & (1U 
                                                           == 
                                                           (3U 
                                                            & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))) 
                                                    | ((((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                            >> 0xbU) 
                                                           | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                              >> 0xaU)) 
                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                             >> 9U)) 
                                                         | (~ 
                                                            (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                             >> 8U))) 
                                                        | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                           >> 7U)) 
                                                       & (5U 
                                                          == 
                                                          (7U 
                                                           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))))
                                              ? (0x37U 
                                                 | ((0xfffc0000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_12_CONCAT_fn_decompress_ETC___05Fq1) 
                                                                       >> 5U)))) 
                                                        << 0x12U)) 
                                                    | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_12_CONCAT_fn_decompress_ETC___05Fq1) 
                                                        << 0xcU) 
                                                       | (0xf80U 
                                                          & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))
                                              : (((
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                        >> 0xdU))) 
                                                   & (0U 
                                                      == 
                                                      (3U 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                          >> 0xaU)))) 
                                                  & (1U 
                                                     == 
                                                     (3U 
                                                      & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                                                  ? 
                                                 (0x45413U 
                                                  | ((0x2000000U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                         << 0xdU)) 
                                                     | ((0x1f00000U 
                                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                            << 0x12U)) 
                                                        | ((0x38000U 
                                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                               << 8U)) 
                                                           | (0x380U 
                                                              & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))))
                                                  : 
                                                 ((((4U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                         >> 0xdU))) 
                                                    & (1U 
                                                       == 
                                                       (3U 
                                                        & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                           >> 0xaU)))) 
                                                   & (1U 
                                                      == 
                                                      (3U 
                                                       & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                                                   ? 
                                                  (0x40045413U 
                                                   | ((0x2000000U 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                          << 0xdU)) 
                                                      | ((0x1f00000U 
                                                          & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                             << 0x12U)) 
                                                         | ((0x38000U 
                                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                                << 8U)) 
                                                            | (0x380U 
                                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))))
                                                   : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_13_EQ_0b100_8_ETC___05F_d336))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U] 
        = (((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
             ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                 ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_tag_3
                 : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_tag_2)
             : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                 ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_tag_1
                 : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_tag_0)) 
           << 6U);
    if ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[2U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[1U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[1U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[3U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[2U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[2U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[4U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[3U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[3U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[5U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[4U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[4U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[6U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[5U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[5U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[7U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[6U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[6U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[8U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[7U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[7U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[9U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[8U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[8U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0xaU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[9U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[9U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0xbU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xaU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xaU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0xcU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xbU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xbU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0xdU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xcU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xcU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0xeU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xdU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xdU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0xfU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xeU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xeU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0x10U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_3[0xfU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_2[0xfU]);
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[2U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[1U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[1U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[3U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[2U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[2U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[4U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[3U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[3U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[5U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[4U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[4U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[6U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[5U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[5U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[7U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[6U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[6U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[8U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[7U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[7U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[9U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[8U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[8U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0xaU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[9U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[9U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0xbU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xaU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xaU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0xcU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xbU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xbU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0xdU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xcU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xcU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0xeU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xdU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xdU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0xfU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xeU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xeU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0x10U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_lb_head))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_1[0xfU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_line_0[0xfU]);
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0x11U] 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh36392)) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_lb_valid_0_read_v_lb_valid_1_read_v___05FETC___05F_d527));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_13_EQ_0b111_7_ETC___05F_d344 
        = (((7U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                          >> 0xdU))) & (0U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
            ? (0x843023U | (((0xc000000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                            << 0x15U)) 
                             | (0x2000000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                              << 0xdU))) 
                            | ((0x700000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                             << 0x12U)) 
                               | ((0x38000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                               << 8U)) 
                                  | (0xc00U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))))
            : (((0U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                              >> 0xdU))) & (1U == (3U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                ? (0x13U | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                             << 0x14U) | ((0xf8000U 
                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                              << 8U)) 
                                          | (0xf80U 
                                             & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))
                : ((((1U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                   >> 0xdU))) & (((
                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                     >> 0xbU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                       >> 0xaU)) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                      >> 9U)) 
                                                  | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                     >> 8U)) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                    >> 7U))) 
                    & (1U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                    ? (0x1bU | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                 << 0x14U) | ((0xf8000U 
                                               & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                  << 8U)) 
                                              | (0xf80U 
                                                 & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))
                    : (((2U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                      >> 0xdU))) & 
                        (1U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                        ? (0x13U | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                     << 0x14U) | (0xf80U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                        : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_7_3_EQ_0b1110_ETC___05F_d340))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT_____05Fduses1038 
        = (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction)) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__empty_reg)) 
           & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_recent_req) 
              == (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
                            << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U] 
                                         >> 6U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__SEL_ARR_replacement_v_count_0_70_replacement_v_ETC___05F_d935 
        = ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                    ? ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                        ? ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_63)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_62))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_61)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_60)))
                        : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_59)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_58))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_57)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_56))))
                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                        ? ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_55)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_54))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_53)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_52)))
                        : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_51)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_50))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_49)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_48)))))
                : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                    ? ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                        ? ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_47)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_46))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_45)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_44)))
                        : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_43)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_42))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_41)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_40))))
                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                        ? ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_39)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_38))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_37)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_36)))
                        : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_35)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_34))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_33)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_32))))))
            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                ? ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                    ? ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                        ? ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_31)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_30))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_29)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_28)))
                        : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_27)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_26))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_25)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_24))))
                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                        ? ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_23)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_22))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_21)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_20)))
                        : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_19)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_18))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_17)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_16)))))
                : ((0x200U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                    ? ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                        ? ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_15)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_14))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_13)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_12)))
                        : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_11)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_10))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_9)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_8))))
                    : ((0x100U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                        ? ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_7)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_6))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_5)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_4)))
                        : ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_3)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_2))
                            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_1)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_0)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0_7_BIT_m_storebuffer_mv_release_h_ETC___05F_d856 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
                                       << 0x1aU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U] 
                                       >> 6U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1_8_BIT_m_storebuffer_mv_release_h_ETC___05F_d855 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
                                       << 0x1aU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U] 
                                       >> 6U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2_9_BIT_m_storebuffer_mv_release_h_ETC___05F_d854 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
                                       << 0x1aU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U] 
                                       >> 6U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_0_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d863 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_0 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
                                       << 0x1aU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U] 
                                       >> 6U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_1_1_BIT_m_storebuffer_mv_release_h_ETC___05F_d862 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_1 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
                                       << 0x1aU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U] 
                                       >> 6U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_2_2_BIT_m_storebuffer_mv_release_h_ETC___05F_d861 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_2 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
                                       << 0x1aU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U] 
                                       >> 6U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_3_3_BIT_m_storebuffer_mv_release_h_ETC___05F_d860 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_3 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
                                       << 0x1aU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U] 
                                       >> 6U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d853 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
                                       << 0x1aU) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U] 
                                       >> 6U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_store_release 
        = (1U & ((((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0x11U] 
                      & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_line_full) 
                           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_sb_full)) 
                          | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_stall)) 
                         | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__empty_reg)))) 
                     & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_line_empty))) 
                    & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_eviction_required))) 
                   & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_performing_replay))) 
                  & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fill_release))) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_EN_receive_core_req_put))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05F_1___05Fh4788 
        = ((((1U == (0xfU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                             >> 0xcU))) & (0U == (3U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))) 
            | (((0U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                              >> 0xdU))) & (((((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                  >> 0xbU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                    >> 0xaU)) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                   >> 9U)) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                  >> 8U)) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                 >> 7U)) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                >> 6U)) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                               >> 5U))) 
               & (0U == (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617))))
            ? (0x10413U | (((0x3c000000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                            << 0x13U)) 
                            | ((0x3000000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                              << 0xdU)) 
                               | ((0x800000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                << 0x12U)) 
                                  | (0x400000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                  << 0x10U))))) 
                           | (0x380U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                        << 5U)))) : 
           (((2U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                           >> 0xdU))) & (0U == (3U 
                                                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
             ? (0x42403U | (((0x4000000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                            << 0x15U)) 
                             | ((0x3800000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                               << 0xdU)) 
                                | (0x400000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                << 0x10U)))) 
                            | ((0x38000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                            << 8U)) 
                               | (0x380U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                            << 5U)))))
             : (((3U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                               >> 0xdU))) & (0U == 
                                             (3U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                 ? (0x43403U | (((0xc000000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                << 0x15U)) 
                                 | (0x3800000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                  << 0xdU))) 
                                | ((0x38000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                << 8U)) 
                                   | (0x380U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                << 5U)))))
                 : (((6U == (7U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                   >> 0xdU))) & (0U 
                                                 == 
                                                 (3U 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617)))
                     ? (0x842023U | (((0x4000000U & 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                        << 0x15U)) 
                                      | (0x2000000U 
                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                            << 0xdU))) 
                                     | ((0x700000U 
                                         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                               << 8U)) 
                                           | ((0xc00U 
                                               & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617) 
                                              | (0x200U 
                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617 
                                                    << 3U)))))))
                     : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_13_EQ_0b111_7_ETC___05F_d344))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_3_3_BIT_m_storebuffer_mv_release_h_ETC___05F_d860) 
            << 3U) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_2_2_BIT_m_storebuffer_mv_release_h_ETC___05F_d861) 
                       << 2U) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_1_1_BIT_m_storebuffer_mv_release_h_ETC___05F_d862) 
                                  << 1U) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_0_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d863))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_valid___05Fh75581 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d853) 
            << 3U) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2_9_BIT_m_storebuffer_mv_release_h_ETC___05F_d854) 
                       << 2U) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1_8_BIT_m_storebuffer_mv_release_h_ETC___05F_d855) 
                                  << 1U) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0_7_BIT_m_storebuffer_mv_release_h_ETC___05F_d856))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_evict_addr_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_store_release) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory 
        = ((((((((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U] 
                    >> 2U) & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_ptw_response_rv[2U] 
                                 >> 0xcU))) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_ff__DOT__full_reg)) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy))) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy))) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_handling)) 
              & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_performing_replay))) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_store_release))) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_io_response))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fill_release)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__pipedata_instruction___05Fh4658 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_1_CONCAT_rg_wEpoch_2_3_EQ_IF_ff_memo_ETC___05F_d89) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__IF_NOT_rg_action_7_8_AND_rg_prev_9_BITS_13_TO___05FETC___05F_d223))
            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05F_1___05Fh4788
            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3617);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT_____05Fduses420 
        = ((((((((0xfU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_valid___05Fh75581)) 
                 | (0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582))) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d853)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2_9_BIT_m_storebuffer_mv_release_h_ETC___05F_d854)) 
              | (0xfU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582))) 
             & ((0xfU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_valid___05Fh75581)) 
                | ((0xfU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582)) 
                   & (0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582))))) 
            | (0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582))) 
           | (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT_____05Fduses421 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d853) 
             & ((0xfU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_valid___05Fh75581)) 
                | (0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582)))) 
            | (0xfU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582))) 
           & ((0xfU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_valid___05Fh75581)) 
              | ((0xfU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582)) 
                 & (0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586 
        = (((0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_valid___05Fh75581)) 
            & ((0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582)) 
               | (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582))))
            ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__SEL_ARR_replacement_v_count_0_70_replacement_v_ETC___05F_d935)
            : (((0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_valid___05Fh75581)) 
                & (0xfU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582)))
                ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_3_3_BIT_m_storebuffer_mv_release_h_ETC___05F_d860)
                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_2_2_BIT_m_storebuffer_mv_release_h_ETC___05F_d861)
                        ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_1_1_BIT_m_storebuffer_mv_release_h_ETC___05F_d862)
                            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_0_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d863)
                                ? 3U : 0U) : 1U) : 2U)
                    : 3U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d853)
                              ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2_9_BIT_m_storebuffer_mv_release_h_ETC___05F_d854)
                                  ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1_8_BIT_m_storebuffer_mv_release_h_ETC___05F_d855)
                                      ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0_7_BIT_m_storebuffer_mv_release_h_ETC___05F_d856)
                                          ? 3U : 0U)
                                      : 1U) : 2U) : 3U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_first_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
           & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first) 
                & (0U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] 
                                 << 0x1cU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                              >> 4U))))) 
               | ((1U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] 
                                 << 0x1cU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                              >> 4U)))) 
                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U] 
                     >> 1U))) | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first) 
                                 & (2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] 
                                                  << 0x1cU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                                    >> 4U)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_eviction_EN 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fill_release) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_eviction)) 
           | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
               & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U] 
                  >> 1U)) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta_316_BITS_37_TO_36_317_EQ_0_318_OR_ETC___05F_d1498)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_line 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_storebuffer_ma_allocate_line_1___05FSEL_1) 
           | (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U] 
                    >> 1U)) & (0U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] 
                                             << 0x1cU) 
                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                               >> 4U))))) 
               & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_err))) 
              & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_storebuffer_ma_perform_atomic_1___05FSEL_1 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first)) 
           & (2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] 
                            << 0x1cU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                         >> 4U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_perform_atomic 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first)) 
            & (2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] 
                             << 0x1cU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                          >> 4U))))) 
           | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
              & ((((((~ ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__fn_pmp_lookup___05F_d407) 
                         >> 7U)) & (~ (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                               >> 8U)))) 
                    & (0x80000000U <= (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                               >> 9U)))) 
                   & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
                  & ((0U != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_hitmask___05Fh37878)) 
                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mav_core_lookup[2U] 
                        >> 2U))) & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh38897)))));
    __Vtemp2598[0U] = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_io_response) 
                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[0U])
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_ff_ptw_response_rv_port0___05Fwrite_1___05FVAL_2[0U]
                        : (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
                              & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
                             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_ETC___05F_d597)) 
                            & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])
                            ? ((0xfffff000U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rdata___05Fh40211) 
                                               << 0xcU)) 
                               | ((0x800U & ((0xfffff800U 
                                              & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__fn_pmp_lookup___05F_d407) 
                                                 << 4U)) 
                                             | ((IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                         >> 8U)) 
                                                << 0xbU))) 
                                  | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_1_cause___05Fh40255) 
                                      << 4U) | ((8U 
                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                    >> 8U)) 
                                                | (((0x80000000U 
                                                     > (IData)(
                                                               (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                                >> 9U))) 
                                                    << 2U) 
                                                   | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___0_OR_NOT_ff_core_request_first___05F2_BITS_74_TO_7_ETC___05F_d610) 
                                                       << 1U) 
                                                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail)))))))
                            : 0U));
    if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_io_response) 
           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[0U]) 
          | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
               & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_ETC___05F_d597)) 
             & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])) 
         | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first_315_AND_rg_miss_meta_316_BITS_37_TO_3_ETC___05F_d1408)))) {
        __Vtemp2602[0U] = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first_315_AND_rg_miss_meta_316_BITS_37_TO_3_ETC___05F_d1408))
                            ? ((0xfffff000U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_1_word___05Fh99196) 
                                               << 0xcU)) 
                               | ((0x800U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U] 
                                             << 0xbU)) 
                                  | ((((0U == (3U & 
                                               ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] 
                                                 << 0x1cU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                                   >> 4U))))
                                        ? 5U : 7U) 
                                      << 4U) | ((8U 
                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                                    << 3U)) 
                                                | (((0U 
                                                     != 
                                                     (3U 
                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] 
                                                          << 0x1cU) 
                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                                            >> 4U)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                                         >> 6U)))))))
                            : __Vtemp2598[0U]);
        __Vtemp2602[1U] = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first_315_AND_rg_miss_meta_316_BITS_37_TO_3_ETC___05F_d1408))
                            ? ((0xfffU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_1_word___05Fh99196) 
                                          >> 0x14U)) 
                               | (0xfffff000U & ((IData)(
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_1_word___05Fh99196 
                                                          >> 0x20U)) 
                                                 << 0xcU)))
                            : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_io_response) 
                                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[0U])
                                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_ff_ptw_response_rv_port0___05Fwrite_1___05FVAL_2[1U]
                                : (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
                                      & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
                                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_ETC___05F_d597)) 
                                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])
                                    ? ((0xfffU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rdata___05Fh40211) 
                                                  >> 0x14U)) 
                                       | (0xfffff000U 
                                          & ((IData)(
                                                     (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rdata___05Fh40211 
                                                      >> 0x20U)) 
                                             << 0xcU)))
                                    : 0U)));
    } else {
        __Vtemp2602[0U] = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_ptw_response_rv[0U];
        __Vtemp2602[1U] = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_ptw_response_rv[1U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_ptw_response_rv_port1___05Fread[0U] 
        = __Vtemp2602[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_ptw_response_rv_port1___05Fread[1U] 
        = __Vtemp2602[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_ptw_response_rv_port1___05Fread[2U] 
        = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_io_response) 
              & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[0U]) 
             | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
                  & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_ETC___05F_d597)) 
                & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])) 
            | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first_315_AND_rg_miss_meta_316_BITS_37_TO_3_ETC___05F_d1408)))
            ? (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first_315_AND_rg_miss_meta_316_BITS_37_TO_3_ETC___05F_d1408))
                ? (0x1000U | (0xfffU & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_1_word___05Fh99196 
                                                 >> 0x20U)) 
                                        >> 0x14U)))
                : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_io_response) 
                    & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[0U])
                    ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_ff_ptw_response_rv_port0___05Fwrite_1___05FVAL_2[2U]
                    : (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
                          & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_ETC___05F_d597)) 
                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])
                        ? (0x1000U | (0xfffU & ((IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rdata___05Fh40211 
                                                         >> 0x20U)) 
                                                >> 0x14U)))
                        : 0U))) : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_ptw_response_rv[2U]);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_fill_eviction_write_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U] 
               >> 1U)) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta_316_BITS_37_TO_36_317_EQ_0_318_OR_ETC___05F_d1498));
    VL_EXTEND_WI(76,4, __Vtemp2603, (8U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                           >> 8U)));
    __Vtemp2610[0U] = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
                          & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_ETC___05F_d597)) 
                        & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U]))
                        ? ((0xfffff000U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rdata___05Fh40211) 
                                           << 0xcU)) 
                           | ((0x800U & ((0xfffff800U 
                                          & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__fn_pmp_lookup___05F_d407) 
                                             << 4U)) 
                                         | ((IData)(
                                                    (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                     >> 8U)) 
                                            << 0xbU))) 
                              | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_1_cause___05Fh40255) 
                                  << 4U) | ((8U & (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 8U)) 
                                            | (((0x80000000U 
                                                 > (IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                            >> 9U))) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___0_OR_NOT_ff_core_request_first___05F2_BITS_74_TO_7_ETC___05F_d610) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail)))))))
                        : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
                            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first_315_AND_rg_miss_meta_316_BITS_37_TO_3_ETC___05F_d1417))
                            ? ((0xfffff000U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_1_word___05Fh99196) 
                                               << 0xcU)) 
                               | ((0x800U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U] 
                                             << 0xbU)) 
                                  | ((((0U == (3U & 
                                               ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] 
                                                 << 0x1cU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                                   >> 4U))))
                                        ? 5U : 7U) 
                                      << 4U) | ((8U 
                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                                    << 3U)) 
                                                | (((0U 
                                                     != 
                                                     (3U 
                                                      & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] 
                                                          << 0x1cU) 
                                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                                            >> 4U)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                                         >> 6U)))))))
                            : 0U));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_ff_core_response_enqw_wset_1___05FSEL_1) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_wget[0U] 
            = __Vtemp2603[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_wget[1U] 
            = __Vtemp2603[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_wget[2U] 
            = __Vtemp2603[2U];
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_wget[0U] 
            = __Vtemp2610[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_wget[1U] 
            = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
                  & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_ETC___05F_d597)) 
                & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U]))
                ? ((0xfffU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rdata___05Fh40211) 
                              >> 0x14U)) | (0xfffff000U 
                                            & ((IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rdata___05Fh40211 
                                                        >> 0x20U)) 
                                               << 0xcU)))
                : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first_315_AND_rg_miss_meta_316_BITS_37_TO_3_ETC___05F_d1417))
                    ? ((0xfffU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_1_word___05Fh99196) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_1_word___05Fh99196 
                                                            >> 0x20U)) 
                                                   << 0xcU)))
                    : 0U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_wget[2U] 
            = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
                  & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_ETC___05F_d597)) 
                & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U]))
                ? (0xfffU & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rdata___05Fh40211 
                                      >> 0x20U)) >> 0x14U))
                : (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first_315_AND_rg_miss_meta_316_BITS_37_TO_3_ETC___05F_d1417))
                    ? (0xfffU & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_1_word___05Fh99196 
                                          >> 0x20U)) 
                                 >> 0x14U)) : 0U));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_whas 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_ff_core_response_enqw_wset_1___05FSEL_1) 
            | ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
                 & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread))) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_ETC___05F_d597)) 
               & (~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U]))) 
           | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first_315_AND_rg_miss_meta_316_BITS_37_TO_3_ETC___05F_d1417)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_v_reg_dirty_0_write_1___05FVAL_1 
        = (((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586))
             ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586))
                 ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_3
                 : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_2)
             : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586))
                 ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_1
                 : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_0)) 
           | (1ULL << (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
                                 << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U] 
                                              >> 6U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_v_reg_valid_0_write_1___05FVAL_1 
        = (((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586))
             ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586))
                 ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3
                 : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2)
             : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586))
                 ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1
                 : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0)) 
           | (1ULL << (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
                                 << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U] 
                                              >> 6U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647 
        = ((((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586)) 
             | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586))) 
            << 1U) | ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586)) 
                      | (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d959 
        = (1U & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_valid___05Fh75581) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582)) 
                 >> (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_ma_perform_atomic_sbindex 
        = (1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_storebuffer_ma_perform_atomic_1___05FSEL_1)
                  ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                     >> 6U) : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy_EN 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_perform_atomic));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_mkConnectionGetPut_2 
        = ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_ptw_response_rv_port1___05Fread[2U] 
            >> 0xcU) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_memory_response__DOT__full_reg));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_core_resp_mkConnectionGetPut 
        = ((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv[2U] 
               >> 0xcU)) & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_ff__DOT__empty_reg) 
                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_whas)));
    if ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[0U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[1U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[1U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[1U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[2U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[2U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[2U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[3U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[3U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[3U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[4U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[4U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[4U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[5U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[5U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[5U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[6U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[6U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[6U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[7U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[7U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[7U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[8U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[8U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[8U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[9U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[9U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[9U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[0xaU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xaU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xaU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[0xbU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xbU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xbU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[0xcU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xcU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xcU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[0xdU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xdU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xdU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[0xeU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xeU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xeU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[0xfU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_3_ram_double_0__DOT__out_reg[0xfU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_2_ram_double_0__DOT__out_reg[0xfU]);
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[0U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[1U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[1U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[1U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[2U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[2U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[2U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[3U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[3U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[3U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[4U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[4U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[4U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[5U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[5U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[5U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[6U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[6U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[6U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[7U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[7U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[7U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[8U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[8U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[8U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[9U] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[9U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[9U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[0xaU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xaU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xaU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[0xbU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xbU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xbU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[0xcU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xcU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xcU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[0xdU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xdU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xdU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[0xeU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xeU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xeU]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_line___05Fh78633[0xfU] 
            = ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_1_ram_double_0__DOT__out_reg[0xfU]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_data_v_data_0_ram_double_0__DOT__out_reg[0xfU]);
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_1___05Fh82252 
        = ((((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
              ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                  ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_3_ram_double_0__DOT__out_reg
                  : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_2_ram_double_0__DOT__out_reg)
              : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh78647))
                  ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_1_ram_double_0__DOT__out_reg
                  : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_0_ram_double_0__DOT__out_reg)) 
            << 0xcU) | (0xfc0U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_global_dirty_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_store_release) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d959)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction_D_IN 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_store_release) 
            & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction) 
               | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d959))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_data_v_data_0_ram_double_0_write_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_store_release) 
            & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586))) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d959)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_data_v_data_1_ram_double_0_write_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_store_release) 
            & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586))) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d959)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_data_v_data_2_ram_double_0_write_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_store_release) 
            & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586))) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d959)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_data_v_data_3_ram_double_0_write_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_store_release) 
            & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh75586))) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d959)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_v_reg_valid_3_0_BIT_m_storebuffer_mv_relea_ETC___05F_d1011 
        = ((((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d959)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction)) 
            & (0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_valid___05Fh75581))) 
           & ((0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582)) 
              | (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT_____05Fduses509 
        = (((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d959)) 
            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction)) 
           & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT_____05Fduses421) 
               | (0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582))) 
              | (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh75582))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_wr_read_set_index_wset_1___05FSEL_2 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_store_release) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_m_storebuffer_mv_release_h_ETC___05F_d959)) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_ff_core_response_dequeue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_core_resp_mkConnectionGetPut) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_ff__DOT__empty_reg));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_ff_core_response_enqueue 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_whas) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_core_resp_mkConnectionGetPut)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_ff__DOT__empty_reg)));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_core_resp_mkConnectionGetPut) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
            = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_ff__DOT__empty_reg)
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_ff__DOT__data0_reg[0U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_wget[0U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U] 
            = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_ff__DOT__empty_reg)
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_ff__DOT__data0_reg[1U]
                : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_wget[1U]);
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U] 
            = (0x1000U | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_ff__DOT__empty_reg)
                           ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_ff__DOT__data0_reg[2U]
                           : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_wget[2U]));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv[2U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_drive_ram_read_port 
        = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_EN_receive_core_req_put) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_wr_read_set_index_wset_1___05FSEL_2)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_fill_eviction_write_1___05FSEL_2)) 
            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_performing_replay)) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fence_operation));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__wr_read_set_index_wget 
        = (0x3fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache_EN_receive_core_req_put)
                     ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05Fh123294)
                     : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_wr_read_set_index_wset_1___05FSEL_2)
                         ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[1U] 
                             << 0x1aU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_release_head[0U] 
                                          >> 6U)) : 
                        ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_fill_eviction_write_1___05FSEL_2)
                          ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                              << 0x16U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                           >> 0xaU))
                          : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_performing_replay)
                              ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_recent_req)
                              : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fence_operation)
                                  ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_2___05Fh28945)
                                  : 0U))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_memio_to_stage5_enq_data[0U] 
        = ((0xffffffe0U & ((IData)((((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                     << 0x34U) | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                     >> 0xcU)))) 
                           << 5U)) | ((0x10U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                                << 4U)) 
                                      | ((8U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                                << 1U)) 
                                         | (7U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_memio_to_stage5_enq_data[1U] 
        = ((0x1fU & ((IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                               << 0x34U) | (((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                               >> 0xcU)))) 
                     >> 0x1bU)) | (0xffffffe0U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                                             << 0x34U) 
                                                            | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                                  >> 0xcU))) 
                                                           >> 0x20U)) 
                                                  << 5U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_memio_to_stage5_enq_data[2U] 
        = (0x1fU & ((IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                               << 0x34U) | (((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                             << 0x14U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                               >> 0xcU))) 
                             >> 0x20U)) >> 0x1bU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread___05F37_BIT_3_58_ETC___05F_d161 
        = ((1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                  >> 3U)) == (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[0U] 
                                    >> 3U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__WILL_FIRE_RL_rl_handle_memory 
        = ((((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U] 
              >> 0xcU) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1__DOT__hasodata)) 
            & (((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid__DOT__not_ring_full) 
                    & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog__DOT__not_ring_full)) 
                   & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1__DOT__hasodata)) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout__DOT__hasodata)) 
                 & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_trapout__DOT__not_ring_full)) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_wbmemop__DOT__not_ring_full)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout__DOT__not_ring_full))) 
           & (3U == (7U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[0U])));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_data_3 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_wbmemop__DOT__not_ring_full) 
           & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__WILL_FIRE_RL_rl_handle_memory) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread___05F37_BIT_3_58_ETC___05F_d161)) 
               & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                     >> 0xbU))) & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 1U)));
    if ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__WILL_FIRE_RL_rl_handle_memory) 
          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread___05F37_BIT_3_58_ETC___05F_d161)) 
         & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
            >> 0xbU))) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_trapout_to_stage5_enq_data[0U] 
            = (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                        << 0x34U) | (((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                      << 0x14U) | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                   >> 0xcU))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_trapout_to_stage5_enq_data[1U] 
            = (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                         << 0x34U) | (((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                       << 0x14U) | 
                                      ((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                       >> 0xcU))) >> 0x20U));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_trapout_to_stage5_enq_data[2U] 
            = (0x7fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U] 
                         << 0x1cU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                      >> 4U)));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_trapout_to_stage5_enq_data[0U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_trapout_1_D_OUT[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_trapout_to_stage5_enq_data[1U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_trapout_1_D_OUT[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_trapout_to_stage5_enq_data[2U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_trapout_1_D_OUT[2U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_data_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_trapout__DOT__not_ring_full) 
           & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__WILL_FIRE_RL_rl_handle_memory) 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread___05F37_BIT_3_58_ETC___05F_d161)) 
               & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                  >> 0xbU)) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_data_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout__DOT__not_ring_full) 
           & ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__WILL_FIRE_RL_rl_handle_memory) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread___05F37_BIT_3_58_ETC___05F_d161)) 
                 & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                       >> 0xbU))) & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                        >> 1U))) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__WILL_FIRE_RL_rl_polling_check 
        = ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1__DOT__hasodata) 
               & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv))) 
              & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__WILL_FIRE_RL_rl_handle_memory))) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout))) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)));
    if (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__WILL_FIRE_RL_rl_handle_memory) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread___05F37_BIT_3_58_ETC___05F_d161)) 
          & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                >> 0xbU))) & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                 >> 1U)))) {
        __Vtemp2633[0U] = ((0xffffffc0U & ((IData)(
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                                     << 0x34U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                                        << 0x14U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                          >> 0xcU)))) 
                                           << 6U)) 
                           | (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                        << 0x1dU) | 
                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[0U] 
                                        >> 3U))));
        __Vtemp2633[1U] = ((0x3fU & ((IData)((((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                    >> 0xcU)))) 
                                     >> 0x1aU)) | (0xffffffc0U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                                                    << 0x14U) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                                      >> 0xcU))) 
                                                               >> 0x20U)) 
                                                      << 6U)));
        __Vtemp2633[2U] = ((0x3c0U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
                                      >> 3U)) | (0x3fU 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                                               << 0x34U) 
                                                              | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                                                  << 0x14U) 
                                                                 | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                                    >> 0xcU))) 
                                                             >> 0x20U)) 
                                                    >> 0x1aU)));
    } else {
        __Vtemp2633[0U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[0U]
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                ? ((0xffffffc0U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x) 
                                                   << 6U)) 
                                   | (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                                << 0x1dU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[0U] 
                                                  >> 3U))))
                                : 0U));
        __Vtemp2633[1U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[1U]
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                ? ((0x3fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x) 
                                             >> 0x1aU)) 
                                   | (0xffffffc0U & 
                                      ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x 
                                                >> 0x20U)) 
                                       << 6U))) : 0U));
        __Vtemp2633[2U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[2U]
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                ? ((0x3c0U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
                                              >> 3U)) 
                                   | (0x3fU & ((IData)(
                                                       (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x 
                                                        >> 0x20U)) 
                                               >> 0x1aU)))
                                : 0U));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_baseout_to_stage5_enq_data[0U] 
        = __Vtemp2633[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_baseout_to_stage5_enq_data[1U] 
        = __Vtemp2633[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_baseout_to_stage5_enq_data[2U] 
        = __Vtemp2633[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__rx_fuid_w_ena_whas 
        = ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__WILL_FIRE_RL_rl_handle_memory) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread___05F37_BIT_3_58_ETC___05F_d161)) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout)) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout)) 
            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__MUX_rx_commitlog_w_ena_wset_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__WILL_FIRE_RL_rl_handle_memory) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread___05F37_BIT_3_58_ETC___05F_d161));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_data_4 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid__DOT__not_ring_full) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__rx_fuid_w_ena_whas));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_data_5 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog__DOT__not_ring_full) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__rx_fuid_w_ena_whas));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_10 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1__DOT__hasodata) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__rx_fuid_w_ena_whas));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_11 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1__DOT__hasodata) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__rx_fuid_w_ena_whas));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__CAN_FIRE_RL_connect_ena_9 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout__DOT__hasodata) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__MUX_rx_commitlog_w_ena_wset_1___05FSEL_1));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__MUX_rx_commitlog_w_ena_wset_1___05FSEL_1) {
        __Vtemp2650[0U] = ((0xfffffffcU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                            << 0x1fU) 
                                           | (0x7ffffffcU 
                                              & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[0U] 
                                                 >> 1U)))) 
                           | ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])
                               ? 2U : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])
                                        ? 3U : 0U)));
        __Vtemp2650[1U] = ((3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                  >> 1U)) | (0xfffffffcU 
                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
                                                 << 0x1fU) 
                                                | (0x7ffffffcU 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                                      >> 1U)))));
        __Vtemp2650[2U] = ((3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
                                  >> 1U)) | (0xffcU 
                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
                                                >> 1U)));
    } else {
        __Vtemp2650[0U] = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout)) 
                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout))
                            ? ((0xfffffffcU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                                << 0x1fU) 
                                               | (0x7ffffffcU 
                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[0U] 
                                                     >> 1U)))) 
                               | ((0U == (7U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[0U]))
                                   ? 0U : ((1U == (7U 
                                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[0U]))
                                            ? 1U : 
                                           ((2U == 
                                             (7U & 
                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[0U]))
                                             ? 2U : 
                                            ((3U == 
                                              (7U & 
                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[0U]))
                                              ? 3U : 0U)))))
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                ? (0xfffffffcU & ((
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                                   << 0x1fU) 
                                                  | (0x7ffffffcU 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[0U] 
                                                        >> 1U))))
                                : 0U));
        __Vtemp2650[1U] = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout)) 
                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout))
                            ? ((3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                      >> 1U)) | (0xfffffffcU 
                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
                                                     << 0x1fU) 
                                                    | (0x7ffffffcU 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                                          >> 1U)))))
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                ? ((3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                          >> 1U)) | 
                                   (0xfffffffcU & (
                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
                                                    << 0x1fU) 
                                                   | (0x7ffffffcU 
                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                                         >> 1U)))))
                                : 0U));
        __Vtemp2650[2U] = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout)) 
                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout))
                            ? ((3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
                                      >> 1U)) | (0xffcU 
                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
                                                    >> 1U)))
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                ? ((3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
                                          >> 1U)) | 
                                   (0xffcU & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
                                              >> 1U)))
                                : 0U));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_fuid_to_stage5_enq_data[0U] 
        = __Vtemp2650[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_fuid_to_stage5_enq_data[1U] 
        = __Vtemp2650[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_fuid_to_stage5_enq_data[2U] 
        = __Vtemp2650[2U];
    __Vtemp2657[0U] = (1U | ((0xffffffc0U & ((IData)(
                                                     (((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                                       << 0x34U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                                          << 0x14U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                            >> 0xcU)))) 
                                             << 6U)) 
                             | (0x3eU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                          << 0x1dU) 
                                         | (0x1ffffffeU 
                                            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[0U] 
                                               >> 3U))))));
    __Vtemp2657[1U] = ((0x3fU & ((IData)((((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                           << 0x34U) 
                                          | (((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                >> 0xcU)))) 
                                 >> 0x1aU)) | (0xffffffc0U 
                                               & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                                             << 0x34U) 
                                                            | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                                                << 0x14U) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                                  >> 0xcU))) 
                                                           >> 0x20U)) 
                                                  << 6U)));
    __Vtemp2657[2U] = (0x3fU & ((IData)(((((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                           << 0x34U) 
                                          | (((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                >> 0xcU))) 
                                         >> 0x20U)) 
                                >> 0x1aU));
    VL_EXTEND_WW(209,70, __Vtemp2658, __Vtemp2657);
    __Vtemp2660[1U] = (((2U != (7U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT))) 
                        | (7U != (0x1fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT) 
                                           >> 3U))))
                        ? ((0x1ffffU & ((IData)((((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                                  << 0x34U) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                                     << 0x14U) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                       >> 0xcU)))) 
                                        >> 0xfU)) | 
                           (0xfffe0000U & ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                           >> 0xcU))) 
                                                    >> 0x20U)) 
                                           << 0x11U)))
                        : __Vtemp2658[1U]);
    __Vtemp2664[6U] = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                               >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                           >> 1U)))
                        ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[6U]
                        : ((0xfff80000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[6U]) 
                           | ((0xfffe0000U & ((((2U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT))) 
                                                & (7U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT) 
                                                       >> 3U))))
                                                ? 3U
                                                : 1U) 
                                              << 0x11U)) 
                              | (((2U != (7U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT))) 
                                  | (7U != (0x1fU & 
                                            ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT) 
                                             >> 3U))))
                                  ? (0x1ffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[6U])
                                  : __Vtemp2658[6U]))));
    __Vtemp2668[0U] = ((0xffffffc0U & ((IData)((((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[2U])) 
                                                 << 0x3aU) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[1U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[0U])) 
                                                      >> 6U)))) 
                                       << 6U)) | (0x3fU 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[0U]));
    __Vtemp2668[1U] = ((0x3fU & ((IData)((((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[2U])) 
                                           << 0x3aU) 
                                          | (((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[1U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[0U])) 
                                                >> 6U)))) 
                                 >> 0x1aU)) | (0xffffffc0U 
                                               & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[2U])) 
                                                             << 0x3aU) 
                                                            | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[1U])) 
                                                                << 0x1aU) 
                                                               | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[0U])) 
                                                                  >> 6U))) 
                                                           >> 0x20U)) 
                                                  << 6U)));
    __Vtemp2668[2U] = (0x3fU & ((IData)(((((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[2U])) 
                                           << 0x3aU) 
                                          | (((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[1U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[0U])) 
                                                >> 6U))) 
                                         >> 0x20U)) 
                                >> 0x1aU));
    VL_EXTEND_WW(209,70, __Vtemp2669, __Vtemp2668);
    __Vtemp2675[0U] = ((0xffffffc0U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x) 
                                       << 6U)) | (0x3fU 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[0U]));
    __Vtemp2675[1U] = ((0x3fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x) 
                                 >> 0x1aU)) | (0xffffffc0U 
                                               & ((IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x 
                                                           >> 0x20U)) 
                                                  << 6U)));
    __Vtemp2675[2U] = (0x3fU & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x 
                                         >> 0x20U)) 
                                >> 0x1aU));
    VL_EXTEND_WW(209,70, __Vtemp2676, __Vtemp2675);
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__MUX_rx_commitlog_w_ena_wset_1___05FSEL_1) {
        __Vtemp2684[2U] = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                               >> 1U)))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[2U]
                            : (((2U != (7U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT))) 
                                | (7U != (0x1fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT) 
                                                   >> 3U))))
                                ? ((0x1ffffU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                                           << 0x34U) 
                                                          | (((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                                              << 0x14U) 
                                                             | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                                >> 0xcU))) 
                                                         >> 0x20U)) 
                                                >> 0xfU)) 
                                   | (0xfffe0000U & 
                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[2U]))
                                : __Vtemp2658[2U]));
        __Vtemp2684[7U] = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                               >> 1U)))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[7U]
                            : ((0x7ffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[7U]) 
                               | (0xfff80000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[7U])));
        __Vtemp2684[8U] = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                               >> 1U)))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[8U]
                            : ((0x7ffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[8U]) 
                               | (0xfff80000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[8U])));
        __Vtemp2684[9U] = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                               >> 1U)))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[9U]
                            : ((0x7ffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[9U]) 
                               | (0x180000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[9U])));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[0U] 
            = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                       >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 1U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[0U]
                : (((2U != (7U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT))) 
                    | (7U != (0x1fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT) 
                                       >> 3U)))) ? 
                   ((0xfffe0000U & ((IData)((((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                              << 0x34U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U])) 
                                                 << 0x14U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])) 
                                                   >> 0xcU)))) 
                                    << 0x11U)) | (0x1ffffU 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[0U]))
                    : __Vtemp2658[0U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[1U] 
            = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                       >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 1U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[1U]
                : __Vtemp2660[1U]);
    } else {
        __Vtemp2684[2U] = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[2U]
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                                ? __Vtemp2669[2U] : 
                               ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                 ? __Vtemp2676[2U] : 0U)));
        __Vtemp2684[7U] = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[7U]
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                                ? ((0x7ffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[7U]) 
                                   | (0xfff80000U & 
                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[7U]))
                                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                    ? ((0x7ffffU & 
                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[7U]) 
                                       | (0xfff80000U 
                                          & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[7U]))
                                    : 0U)));
        __Vtemp2684[8U] = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[8U]
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                                ? ((0x7ffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[8U]) 
                                   | (0xfff80000U & 
                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[8U]))
                                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                    ? ((0x7ffffU & 
                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[8U]) 
                                       | (0xfff80000U 
                                          & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[8U]))
                                    : 0U)));
        __Vtemp2684[9U] = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[9U]
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                                ? ((0x7ffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[9U]) 
                                   | (0x180000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[9U]))
                                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                    ? ((0x7ffffU & 
                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[9U]) 
                                       | (0x180000U 
                                          & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[9U]))
                                    : 0U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[0U] 
            = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[0U]
                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                    ? __Vtemp2669[0U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                          ? __Vtemp2676[0U]
                                          : 0U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[1U] 
            = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[1U]
                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                    ? __Vtemp2669[1U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                          ? __Vtemp2676[1U]
                                          : 0U)));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[2U] 
        = __Vtemp2684[2U];
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__MUX_rx_commitlog_w_ena_wset_1___05FSEL_1) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[3U] 
            = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                       >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 1U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[3U]
                : (((2U != (7U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT))) 
                    | (7U != (0x1fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT) 
                                       >> 3U)))) ? 
                   ((0x1ffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[3U]) 
                    | (0xfffe0000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[3U]))
                    : __Vtemp2658[3U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[4U] 
            = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                       >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 1U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[4U]
                : (((2U != (7U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT))) 
                    | (7U != (0x1fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT) 
                                       >> 3U)))) ? 
                   ((0x1ffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[4U]) 
                    | (0xfffe0000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[4U]))
                    : __Vtemp2658[4U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[5U] 
            = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                       >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 1U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[5U]
                : (((2U != (7U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT))) 
                    | (7U != (0x1fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT) 
                                       >> 3U)))) ? 
                   ((0x1ffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[5U]) 
                    | (0xfffe0000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[5U]))
                    : __Vtemp2658[5U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[6U] 
            = __Vtemp2664[6U];
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[3U] 
            = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[3U]
                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                    ? __Vtemp2669[3U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                          ? __Vtemp2676[3U]
                                          : 0U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[4U] 
            = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[4U]
                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                    ? __Vtemp2669[4U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                          ? __Vtemp2676[4U]
                                          : 0U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[5U] 
            = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[5U]
                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                    ? __Vtemp2669[5U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                          ? __Vtemp2676[5U]
                                          : 0U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[6U] 
            = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[6U]
                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                    ? (0x60000U | ((0xfff80000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[6U]) 
                                   | __Vtemp2669[6U]))
                    : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                        ? (0x60000U | ((0xfff80000U 
                                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[6U]) 
                                       | __Vtemp2676[6U]))
                        : 0U)));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[7U] 
        = __Vtemp2684[7U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[8U] 
        = __Vtemp2684[8U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[9U] 
        = __Vtemp2684[9U];
}
