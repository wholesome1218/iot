/**
* Copyright (C) 2013-2015
*
* @author ouyangchengfeng@xiaomi.com
* @date   2018-11-14
*
* @file   S_3_IndicatorLight_doGet.c
*
* @remark
*
*/

#include "S_3_IndicatorLight_doGet.h"
#include "operation_code.h"
#include "iid.h"

/**
 * 格式: property_value_new_boolean(true 或 false)　
 * 取值: true 或　false
 */
static void P_3_1_On_doGet(property_operation_t *o)
{
    o->value = property_value_new_boolean(true); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 0(Auto)
 */
static void P_3_2_Mode_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(0); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 最小值: 1, 最大值: 100, 步长: 1
 */
static void P_3_3_Brightness_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(1); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 最小值: 0, 最大值: 16777215, 步长: 1
 */
static void P_3_4_Color_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(0); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 最小值: 1000, 最大值: 10000, 步长: 1
 */
static void P_3_5_ColorTemperature_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(1000); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 0(Auto)
 */
static void P_3_6_Flow_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(0); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 最小值: 0, 最大值: 100, 步长: 1
 */
static void P_3_7_Saturability_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(0); // TODO: 这里需要读到属性真正的值
}

void S_3_IndicatorLight_doGet(property_operation_t *o)
{
    switch (o->piid)
    {
        case IID_3_1_On:
            P_3_1_On_doGet(o);
            break;

        case IID_3_2_Mode:
            P_3_2_Mode_doGet(o);
            break;

        case IID_3_3_Brightness:
            P_3_3_Brightness_doGet(o);
            break;

        case IID_3_4_Color:
            P_3_4_Color_doGet(o);
            break;

        case IID_3_5_ColorTemperature:
            P_3_5_ColorTemperature_doGet(o);
            break;

        case IID_3_6_Flow:
            P_3_6_Flow_doGet(o);
            break;

        case IID_3_7_Saturability:
            P_3_7_Saturability_doGet(o);
            break;

        default:
            o->code = OPERATION_ERROR_CANNOT_READ;
            break;
    }
}