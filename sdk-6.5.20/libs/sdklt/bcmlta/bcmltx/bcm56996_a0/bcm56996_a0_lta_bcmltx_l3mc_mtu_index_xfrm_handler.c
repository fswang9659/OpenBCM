/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table mapping files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
/* Logical Table Adaptor for component bcmltx */
/* Handler: bcm56996_a0_lta_bcmltx_l3mc_mtu_index_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcml3/bcmltx_l3mc_mtu_index.h>
#include <bcmdrd/chip/bcm56996_a0_enum.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_xfrm_field_desc.h>

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_l3mc_mtu_index_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_l3mc_mtu_index_l3_mc_mtu_dst_field_desc_d0[];

static const
bcmltd_field_list_t
bcm56996_a0_lta_bcmltx_l3mc_mtu_index_src_list_s0 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lrd_bcmltx_l3mc_mtu_index_src_field_desc_s0
};

static const bcmltd_field_list_t
bcm56996_a0_lrd_bcmltx_l3mc_mtu_index_l3_mc_mtu_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lrd_bcmltx_l3mc_mtu_index_l3_mc_mtu_dst_field_desc_d0
};

static const uint32_t
bcm56996_a0_lta_bcmltx_l3mc_mtu_index_transform_src_s0[1] = {
    L3_MC_MTUt_TM_MC_GROUP_IDf,
};

static const uint32_t
bcm56996_a0_lrd_bcmltx_l3mc_mtu_index_l3_mc_mtu_transform_dst_d0[1] = {
    BCMLRD_FIELD_INDEX,
};

static const bcmltd_generic_arg_t
bcm56996_a0_lta_bcmltx_l3mc_mtu_index_comp_data = {
    .sid       = L3_MC_MTUt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_l3mc_mtu_index_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56996_a0_lta_bcmltx_l3mc_mtu_index_transform_src_s0,
    .field_list  = &bcm56996_a0_lta_bcmltx_l3mc_mtu_index_src_list_s0,
    .rfields     = 1,
    .rfield      = bcm56996_a0_lrd_bcmltx_l3mc_mtu_index_l3_mc_mtu_transform_dst_d0,
    .rfield_list = &bcm56996_a0_lrd_bcmltx_l3mc_mtu_index_l3_mc_mtu_dst_list_d0,
    .comp_data   = &bcm56996_a0_lta_bcmltx_l3mc_mtu_index_comp_data
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_l3mc_mtu_index_xfrm_handler_rev_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56996_a0_lrd_bcmltx_l3mc_mtu_index_l3_mc_mtu_transform_dst_d0,
    .field_list  = &bcm56996_a0_lrd_bcmltx_l3mc_mtu_index_l3_mc_mtu_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56996_a0_lta_bcmltx_l3mc_mtu_index_transform_src_s0,
    .rfield_list = &bcm56996_a0_lta_bcmltx_l3mc_mtu_index_src_list_s0,
    .comp_data   = &bcm56996_a0_lta_bcmltx_l3mc_mtu_index_comp_data
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_l3mc_mtu_index_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_l3mc_mtu_index_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_l3mc_mtu_index_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_l3mc_mtu_index_xfrm_handler_rev_s0_d0 = {
    .transform     = bcmltx_l3mc_mtu_index_rev_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_l3mc_mtu_index_xfrm_handler_rev_arg_s0_d0
};

