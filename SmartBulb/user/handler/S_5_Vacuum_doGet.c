/**
* Copyright (C) 2013-2015
*
* @author ouyangchengfeng@xiaomi.com
* @date   2018-11-14
*
* @file   S_5_Vacuum_doGet.c
*
* @remark
*
*/

#include "S_5_Vacuum_doGet.h"
#include "operation_code.h"
#include "iid.h"

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 1(Idle), 2(Busy)
 */
static void P_5_1_Status_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(1); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 0(No faults)
 */
static void P_5_2_Fault_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(0); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_boolean(true 或 false)　
 * 取值: true 或　false
 */
static void P_5_3_On_doGet(property_operation_t *o)
{
    o->value = property_value_new_boolean(true); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 0(Auto)
 */
static void P_5_4_Mode_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(0); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 1(Level1)
 */
static void P_5_5_SpeedLevel_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(1); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_boolean(true 或 false)　
 * 取值: true 或　false
 */
static void P_5_6_Uv_doGet(property_operation_t *o)
{
    o->value = property_value_new_boolean(true); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 0(Auto), 1(Level1)
 */
static void P_5_7_FanLevel_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(0); // TODO: 这里需要读到属性真正的值
}

void S_5_Vacuum_doGet(property_operation_t *o)
{
    switch (o->piid)
    {
        case IID_5_1_Status:
            P_5_1_Status_doGet(o);
            break;

        case IID_5_2_Fault:
            P_5_2_Fault_doGet(o);
            break;

        case IID_5_3_On:
            P_5_3_On_doGet(o);
            break;

        case IID_5_4_Mode:
            P_5_4_Mode_doGet(o);
            break;

        case IID_5_5_SpeedLevel:
            P_5_5_SpeedLevel_doGet(o);
            break;

        case IID_5_6_Uv:
            P_5_6_Uv_doGet(o);
            break;

        case IID_5_7_FanLevel:
            P_5_7_FanLevel_doGet(o);
            break;

        default:
            o->code = OPERATION_ERROR_CANNOT_READ;
            break;
    }
}