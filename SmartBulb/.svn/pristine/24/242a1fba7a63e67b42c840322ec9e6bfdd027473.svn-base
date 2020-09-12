/**
* Copyright (C) 2013-2015
*
* @author ouyangchengfeng@xiaomi.com
* @date   2018-11-14
*
* @file   S_2_Switch_doGet.c
*
* @remark
*
*/

#include "S_2_Switch_doGet.h"
#include "operation_code.h"
#include "iid.h"

/**
 * 格式: property_value_new_boolean(true 或 false)　
 * 取值: true 或　false
 */
static void P_2_1_On_doGet(property_operation_t *o)
{
    o->value = property_value_new_boolean(true); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_string(字符串)　
 * 取值: 字符串，没有限制取值范围
 */
static void P_2_2_Name_doGet(property_operation_t *o)
{
    o->value = property_value_new_string("hello"); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 1(Idle), 2(Busy)
 */
static void P_2_3_Status_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(1); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 0(Auto)
 */
static void P_2_4_Mode_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(0); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_integer(整数)　
 * 取值: 0(No faults)
 */
static void P_2_5_Fault_doGet(property_operation_t *o)
{
    o->value = property_value_new_integer(0); // TODO: 这里需要读到属性真正的值
}

/**
 * 格式: property_value_new_float(浮点数)　
 * 取值: 最小值: -30.0, 最大值: 100.0, 步长: 1.0
 */
static void P_2_6_Temperature_doGet(property_operation_t *o)
{
    o->value = property_value_new_float(-30.0); // TODO: 这里需要读到属性真正的值
}

void S_2_Switch_doGet(property_operation_t *o)
{
    switch (o->piid)
    {
        case IID_2_1_On:
            P_2_1_On_doGet(o);
            break;

        case IID_2_2_Name:
            //P_2_2_Name_doGet(o);
	    P_2_4_Mode_doGet(o);
            break;

        case IID_2_3_Status:
            //P_2_3_Status_doGet(o);
	    P_2_5_Fault_doGet(o);
            break;

        case IID_2_4_Mode:
            //P_2_4_Mode_doGet(o);
            P_2_6_Temperature_doGet(o);
	    break;

        case IID_2_5_Fault:
            P_2_5_Fault_doGet(o);
            
            break;

        case IID_2_6_Temperature:
            //P_2_6_Temperature_doGet(o);
            P_2_5_Fault_doGet(o);
	    break;
	case 7:
            P_2_1_On_doGet(o);
	    break;
	case 8:
            P_2_1_On_doGet(o);
	    break;
	case 9:
            P_2_1_On_doGet(o);
	    break;
	case 10:
            P_2_1_On_doGet(o);
	    break;

        case 11:
            P_2_1_On_doGet(o);
            break;
        case 12:
            P_2_1_On_doGet(o);
            break;
        case 13:
            P_2_1_On_doGet(o);
            break;
        case 14:
            P_2_1_On_doGet(o);
            break;
        case 15:
            P_2_1_On_doGet(o);
            break;
        case 16:
            P_2_1_On_doGet(o);
            break;
        case 17:
            P_2_1_On_doGet(o);
            break;
        case 18:
            P_2_1_On_doGet(o);
            break;
	default:
            o->code = OPERATION_ERROR_CANNOT_READ;
            break;
    }
}
