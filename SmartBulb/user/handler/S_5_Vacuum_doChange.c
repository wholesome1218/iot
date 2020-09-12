/**
 * Copyright (C) 2013-2015
 *
 * @author ouyangchengfeng@xiaomi.com
 * @date   2018-11-14
 *
 * @file   S_5_Vacuum_doChange.c
 *
 * @remark
 *
 */

#include "arch_dbg.h"
#include "S_5_Vacuum_doChange.h"
#include "operation_executor.h"

#define TAG "S_5_Vacuum_doChange"


void P_5_1_Status_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 5, 1, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_5_2_Fault_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 5, 2, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_5_3_On_doChange(miio_handle_t handle, bool newValue)
{
    if (send_property_changed(handle, 5, 3, property_value_new_boolean(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_5_4_Mode_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 5, 4, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_5_5_SpeedLevel_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 5, 5, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_5_6_Uv_doChange(miio_handle_t handle, bool newValue)
{
    if (send_property_changed(handle, 5, 6, property_value_new_boolean(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_5_7_FanLevel_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 5, 7, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}

