/**
 * Copyright (C) 2013-2015
 *
 * @author ouyangchengfeng@xiaomi.com
 * @date   2018-11-14
 *
 * @file   S_3_IndicatorLight_doChange.c
 *
 * @remark
 *
 */

#include "arch_dbg.h"
#include "S_3_IndicatorLight_doChange.h"
#include "operation_executor.h"

#define TAG "S_3_IndicatorLight_doChange"


void P_3_1_On_doChange(miio_handle_t handle, bool newValue)
{
    if (send_property_changed(handle, 3, 1, property_value_new_boolean(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_3_2_Mode_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 3, 2, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_3_3_Brightness_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 3, 3, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_3_4_Color_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 3, 4, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_3_5_ColorTemperature_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 3, 5, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_3_6_Flow_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 3, 6, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}


void P_3_7_Saturability_doChange(miio_handle_t handle, int newValue)
{
    if (send_property_changed(handle, 3, 7, property_value_new_integer(newValue)) != MIIO_OK)
    {
        LOG_ERROR_TAG(TAG, "send_property_changed failed!\n");
    }
}

