/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mon/bcm56880_a0/bcm56880_a0_MON_EVENT_CONTROL.map.ltl for
 *      bcm56880_a0
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56880_a0_lrd_enumpool.h"
/* MON_EVENT_CONTROL field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_mon_event_control_map_field_data_mmd[] = {
    { /* 0 TRACE_MIRROR_INSTANCE_ID_0 */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 1 TRACE_MIRROR_INSTANCE_ID_1 */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 2 TRACE_MIRROR_INSTANCE_ID_2 */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 3 TRACE_MIRROR_INSTANCE_ID_3 */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 4 TRACE_MIRROR_INSTANCE_ID_4 */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 5 TRACE_MIRROR_INSTANCE_ID_5 */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 6 TRACE_MIRROR_INSTANCE_ID_6 */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 7 TRACE_MIRROR_INSTANCE_ID_7 */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 8 DROP_MIRROR_SESSION_ID */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 9 DROP_MIRROR_INSTANCE_ID */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_mon_event_control_map_field_data = {
    .fields = 10,
    .field = bcm56880_a0_lrd_mon_event_control_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_mon_event_controlt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_mon_event_controlt_attr_group = {
    .attributes = 1,
    .attr = bcm56880_a0_lrd_mon_event_controlt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_drop_event_mirror_container_mask_0_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CONTAINERf,
            .field_idx = 0,
            .minbit    = 256,
            .maxbit    = 258,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_EVENT_CONTROLt_DROP_MIRROR_SESSION_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VALUEf,
            .field_idx = 0,
            .minbit    = 259,
            .maxbit    = 262,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_EVENT_CONTROLt_DROP_MIRROR_INSTANCE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_0_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = CONTAINERf,
            .field_idx = 0,
            .minbit    = 48,
            .maxbit    = 50,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VALUEf,
            .field_idx = 0,
            .minbit    = 51,
            .maxbit    = 54,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_EVENT_CONTROLt_TRACE_MIRROR_INSTANCE_ID_0f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_1_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = CONTAINERf,
            .field_idx = 0,
            .minbit    = 48,
            .maxbit    = 50,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VALUEf,
            .field_idx = 0,
            .minbit    = 51,
            .maxbit    = 54,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_EVENT_CONTROLt_TRACE_MIRROR_INSTANCE_ID_1f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_2_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = CONTAINERf,
            .field_idx = 0,
            .minbit    = 48,
            .maxbit    = 50,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 2,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VALUEf,
            .field_idx = 0,
            .minbit    = 51,
            .maxbit    = 54,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_EVENT_CONTROLt_TRACE_MIRROR_INSTANCE_ID_2f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_3_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = CONTAINERf,
            .field_idx = 0,
            .minbit    = 48,
            .maxbit    = 50,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VALUEf,
            .field_idx = 0,
            .minbit    = 51,
            .maxbit    = 54,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_EVENT_CONTROLt_TRACE_MIRROR_INSTANCE_ID_3f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_4_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = CONTAINERf,
            .field_idx = 0,
            .minbit    = 48,
            .maxbit    = 50,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 4,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VALUEf,
            .field_idx = 0,
            .minbit    = 51,
            .maxbit    = 54,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_EVENT_CONTROLt_TRACE_MIRROR_INSTANCE_ID_4f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_5_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = CONTAINERf,
            .field_idx = 0,
            .minbit    = 48,
            .maxbit    = 50,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 5,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VALUEf,
            .field_idx = 0,
            .minbit    = 51,
            .maxbit    = 54,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_EVENT_CONTROLt_TRACE_MIRROR_INSTANCE_ID_5f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_6_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = CONTAINERf,
            .field_idx = 0,
            .minbit    = 48,
            .maxbit    = 50,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 6,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VALUEf,
            .field_idx = 0,
            .minbit    = 51,
            .maxbit    = 54,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_EVENT_CONTROLt_TRACE_MIRROR_INSTANCE_ID_6f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_7_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = CONTAINERf,
            .field_idx = 0,
            .minbit    = 48,
            .maxbit    = 50,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 7,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VALUEf,
            .field_idx = 0,
            .minbit    = 51,
            .maxbit    = 54,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_EVENT_CONTROLt_TRACE_MIRROR_INSTANCE_ID_7f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_mon_event_control_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_TRACE_DROP_EVENT_DROP_EVENT_MIRROR_CONTAINER_MASK_0m,
        },
        .entries = 2,
        .entry = bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_drop_event_mirror_container_mask_0_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_TRACE_DROP_EVENT_TRACE_EVENT_MIRROR_CONTAINER_MASK_0m,
        },
        .entries = 2,
        .entry = bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_0_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_TRACE_DROP_EVENT_TRACE_EVENT_MIRROR_CONTAINER_MASK_1m,
        },
        .entries = 2,
        .entry = bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_1_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_TRACE_DROP_EVENT_TRACE_EVENT_MIRROR_CONTAINER_MASK_2m,
        },
        .entries = 2,
        .entry = bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_2_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_TRACE_DROP_EVENT_TRACE_EVENT_MIRROR_CONTAINER_MASK_3m,
        },
        .entries = 2,
        .entry = bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_3_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_TRACE_DROP_EVENT_TRACE_EVENT_MIRROR_CONTAINER_MASK_4m,
        },
        .entries = 2,
        .entry = bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_4_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_TRACE_DROP_EVENT_TRACE_EVENT_MIRROR_CONTAINER_MASK_5m,
        },
        .entries = 2,
        .entry = bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_5_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_TRACE_DROP_EVENT_TRACE_EVENT_MIRROR_CONTAINER_MASK_6m,
        },
        .entries = 2,
        .entry = bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_6_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_TRACE_DROP_EVENT_TRACE_EVENT_MIRROR_CONTAINER_MASK_7m,
        },
        .entries = 2,
        .entry = bcm56880_a0_lrd_mon_event_controlt_ipost_trace_drop_event_trace_event_mirror_container_mask_7_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_mon_event_control_map = {
    .src_id = MON_EVENT_CONTROLt,
    .field_data = &bcm56880_a0_lrd_mon_event_control_map_field_data,
    .groups = 9,
    .group  = bcm56880_a0_lrd_mon_event_control_map_group,
    .table_attr = &bcm56880_a0_lrd_mon_event_controlt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};