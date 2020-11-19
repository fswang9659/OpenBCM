
/*
 * $Id: $
 $Copyright: (c) 2020 Broadcom.
 Broadcom Proprietary and Confidential. All rights reserved.$
 *
 */
#include <src/soc/dnx/dbal/dbal_init/auto_generated/dbal_init_internal_tables_sw_state_pp_tunnel.h>

shr_error_e
dbal_init_tables_sw_state_pp_tunnel_init(
int unit,
table_db_struct_t * cur_table_param,
dbal_logical_table_t * table_info)
{
    SHR_FUNC_INIT_VARS(unit);
    SHR_IF_ERR_EXIT(dbal_init_tables_sw_state_pp_tunnel_tunnel_init(unit, cur_table_param, table_info));
exit:
    SHR_FUNC_EXIT;
}