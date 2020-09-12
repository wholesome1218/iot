/**
 * Copyright (C) 2013-2015
 *
 * @author ouyangchengfeng@xiaomi.com
 * @date   2018-11-14
 *
 * @file   S_4_Customer_doChange.c
 *
 * @remark
 *
 */

#include "arch_dbg.h"
#include "S_4_Customer_doChange.h"
#include "operation_executor.h"

#define TAG "S_4_Customer_doChange"


void P_4_1_On_doChange(miio_handle_t handle, bool newValue)
{
    if (send_property_changed(handle, 4, 1, property_value_new_boolean(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_4_2_Status_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 4, 2, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}

