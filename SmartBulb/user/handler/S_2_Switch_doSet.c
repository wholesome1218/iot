/**
* Copyright (C) 2013-2015
*
* @author ouyangchengfeng@xiaomi.com
* @date   2018-11-14
*
* @file   S_2_Switch_doSet.c
*
* @remark
*
*/

#include "S_2_Switch_doSet.h"
#include "S_2_Switch_doChange.h"
#include "operation_code.h"
#include "iid.h"

static void P_2_1_On_doSet(property_operation_t *o)
{
    // 判断数据格式是否正确，如果错误，返回代码: OPERATION_ERROR_VALUE
    if (o->value->format != PROPERTY_FORMAT_BOOLEAN)
    {
        o->code = OPERATION_ERROR_VALUE;
        return;
    }

    // TODO: 执行写操作: o->value->data.boolean.value;

    // 如果成功，返回代码: OPERATION_OK
    o->code = OPERATION_OK;
    
    //TODO 异步调用xxx_doChange接口，上报状态，通知app状态变化，统一APP修改、定时器触发后的上报机制

    return;
}

static void P_2_2_Name_doSet(property_operation_t *o)
{
    // 判断数据格式是否正确，如果错误，返回代码: OPERATION_ERROR_VALUE
    if (o->value->format != PROPERTY_FORMAT_STRING)
    {
        o->code = OPERATION_ERROR_VALUE;
        return;
    }

    // TODO: 执行写操作: o->value->data.string.value;

    // 如果成功，返回代码: OPERATION_OK
    o->code = OPERATION_OK;
    
    //TODO 异步调用xxx_doChange接口，上报状态，通知app状态变化，统一APP修改、定时器触发后的上报机制

    return;
}

static void P_2_4_Mode_doSet(property_operation_t *o)
{
    // 判断数据格式是否正确，如果错误，返回代码: OPERATION_ERROR_VALUE
    if (o->value->format != PROPERTY_FORMAT_NUMBER)
    {
        o->code = OPERATION_ERROR_VALUE;
        return;
    }

    // 简单判断数据取值范围是否合法，如果不合法，返回代码: OPERATION_ERROR_VALUE
    if (o->value->data.number.value.integerValue < 0 || o->value->data.number.value.integerValue > 0)
    {
        o->code = OPERATION_ERROR_VALUE;
        return;
    }

    // TODO: 执行写操作: o->value->data.number.value.integerValue;

    // 如果成功，返回代码: OPERATION_OK
    o->code = OPERATION_OK;
    
    //TODO 异步调用xxx_doChange接口，上报状态，通知app状态变化，统一APP修改、定时器触发后的上报机制

    return;
}

void S_2_Switch_doSet(property_operation_t *o)
{
    switch (o->piid)
    {
        case IID_2_1_On:
            P_2_1_On_doSet(o);
            break;

        case IID_2_2_Name:
            P_2_2_Name_doSet(o);
            break;

        case IID_2_4_Mode:
            P_2_4_Mode_doSet(o);
            break;

        default:
            o->code = OPERATION_ERROR_CANNOT_WRITE;
            break;
    }
}