// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTbSoc.h for the primary calling header

#include "VmkTbSoc.h"
#include "VmkTbSoc__Syms.h"

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__23(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__23\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp2813[4];
    WData/*191:0*/ __Vtemp2823[6];
    // Body
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__rg_epoch) 
            << 1U) | (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U] 
                            >> 4U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__empty_reg 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__empty_reg;
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fill_release 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_release) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_handling)) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_eviction_required)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_RDY_cache_mv_initiate_store_snd 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__CAN_FIRE_RL_rl_writeback_memop) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U] 
                 >> 3U)));
    if ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget))) {
        if ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh36008 
                = (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[3U] 
                          << 0x1eU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[2U] 
                                       >> 2U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh36008 
            = (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[3U] 
                      << 0x1eU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[2U] 
                                   >> 2U)));
    }
    if ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget))) {
        if ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CASE_ma_commit_store_c_BIT_0_0_v_sb_meta_0_BIT_ETC___05Fq7 
                = (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[2U] 
                         >> 4U));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CASE_ma_commit_store_c_BIT_0_0_v_sb_meta_0_BIT_ETC___05Fq7 
            = (1U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[2U] 
                     >> 4U));
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_eviction_EN) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_eviction 
                = (1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_evict_addr_write_1___05FSEL_2)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_eviction = 0U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction 
        = ((IData)(vlTOPp->RST_N) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_store_eviction_D_IN));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_data_v_data_0_ram_double_0_write_1___05FSEL_1 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fill_release) 
            & (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_way))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_err)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_data_v_data_1_ram_double_0_write_1___05FSEL_1 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fill_release) 
            & (1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_way))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_err)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_data_v_data_2_ram_double_0_write_1___05FSEL_1 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fill_release) 
            & (2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_way))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_err)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_m_data_v_data_3_ram_double_0_write_1___05FSEL_1 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fill_release) 
            & (3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_way))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_err)));
    if (vlTOPp->RST_N) {
        if (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U] 
                >> 1U))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_set 
                = (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                             << 0x16U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                          >> 0xaU)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_set = 0U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__ma_commit_store_c_BIT_1_86_EQ_SEL_ARR_v_sb_met_ETC___05F_d488 
        = ((1U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget) 
                  >> 1U)) == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CASE_ma_commit_store_c_BIT_0_0_v_sb_meta_0_BIT_ETC___05Fq7));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_rl_handle_dmem_line_resp) {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U] 
            = ((0xfffffffcU & ((IData)((((QData)((IData)(
                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[2U])) 
                                         << 0x3dU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[1U])) 
                                            << 0x1dU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[0U])) 
                                              >> 3U)))) 
                               << 2U)) | ((2U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[0U] 
                                                 << 1U)) 
                                          | (0U != 
                                             (3U & 
                                              ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[1U] 
                                                << 0x1fU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[0U] 
                                                  >> 1U))))));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U] 
            = ((3U & ((IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[2U])) 
                                << 0x3dU) | (((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[1U])) 
                                              << 0x1dU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[0U])) 
                                                >> 3U)))) 
                      >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[2U])) 
                                                              << 0x3dU) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[1U])) 
                                                                 << 0x1dU) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[0U])) 
                                                                   >> 3U))) 
                                                            >> 0x20U)) 
                                                   << 2U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U] 
            = (4U | (3U & ((IData)(((((QData)((IData)(
                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__memory_xactor_rg_rd_data[0U])) 
                                                      >> 3U))) 
                                    >> 0x20U)) >> 0x1eU)));
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U] 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv[2U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_evict_addr_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fill_release) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_eviction));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_v_reg_dirty_0_write_1___05FVAL_2 
        = (((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_way))
             ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_way))
                 ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_3
                 : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_2)
             : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_way))
                 ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_1
                 : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_0)) 
           & (~ (1ULL << (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_set))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_v_reg_valid_0_write_1___05FVAL_2 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_err)
            ? (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__w___05Fh67373 
               & (~ (1ULL << (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_set))))
            : (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__w___05Fh67373 
               | (1ULL << (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_set))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_0_D_IN 
        = ((0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
            ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                           >> 2U)))
            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_0);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_1_D_IN 
        = ((1U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
            ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                           >> 2U)))
            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_1);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_2_D_IN 
        = ((2U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
            ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                           >> 2U)))
            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_2);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_3_D_IN 
        = ((3U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
            ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                           >> 2U)))
            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_3);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_4_D_IN 
        = ((4U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
            ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                           >> 2U)))
            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_4);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_5_D_IN 
        = ((5U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
            ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                           >> 2U)))
            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_5);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_6_D_IN 
        = ((6U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
            ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                           >> 2U)))
            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_6);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_7_D_IN 
        = ((7U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh107912))
            ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
                << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                           >> 2U)))
            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_fill_line_7);
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_rg_first_write_1___05FSEL_2) {
            __Vtemp2813[1U] = ((0xffffff80U & ((IData)(
                                                       (((QData)((IData)(
                                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U])) 
                                                            << 0x1aU) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])) 
                                                              >> 6U)))) 
                                               << 7U)) 
                               | (IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail)) 
                                            << 0x26U) 
                                           | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh38897)) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                                   >> 9U))) 
                                                  << 4U) 
                                                 | (QData)((IData)(
                                                                   ((0xeU 
                                                                     & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                                                         << 0x1bU) 
                                                                        | (0x7fffffeU 
                                                                           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                                              >> 5U)))) 
                                                                    | (1U 
                                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                                          >> 0xbU)))))))) 
                                          >> 0x20U)));
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                = (IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail)) 
                            << 0x26U) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh38897)) 
                                          << 0x24U) 
                                         | (((QData)((IData)(
                                                             (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                              >> 9U))) 
                                             << 4U) 
                                            | (QData)((IData)(
                                                              ((0xeU 
                                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                                                    << 0x1bU) 
                                                                   | (0x7fffffeU 
                                                                      & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                                         >> 5U)))) 
                                                               | (1U 
                                                                  & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                                     >> 0xbU)))))))));
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                = __Vtemp2813[1U];
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] 
                = ((0x7fU & ((IData)((((QData)((IData)(
                                                       vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                       << 0x3aU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U])) 
                                        << 0x1aU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])) 
                                        >> 6U)))) >> 0x19U)) 
                   | (0xffffff80U & ((IData)(((((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                                << 0x3aU) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U])) 
                                                   << 0x1aU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])) 
                                                     >> 6U))) 
                                              >> 0x20U)) 
                                     << 7U)));
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[3U] 
                = ((0xfffff000U & ((IData)((((QData)((IData)(
                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[4U])) 
                                             << 0x33U) 
                                            | (((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                                  >> 0xdU)))) 
                                   << 0xcU)) | ((0xf80U 
                                                 & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                    << 6U)) 
                                                | (0x7fU 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                                                 << 0x3aU) 
                                                                | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U])) 
                                                                    << 0x1aU) 
                                                                   | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])) 
                                                                      >> 6U))) 
                                                               >> 0x20U)) 
                                                      >> 0x19U))));
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[4U] 
                = ((0xfffU & ((IData)((((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[4U])) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U])) 
                                         << 0x13U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                           >> 0xdU)))) 
                              >> 0x14U)) | (0xfffff000U 
                                            & ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[4U])) 
                                                          << 0x33U) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U])) 
                                                             << 0x13U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                                               >> 0xdU))) 
                                                        >> 0x20U)) 
                                               << 0xcU)));
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[5U] 
                = ((0x1000U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                               << 0xcU)) | (0xfffU 
                                            & ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[4U])) 
                                                          << 0x33U) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U])) 
                                                             << 0x13U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                                               >> 0xdU))) 
                                                        >> 0x20U)) 
                                               >> 0x14U)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[3U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[4U] = 0U;
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[5U] = 0U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[4U] 
        = vlTOPp->__Vdly__mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[4U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__CAN_FIRE_RL_mkConnectionGetPut)
            ? (0x20000000000ULL | (0x1ffffffffffULL 
                                   & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dtlb__DOT__ff_core_response_rv_port1___05Fread))
            : vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first_315_AND_rg_miss_meta_316_BITS_37_TO_3_ETC___05F_d1408 
        = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first) 
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
                                                  >> 4U)))))) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[5U] 
              >> 0xcU));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__SEL_ARR_replacement_v_count_0_70_replacement_v_ETC___05F_d1438 
        = ((0x8000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
            ? ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                ? ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                    ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_63)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_62))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_61)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_60)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_59)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_58))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_57)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_56))))
                    : ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_55)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_54))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_53)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_52)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_51)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_50))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_49)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_48)))))
                : ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                    ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_47)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_46))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_45)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_44)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_43)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_42))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_41)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_40))))
                    : ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_39)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_38))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_37)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_36)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_35)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_34))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_33)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_32))))))
            : ((0x4000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                ? ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                    ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_31)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_30))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_29)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_28)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_27)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_26))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_25)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_24))))
                    : ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_23)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_22))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_21)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_20)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_19)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_18))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_17)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_16)))))
                : ((0x2000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                    ? ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_15)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_14))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_13)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_12)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_11)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_10))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_9)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_8))))
                    : ((0x1000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                        ? ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_7)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_6))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_5)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_4)))
                        : ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                            ? ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_3)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_2))
                            : ((0x400U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_1)
                                : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__replacement_v_count_0)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_0_0_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1431 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_0 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                       << 0x16U) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                       >> 0xaU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_1_1_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1430 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_1 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                       << 0x16U) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                       >> 0xaU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_2_2_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1429 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_2 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                       << 0x16U) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                       >> 0xaU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_3_3_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1428 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_3 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                       << 0x16U) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                       >> 0xaU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0_7_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1424 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                       << 0x16U) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                       >> 0xaU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1_8_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1423 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                       << 0x16U) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                       >> 0xaU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2_9_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1422 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                       << 0x16U) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                       >> 0xaU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1421 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3 
                         >> (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                       << 0x16U) | 
                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                       >> 0xaU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__word___05Fh99251 
        = ((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[2U])) 
             << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[1U])) 
                           << 0x1eU) | ((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])) 
                                        >> 2U))) >> 
           (0x38U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                      << 0x1fU) | (0x7ffffff8U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                                  >> 1U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first_315_AND_rg_miss_meta_316_BITS_37_TO_3_ETC___05F_d1417 
        = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_first) 
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
                                                  >> 4U)))))) 
           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[5U] 
                 >> 0xcU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh13462 
        = ((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])
            ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])
                ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                    << 0x3aU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])) 
                                               >> 6U)))
                : (((QData)((IData)(((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                      << 0x1aU) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                   >> 6U)))) 
                    << 0x20U) | (QData)((IData)(((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                    >> 6U))))))
            : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])
                ? (((QData)((IData)((0xffffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                   >> 6U))))) 
                    << 0x30U) | (((QData)((IData)((0xffffU 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                                       << 0x1aU) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                         >> 6U))))) 
                                  << 0x20U) | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                                                     << 0x1aU) 
                                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                                       >> 6U))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                                                      << 0x1aU) 
                                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                                        >> 6U))))))))
                : (((QData)((IData)((0xffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                               << 0x1aU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                 >> 6U))))) 
                    << 0x38U) | (((QData)((IData)((0xffU 
                                                   & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                                       << 0x1aU) 
                                                      | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                         >> 6U))))) 
                                  << 0x30U) | (((QData)((IData)(
                                                                (0xffU 
                                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                                                     << 0x1aU) 
                                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                                       >> 6U))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                                                        << 0x1aU) 
                                                                       | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                                          >> 6U))))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                                                           << 0x1aU) 
                                                                          | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                                             >> 6U))))) 
                                                      << 0x18U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                                                              << 0x1aU) 
                                                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                                                >> 6U))))) 
                                                         << 0x10U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                                                >> 6U))))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                                                >> 6U))))))))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_rg_reservation_address_07_BIT_64_08_THEN_rg_ETC___05F_d312 
        = ((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_reservation_address[1U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_reservation_address[0U]))) 
           == (QData)((IData)((7U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                      << 0x13U) | (
                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                   >> 0xdU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__storemask___05Fh11065 
        = (((0x80U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])
             ? ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])
                 ? 0xffffffffffffffffULL : 0xffffffffULL)
             : ((0x40U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])
                 ? 0xffffULL : 0xffULL)) << (0x38U 
                                             & ((IData)(
                                                        (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                         >> 9U)) 
                                                << 3U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_m_tag_v_tags_0_ram_double_0doutb_EQ_ff_fro_ETC___05Fq6 
        = ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_0_ram_double_0__DOT__out_reg 
            == (0xfffffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                    >> 0x15U)))) ? 1U
            : 0U);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0_7_BIT_ff_from_tlb_rv_port1___05Fread_ETC___05F_d370 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0 
                         >> (0x3fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                              >> 0xfU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_1_rg_output_0_port1___05Fread___05F12_EQ___05FETC___05F_d351 
        = (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_1_ram_double_0__DOT__out_reg 
           == (0xfffffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                   >> 0x15U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_2_rg_output_0_port1___05Fread___05F13_EQ___05FETC___05F_d350 
        = (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_2_ram_double_0__DOT__out_reg 
           == (0xfffffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                   >> 0x15U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_EQ___05FETC___05F_d349 
        = (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_3_ram_double_0__DOT__out_reg 
           == (0xfffffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                   >> 0x15U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1_8_BIT_ff_from_tlb_rv_port1___05Fread_ETC___05F_d368 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1 
                         >> (0x3fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                              >> 0xfU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2_9_BIT_ff_from_tlb_rv_port1___05Fread_ETC___05F_d366 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2 
                         >> (0x3fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                              >> 0xfU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_ff_from_tlb_rv_port1___05Fread_ETC___05F_d364 
        = (1U & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3 
                         >> (0x3fU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                              >> 0xfU))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req 
        = (((QData)((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                             >> 9U))) << 2U) | (QData)((IData)(
                                                               ((0U 
                                                                 == 
                                                                 (3U 
                                                                  & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                                                      << 0x17U) 
                                                                     | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                                        >> 9U))))
                                                                 ? 
                                                                (3U 
                                                                 & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                                                     << 0x17U) 
                                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                                       >> 9U)))
                                                                 : 1U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh95975 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_3_3_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1428) 
            << 3U) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_2_2_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1429) 
                       << 2U) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_1_1_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1430) 
                                  << 1U) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_0_0_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1431))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_valid___05Fh95974 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1421) 
            << 3U) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2_9_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1422) 
                       << 2U) | (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1_8_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1423) 
                                  << 1U) | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0_7_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1424))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___theResult___05F___05F_1_word___05Fh99196 
        = (((2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] 
                           << 0x1cU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                        >> 4U)))) & 
            (7U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[4U] 
                              << 0x19U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[3U] 
                                           >> 7U)))))
            ? 0ULL : ((1U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U])
                       ? (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[5U])) 
                           << 0x34U) | (((QData)((IData)(
                                                         vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[4U])) 
                                         << 0x14U) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[3U])) 
                                           >> 0xcU)))
                       : ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__word___05Fh99251 
                           & ((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                               ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                   ? 0xffffffffffffffffULL
                                   : 0xffffffffULL)
                               : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                   ? 0xffffULL : 0xffULL))) 
                          | (((4U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                               ? ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                   ? 0ULL : 0xffffffff00000000ULL)
                               : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U])
                                   ? 0xffffffffffff0000ULL
                                   : 0xffffffffffffff00ULL)) 
                             & (- (QData)((IData)((1U 
                                                   & (((0U 
                                                        == 
                                                        (3U 
                                                         & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                                             << 0x1fU) 
                                                            | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                                               >> 1U))))
                                                        ? (IData)(
                                                                  (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__word___05Fh99251 
                                                                   >> 7U))
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (3U 
                                                          & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                                              << 0x1fU) 
                                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                                                >> 1U))))
                                                         ? (IData)(
                                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__word___05Fh99251 
                                                                    >> 0xfU))
                                                         : (IData)(
                                                                   (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__word___05Fh99251 
                                                                    >> 0x1fU)))) 
                                                      & (~ 
                                                         (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[0U] 
                                                          >> 3U)))))))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_ff_core_request_first___05F2_BITS_74_TO_73_90___05FETC___05F_d660 
        = ((((2U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                            << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 9U)))) 
             | (7U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                 << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                              >> 1U))))) 
            | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_reservation_address[2U] 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_rg_reservation_address_07_BIT_64_08_THEN_rg_ETC___05F_d312))) 
           & (0x80000000U > (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                     >> 9U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request_first___05F2_BITS_74_TO_73_90_EQ_2_ETC___05F_d666 
        = ((((2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                            << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                         >> 9U)))) 
             & (7U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                 << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                              >> 1U))))) 
            & ((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_reservation_address[2U]) 
               | (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_rg_reservation_address_07_BIT_64_08_THEN_rg_ETC___05F_d312)))) 
           | (0x80000000U <= (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                      >> 9U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh38897 
        = (((2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                           << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                        >> 9U)))) & 
            (5U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                              << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                           >> 1U)))))
            ? 0U : (3U & (((2U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                          << 0x17U) 
                                         | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                            >> 9U)))) 
                           & (7U == (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                               << 0x1fU) 
                                              | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                                 >> 1U)))))
                           ? ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_reservation_address[2U] 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_rg_reservation_address_07_BIT_64_08_THEN_rg_ETC___05F_d312))
                               ? 2U : 0U) : ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                                              << 0x17U) 
                                             | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                >> 9U)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__b___05Fh38560 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_m_tag_v_tags_0_ram_double_0doutb_EQ_ff_fro_ETC___05Fq6) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0_7_BIT_ff_from_tlb_rv_port1___05Fread_ETC___05F_d370));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__b___05Fh38572 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_1_rg_output_0_port1___05Fread___05F12_EQ___05FETC___05F_d351) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1_8_BIT_ff_from_tlb_rv_port1___05Fread_ETC___05F_d368));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__b___05Fh38584 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_2_rg_output_0_port1___05Fread___05F13_EQ___05FETC___05F_d350) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2_9_BIT_ff_from_tlb_rv_port1___05Fread_ETC___05F_d366));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_EQ___05FETC___05F_d365 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_tag_v_tags_3_rg_output_0_port1___05Fread___05F14_EQ___05FETC___05F_d349) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_ff_from_tlb_rv_port1___05Fread_ETC___05F_d364));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULE_fn_pmp_look_ETC___05F_d64 
        = ((0x1fffffffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req 
                                   >> 5U))) <= (0x1fffffffU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[3U] 
                                                    << 0x1dU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[2U] 
                                                      >> 3U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d62 
        = ((0x1fffffffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req 
                                   >> 5U))) < (0x1fffffffU 
                                               & (((1U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                        >> 0x13U)))
                                                    ? 
                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[2U] 
                                                     << 0x1dU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[1U] 
                                                       >> 3U))
                                                    : 
                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[3U] 
                                                     << 0x1dU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[2U] 
                                                       >> 3U))) 
                                                  & ((3U 
                                                      == 
                                                      (3U 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                          >> 0x13U)))
                                                      ? 
                                                     (~ 
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__mask___05Fh1138 
                                                       & (~ 
                                                          ((IData)(1U) 
                                                           + vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__mask___05Fh1138))))
                                                      : 0x1fffffffU))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULE_fn_pmp_look_ETC___05F_d41 
        = ((0x1fffffffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req 
                                   >> 5U))) <= (0x1fffffffU 
                                                & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[2U] 
                                                    << 0x1dU) 
                                                   | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[1U] 
                                                      >> 3U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d39 
        = ((0x1fffffffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT____Vcellinp__instance_fn_pmp_lookup_0__fn_pmp_lookup_req 
                                   >> 5U))) < (0x1fffffffU 
                                               & (((1U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                        >> 0xbU)))
                                                    ? 
                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[1U] 
                                                     << 0x1dU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[0U] 
                                                       >> 3U))
                                                    : 
                                                   ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[2U] 
                                                     << 0x1dU) 
                                                    | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpaddr[1U] 
                                                       >> 3U))) 
                                                  & ((3U 
                                                      == 
                                                      (3U 
                                                       & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__csr_mv_pmpcfg 
                                                          >> 0xbU)))
                                                      ? 
                                                     (~ 
                                                      (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__mask___05Fh918 
                                                       & (~ 
                                                          ((IData)(1U) 
                                                           + vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__mask___05Fh918))))
                                                      : 0x1fffffffU))));
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
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta_316_BITS_37_TO_36_317_EQ_0_318_OR_ETC___05F_d1501 
        = (((((0U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] 
                             << 0x1cU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                          >> 4U)))) 
              | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_err)) 
             | vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U]) 
            & (0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_valid___05Fh95974))) 
           & ((0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh95975)) 
              | (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh95975))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh95979 
        = (((0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_valid___05Fh95974)) 
            & ((0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh95975)) 
               | (0U == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh95975))))
            ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__SEL_ARR_replacement_v_count_0_70_replacement_v_ETC___05F_d1438)
            : (((0xfU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_valid___05Fh95974)) 
                & (0xfU != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh95975)))
                ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_3_3_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1428)
                    ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_2_2_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1429)
                        ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_1_1_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1430)
                            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_0_0_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1431)
                                ? 3U : 0U) : 1U) : 2U)
                    : 3U) : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3_0_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1421)
                              ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2_9_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1422)
                                  ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1_8_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1423)
                                      ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0_7_BIT_rg_miss_meta_316_BITS_15_T_ETC___05F_d1424)
                                          ? 3U : 0U)
                                      : 1U) : 2U) : 3U)));
    __Vtemp2823[2U] = ((0xfffff000U & ((IData)((((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                                 << 0x3aU) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])) 
                                                      >> 6U)))) 
                                       << 0xcU)) | 
                       ((0xe00U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                   << 3U)) | ((0x100U 
                                               & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                                  >> 3U)) 
                                              | ((0xffffffc0U 
                                                  & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh38897) 
                                                     << 6U)) 
                                                 | ((0x3eU 
                                                     & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U]) 
                                                    | (1U 
                                                       & ((IData)(
                                                                  ((((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[4U])) 
                                                                     << 0x33U) 
                                                                    | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U])) 
                                                                        << 0x13U) 
                                                                       | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                                                          >> 0xdU))) 
                                                                   >> 0x20U)) 
                                                          >> 0x1fU)))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_ma_allocate_io_entry[0U] 
        = ((0xfffffffeU & ((IData)((((QData)((IData)(
                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[4U])) 
                                     << 0x33U) | (((QData)((IData)(
                                                                   vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U])) 
                                                   << 0x13U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                                     >> 0xdU)))) 
                           << 1U)) | (1U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U]));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_ma_allocate_io_entry[1U] 
        = ((1U & ((IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[4U])) 
                            << 0x33U) | (((QData)((IData)(
                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U])) 
                                          << 0x13U) 
                                         | ((QData)((IData)(
                                                            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                            >> 0xdU)))) 
                  >> 0x1fU)) | (0xfffffffeU & ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[4U])) 
                                                          << 0x33U) 
                                                         | (((QData)((IData)(
                                                                             vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U])) 
                                                             << 0x13U) 
                                                            | ((QData)((IData)(
                                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                                               >> 0xdU))) 
                                                        >> 0x20U)) 
                                               << 1U)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_ma_allocate_io_entry[2U] 
        = __Vtemp2823[2U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_ma_allocate_io_entry[3U] 
        = ((0xfffU & ((IData)((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                << 0x3aU) | (((QData)((IData)(
                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])) 
                                                >> 6U)))) 
                      >> 0x14U)) | (0xfffff000U & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                                              << 0x3aU) 
                                                             | (((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U])) 
                                                                 << 0x1aU) 
                                                                | ((QData)((IData)(
                                                                                vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])) 
                                                                   >> 6U))) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_ma_allocate_io_entry[4U] 
        = ((0xfffU & ((IData)(((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U])) 
                                 << 0x3aU) | (((QData)((IData)(
                                                               vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U])) 
                                               << 0x1aU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U])) 
                                                 >> 6U))) 
                               >> 0x20U)) >> 0x14U)) 
           | (0xfffff000U & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                      >> 9U)) << 0xcU)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_ma_allocate_io_entry[5U] 
        = (0xfffU & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                              >> 9U)) >> 0x14U));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___0_OR_NOT_ff_core_request_first___05F2_BITS_74_TO_7_ETC___05F_d610 
        = (((((2U != (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[3U] 
                             << 0x17U) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                          >> 9U)))) 
              | (7U != (0x1fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[1U] 
                                  << 0x1fU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                               >> 1U))))) 
             | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_reservation_address[2U] 
                & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__IF_rg_reservation_address_07_BIT_64_08_THEN_rg_ETC___05F_d312))) 
            & (0x80000000U > (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                      >> 9U)))) | (0U 
                                                   != (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__x___05Fh38897)));
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
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta_316_BITS_37_TO_36_317_EQ_0_318_OR_ETC___05F_d1498 
        = (1U & ((((0U == (3U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[2U] 
                                  << 0x1cU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_meta[1U] 
                                               >> 4U)))) 
                   | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fill_err)) 
                  | vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_resp_rv_port1___05Fread[0U]) 
                 & (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_valid___05Fh95974) 
                     & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__lv_set_dirty___05Fh95975)) 
                    >> (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__v___05Fh95979))));
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
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT___ma_allocate_io_RL_rl_ram_check_EN_m_iobuffer_wget 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_wr_cache_enable_wget___05F13_37_OR_ff_from_tlb_ETC___05F_d574) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread)));
}

VL_INLINE_OPT void VmkTbSoc::_sequent__TOP__24(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_sequent__TOP__24\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2864[3];
    WData/*95:0*/ __Vtemp2868[3];
    WData/*95:0*/ __Vtemp2869[3];
    WData/*95:0*/ __Vtemp2876[3];
    WData/*95:0*/ __Vtemp2899[3];
    WData/*95:0*/ __Vtemp2916[3];
    WData/*95:0*/ __Vtemp2923[3];
    WData/*223:0*/ __Vtemp2924[7];
    WData/*223:0*/ __Vtemp2926[7];
    WData/*319:0*/ __Vtemp2930[10];
    WData/*95:0*/ __Vtemp2934[3];
    WData/*223:0*/ __Vtemp2935[7];
    WData/*95:0*/ __Vtemp2941[3];
    WData/*223:0*/ __Vtemp2942[7];
    WData/*319:0*/ __Vtemp2950[10];
    // Body
    if ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget))) {
        if ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CASE_ma_commit_store_c_BIT_0_0_NOT_v_sb_commit_ETC___05Fq9 
                = (1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_commit_1)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CASE_ma_commit_store_c_BIT_0_0_NOT_v_sb_commit_ETC___05Fq9 
            = (1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_commit_0)));
    }
    if ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget))) {
        if ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget))) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CASE_ma_commit_store_c_BIT_0_0_v_sb_valid_0_1___05FETC___05Fq10 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_1;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CASE_ma_commit_store_c_BIT_0_0_v_sb_valid_0_1___05FETC___05Fq10 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_0;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_commit_0_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_RDY_cache_mv_initiate_store_snd) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget)))
            ? ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget)) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__ma_commit_store_c_BIT_1_86_EQ_SEL_ARR_v_sb_met_ETC___05F_d488))
            : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_commit_0));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_commit_1_port1___05Fread 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_RDY_cache_mv_initiate_store_snd) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget))
            ? ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5__DOT__wr_commit_cacheop_wget) 
               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__ma_commit_store_c_BIT_1_86_EQ_SEL_ARR_v_sb_met_ETC___05F_d488))
            : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_commit_1));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fence_operation 
        = ((((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_ff__DOT__full_reg) 
               & (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_stall) 
                     & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                        >> 0xcU)) & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_line_empty)) 
                   & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_0)) 
                      & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_1)))) 
                  & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_empty))) 
              & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__empty_reg)) 
             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_performing_replay))) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_handling))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_eviction_required)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__IF_v_lb_valid_0_read_AND_v_lb_tag_0_read___05F89_E_ETC___05F_d292 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_0) 
            & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_tag_0 
               == (0x3ffffffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                         >> 0xfU)))))
            ? 1U : 0U);
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__b___05Fh13882 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_1) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_tag_1 
              == (0x3ffffffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                        >> 0xfU)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__b___05Fh13894 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_2) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_tag_2 
              == (0x3ffffffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                        >> 0xfU)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__b___05Fh13906 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_3) 
           & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_tag_3 
              == (0x3ffffffU & (IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                        >> 0xfU)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0_read___05F0_BITS_65_TO_2_8_AND_v_sb_me_ETC___05F_d412 
        = ((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[2U])) 
             << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[1U])) 
                           << 0x1eU) | ((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[0U])) 
                                        >> 2U))) & 
           (- (QData)((IData)((((0x1fffffffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[5U] 
                                                 << 0x18U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_0[4U] 
                                                   >> 8U))) 
                                == (0x1fffffffU & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                           >> 0xcU)))) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_0))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1_read___05F2_BITS_65_TO_2_9_AND_v_sb_me_ETC___05F_d448 
        = ((((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[2U])) 
             << 0x3eU) | (((QData)((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[1U])) 
                           << 0x1eU) | ((QData)((IData)(
                                                        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[0U])) 
                                        >> 2U))) & 
           (- (QData)((IData)((((0x1fffffffU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[5U] 
                                                 << 0x18U) 
                                                | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_meta_1[4U] 
                                                   >> 8U))) 
                                == (0x1fffffffU & (IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                                                           >> 0xcU)))) 
                               & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_1))))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check 
        = (((((((((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread 
                           >> 0x29U)) & (((((((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy)) 
                                              & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy))) 
                                             & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy))) 
                                            & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv[4U] 
                                                  >> 0xdU))) 
                                           & (~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_ptw_response_rv[2U] 
                                                 >> 0xcU))) 
                                          & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_ff__DOT__full_reg)) 
                                         & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_request__DOT__full_reg))) 
                 & (((((~ (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                           >> 0xcU)) & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_miss_handling))) 
                      & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_line_full))) 
                     & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_mv_sb_full))) 
                    & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_full)))) 
                & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy))) 
               & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_eviction_required))) 
              & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_performing_replay))) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__empty_reg)) 
            & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_mem_wr_request__DOT__empty_reg))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage5_RDY_cache_mv_initiate_ioop)));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_commit_0_port1___05Fread___05F09_v_sb_com_ETC___05F_d112 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_commit_1_port1___05Fread;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_commit_0_port1___05Fread___05F09_v_sb_com_ETC___05F_d112 
            = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_commit_0_port1___05Fread;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_store) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail 
                = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail_D_IN;
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail = 0U;
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_ff_core_response_enqw_wset_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_fence_operation) 
           & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_global_dirty)) 
              | ((0x3fU == (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_set)) 
                 & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__rg_fence_way) 
                    >> 3U))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__NOT_0_CONCAT_v_lb_valid_3_read___05F0_AND_v_lb_tag_ETC___05F_d297 
        = (1U < (7U & ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__b___05Fh13906) 
                         + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__b___05Fh13894)) 
                        + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__b___05Fh13882)) 
                       + (1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__IF_v_lb_valid_0_read_AND_v_lb_tag_0_read___05F89_E_ETC___05F_d292)))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__lv_index___05F_h15012 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__b___05Fh13894) 
             | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__b___05Fh13906)) 
            << 1U) | ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__b___05Fh13882) 
                      | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__b___05Fh13906)));
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
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_EN_ma_allocate_io 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_wr_cache_enable_wget___05F13_37_OR_ff_from_tlb_ETC___05F_d574)) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CAN_FIRE_RL_rl_commit_from_sb_to_line 
        = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_valid_0_read___05F1_v_sb_valid_1_read_ETC___05F_d108) 
             & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_commit_0_port1___05Fread___05F09_v_sb_com_ETC___05F_d112)) 
            & ((2U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                ? ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_3)
                    : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_2))
                : ((1U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__SEL_ARR_v_sb_meta_0_read___05F0_BITS_67_TO_66_4_v___05FETC___05F_d115))
                    ? (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_1)
                    : (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_lb_valid_0)))) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_busy)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer_EN_ma_allocate_store 
        = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
            & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__NOT_IF_ff_core_request_first___05F2_BITS_74_TO_73___05FETC___05F_d417)) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_from_tlb_rv_port1___05Fread)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request_DEQ 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__MUX_ff_core_response_enqw_wset_1___05FSEL_1) 
           | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__CAN_FIRE_RL_mkConnectionGetPut_3 
        = (1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_hold_request_rv_port1___05Fread[4U] 
                  >> 0xdU) & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__ptwalk_ff_hold_req__DOT__empty_reg))));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__MUX_v_iobuff_commit_0_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_EN_ma_allocate_io) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_tail)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__MUX_v_iobuff_commit_1_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer_EN_ma_allocate_io) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__rg_tail));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_valid_0_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CAN_FIRE_RL_rl_commit_from_sb_to_line) 
           & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head)));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__MUX_v_sb_valid_1_write_1___05FSEL_1 
        = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CAN_FIRE_RL_rl_commit_from_sb_to_line) 
           & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_head));
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail_D_IN 
        = (1U & ((~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail)) 
                 & ((IData)(1U) + (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail))));
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CASE_rg_sb_tail_0_NOT_v_sb_valid_0_1_NOT_v_sb___05FETC___05Fq8 
                = (1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_1)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CASE_rg_sb_tail_0_NOT_v_sb_valid_0_1_NOT_v_sb___05FETC___05Fq8 
            = (1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_valid_0)));
    }
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
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail) {
        if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__rg_sb_tail) {
            vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CASE_rg_sb_tail_0_NOT_v_sb_commit_0port1___05Frea_ETC___05Fq11 
                = (1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_commit_1_port1___05Fread)));
        }
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__CASE_rg_sb_tail_0_NOT_v_sb_commit_0port1___05Frea_ETC___05Fq11 
            = (1U & (~ (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__v_sb_commit_0_port1___05Fread)));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__n___05Fh19495 
        = ((~ vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh19645) 
           & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__y___05Fh19644);
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
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__lv_storemask___05Fh14864 
        = (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__x___05Fh35113 
           | vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__m_storebuffer__DOT__y___05Fh35114);
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
    __Vtemp2864[0U] = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__CAN_FIRE_RL_rl_io_response) 
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
        __Vtemp2868[0U] = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
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
                            : __Vtemp2864[0U]);
        __Vtemp2868[1U] = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_fill_from_memory) 
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
        __Vtemp2868[0U] = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_ptw_response_rv[0U];
        __Vtemp2868[1U] = vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_ptw_response_rv[1U];
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_ptw_response_rv_port1___05Fread[0U] 
        = __Vtemp2868[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_ptw_response_rv_port1___05Fread[1U] 
        = __Vtemp2868[1U];
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
    VL_EXTEND_WI(76,4, __Vtemp2869, (8U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                           >> 8U)));
    __Vtemp2876[0U] = (((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__WILL_FIRE_RL_rl_ram_check) 
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
            = __Vtemp2869[0U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_wget[1U] 
            = __Vtemp2869[1U];
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_wget[2U] 
            = __Vtemp2869[2U];
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__dmem__DOT__dcache__DOT__ff_core_response_enqw_wget[0U] 
            = __Vtemp2876[0U];
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
        __Vtemp2899[0U] = ((0xffffffc0U & ((IData)(
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
        __Vtemp2899[1U] = ((0x3fU & ((IData)((((QData)((IData)(
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
        __Vtemp2899[2U] = ((0x3c0U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
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
        __Vtemp2899[0U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[0U]
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                ? ((0xffffffc0U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x) 
                                                   << 6U)) 
                                   | (0x3fU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                                << 0x1dU) 
                                               | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[0U] 
                                                  >> 3U))))
                                : 0U));
        __Vtemp2899[1U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_baseout_1_D_OUT[1U]
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                ? ((0x3fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x) 
                                             >> 0x1aU)) 
                                   | (0xffffffc0U & 
                                      ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x 
                                                >> 0x20U)) 
                                       << 6U))) : 0U));
        __Vtemp2899[2U] = ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
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
        = __Vtemp2899[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_baseout_to_stage5_enq_data[1U] 
        = __Vtemp2899[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_baseout_to_stage5_enq_data[2U] 
        = __Vtemp2899[2U];
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
        __Vtemp2916[0U] = ((0xfffffffcU & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                            << 0x1fU) 
                                           | (0x7ffffffcU 
                                              & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[0U] 
                                                 >> 1U)))) 
                           | ((0x800U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])
                               ? 2U : ((2U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U])
                                        ? 3U : 0U)));
        __Vtemp2916[1U] = ((3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                  >> 1U)) | (0xfffffffcU 
                                             & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
                                                 << 0x1fU) 
                                                | (0x7ffffffcU 
                                                   & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[1U] 
                                                      >> 1U)))));
        __Vtemp2916[2U] = ((3U & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
                                  >> 1U)) | (0xffcU 
                                             & (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_fuid_1_D_OUT[2U] 
                                                >> 1U)));
    } else {
        __Vtemp2916[0U] = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
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
        __Vtemp2916[1U] = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
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
        __Vtemp2916[2U] = ((((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
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
        = __Vtemp2916[0U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_fuid_to_stage5_enq_data[1U] 
        = __Vtemp2916[1U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_fuid_to_stage5_enq_data[2U] 
        = __Vtemp2916[2U];
    __Vtemp2923[0U] = (1U | ((0xffffffc0U & ((IData)(
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
    __Vtemp2923[1U] = ((0x3fU & ((IData)((((QData)((IData)(
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
    __Vtemp2923[2U] = (0x3fU & ((IData)(((((QData)((IData)(
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
    VL_EXTEND_WW(209,70, __Vtemp2924, __Vtemp2923);
    __Vtemp2926[1U] = (((2U != (7U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT))) 
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
                        : __Vtemp2924[1U]);
    __Vtemp2930[6U] = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
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
                                  : __Vtemp2924[6U]))));
    __Vtemp2934[0U] = ((0xffffffc0U & ((IData)((((QData)((IData)(
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
    __Vtemp2934[1U] = ((0x3fU & ((IData)((((QData)((IData)(
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
    __Vtemp2934[2U] = (0x3fU & ((IData)(((((QData)((IData)(
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
    VL_EXTEND_WW(209,70, __Vtemp2935, __Vtemp2934);
    __Vtemp2941[0U] = ((0xffffffc0U & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x) 
                                       << 6U)) | (0x3fU 
                                                  & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[0U]));
    __Vtemp2941[1U] = ((0x3fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x) 
                                 >> 0x1aU)) | (0xffffffc0U 
                                               & ((IData)(
                                                          (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x 
                                                           >> 0x20U)) 
                                                  << 6U)));
    __Vtemp2941[2U] = (0x3fU & ((IData)((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_first_x 
                                         >> 0x20U)) 
                                >> 0x1aU));
    VL_EXTEND_WW(209,70, __Vtemp2942, __Vtemp2941);
    if (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__MUX_rx_commitlog_w_ena_wset_1___05FSEL_1) {
        __Vtemp2950[2U] = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
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
                                : __Vtemp2924[2U]));
        __Vtemp2950[7U] = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                               >> 1U)))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[7U]
                            : ((0x7ffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[7U]) 
                               | (0xfff80000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[7U])));
        __Vtemp2950[8U] = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                               >> 1U)))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[8U]
                            : ((0x7ffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[8U]) 
                               | (0xfff80000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[8U])));
        __Vtemp2950[9U] = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
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
                    : __Vtemp2924[0U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[1U] 
            = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                       >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 1U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[1U]
                : __Vtemp2926[1U]);
    } else {
        __Vtemp2950[2U] = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                            | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                            ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[2U]
                            : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                                ? __Vtemp2935[2U] : 
                               ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                 ? __Vtemp2942[2U] : 0U)));
        __Vtemp2950[7U] = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
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
        __Vtemp2950[8U] = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
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
        __Vtemp2950[9U] = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
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
                    ? __Vtemp2935[0U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                          ? __Vtemp2942[0U]
                                          : 0U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[1U] 
            = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[1U]
                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                    ? __Vtemp2935[1U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                          ? __Vtemp2942[1U]
                                          : 0U)));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[2U] 
        = __Vtemp2950[2U];
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
                    : __Vtemp2924[3U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[4U] 
            = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                       >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 1U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[4U]
                : (((2U != (7U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT))) 
                    | (7U != (0x1fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT) 
                                       >> 3U)))) ? 
                   ((0x1ffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[4U]) 
                    | (0xfffe0000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[4U]))
                    : __Vtemp2924[4U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[5U] 
            = ((1U & ((vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                       >> 0xbU) | (vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U] 
                                   >> 1U))) ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[5U]
                : (((2U != (7U & (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT))) 
                    | (7U != (0x1fU & ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_memoryout_D_OUT) 
                                       >> 3U)))) ? 
                   ((0x1ffffU & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[5U]) 
                    | (0xfffe0000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[5U]))
                    : __Vtemp2924[5U]));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[6U] 
            = __Vtemp2930[6U];
    } else {
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[3U] 
            = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[3U]
                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                    ? __Vtemp2935[3U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                          ? __Vtemp2942[3U]
                                          : 0U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[4U] 
            = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[4U]
                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                    ? __Vtemp2935[4U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                          ? __Vtemp2942[4U]
                                          : 0U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[5U] 
            = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[5U]
                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                    ? __Vtemp2935[5U] : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                                          ? __Vtemp2942[5U]
                                          : 0U)));
        vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[6U] 
            = (((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_trapout) 
                | (IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_systemout))
                ? vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[6U]
                : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_fwd_baseout)
                    ? (0x60000U | ((0xfff80000U & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[6U]) 
                                   | __Vtemp2935[6U]))
                    : ((IData)(vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_capture_muldiv)
                        ? (0x60000U | ((0xfff80000U 
                                        & vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__ff_commitlog_1_D_OUT[6U]) 
                                       | __Vtemp2942[6U]))
                        : 0U)));
    }
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[7U] 
        = __Vtemp2950[7U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[8U] 
        = __Vtemp2950[8U];
    vlTOPp->mkTbSoc__DOT__soc__DOT__ccore_0__DOT__riscv__DOT__stage4_tx_tx_commitlog_enq_data[9U] 
        = __Vtemp2950[9U];
}

void VmkTbSoc::_eval(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_eval\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
         | ((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->CLK)) & (IData)(vlTOPp->__Vclklast__TOP__CLK))) {
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->_sequent__TOP__16(vlSymsp);
    }
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__21(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
         | ((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)))) {
        vlTOPp->_sequent__TOP__22(vlSymsp);
    }
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__23(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
         | ((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)))) {
        vlTOPp->_sequent__TOP__24(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlTOPp->__Vclklast__TOP__RST_N = vlTOPp->RST_N;
}

VL_INLINE_OPT QData VmkTbSoc::_change_request(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_change_request\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VmkTbSoc::_change_request_1(VmkTbSoc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_change_request_1\n"); );
    VmkTbSoc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmkTbSoc::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
}
#endif  // VL_DEBUG
