/**
 * Copyright (C) 2013-2015
 *
 * @author ouyangchengfeng@xiaomi.com
 * @date   2018-11-14
 *
 * @file   S_2_Switch_doChange.c
 *
 * @remark
 *
 */

#include "arch_dbg.h"
#include "S_2_Switch_doChange.h"
#include "operation_executor.h"

#define TAG "S_2_Switch_doChange"


void P_2_1_On_doChange(miio_handle_t handle, bool newValue)
{
    if (send_property_changed(handle, 2, 1, property_value_new_boolean(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_2_2_Name_doChange(miio_handle_t handle, const char * newValue)
{
    if (send_property_changed(handle, 2, 2, property_value_new_string(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_2_3_Status_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 2, 3, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_2_4_Mode_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 2, 4, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_2_5_Fault_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 2, 5, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_2_6_Temperature_doChange(miio_handle_t handle, float newValue)
{
    if (send_property_changed(handle, 2, 6, property_value_new_float(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}

