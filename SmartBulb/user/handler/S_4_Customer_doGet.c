/**
* Copyright (C) 2013-2015
*
* @author ouyangchengfeng@xiaomi.com
* @date   2018-11-14
*
* @file   S_4_Customer_doGet.c
*
* @remark
*
*/

#include "S_4_Customer_doGet.h"
#include "operation_code.h"
#include "iid.h"

/**
 * 格式: property_value_new_boolean(true 或 false)　
 * 取值: true 或　false
 */
static void P_4_1_On_doGet(property_operation_t *o)
{
    o->value = property_value_new_boolean(true); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 1(Idle), 2(Busy)
 */
static void P_4_2_Status_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(1); // TODO: 这里需要读到属性真正的值
}

void S_4_Customer_doGet(property_operation_t *o)
{
    switch (o->piid)
    {
        case IID_4_1_On:
            P_4_1_On_doGet(o);
            break;

        case IID_4_2_Status:
            P_4_2_Status_doGet(o);
            break;

        default:
            o->code = OPERATION_ERROR_CANNOT_READ;
            break;
    }
}