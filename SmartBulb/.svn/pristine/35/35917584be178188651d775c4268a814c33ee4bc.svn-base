/**
* Copyright (C) 2013-2015
*
* @author ouyangchengfeng@xiaomi.com
* @date   2018-11-14
*
* @file   S_3_IndicatorLight_doSet.c
*
* @remark
*
*/

#include "S_3_IndicatorLight_doSet.h"
#include "S_3_IndicatorLight_doChange.h"
#include "operation_code.h"
#include "iid.h"

static void P_3_1_On_doSet(property_operation_t *o)
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

static void P_3_2_Mode_doSet(property_operation_t *o)
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

static void P_3_3_Brightness_doSet(property_operation_t *o)
{
    // 判断数据格式是否正确，如果错误，返回代码: OPERATION_ERROR_VALUE
    if (o->value->format != PROPERTY_FORMAT_NUMBER)
    {
        o->code = OPERATION_ERROR_VALUE;
        return;
    }

    // 判断数据取值范围是否合法，如果不合法，返回代码: OPERATION_ERROR_VALUE
    if (o->value->data.number.value.integerValue < 1 || o->value->data.number.value.integerValue > 100)
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

static void P_3_4_Color_doSet(property_operation_t *o)
{
    // 判断数据格式是否正确，如果错误，返回代码: OPERATION_ERROR_VALUE
    if (o->value->format != PROPERTY_FORMAT_NUMBER)
    {
        o->code = OPERATION_ERROR_VALUE;
        return;
    }

    // 判断数据取值范围是否合法，如果不合法，返回代码: OPERATION_ERROR_VALUE
    if (o->value->data.number.value.integerValue < 0 || o->value->data.number.value.integerValue > 16777215)
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

static void P_3_5_ColorTemperature_doSet(property_operation_t *o)
{
    // 判断数据格式是否正确，如果错误，返回代码: OPERATION_ERROR_VALUE
    if (o->value->format != PROPERTY_FORMAT_NUMBER)
    {
        o->code = OPERATION_ERROR_VALUE;
        return;
    }

    // 判断数据取值范围是否合法，如果不合法，返回代码: OPERATION_ERROR_VALUE
    if (o->value->data.number.value.integerValue < 1000 || o->value->data.number.value.integerValue > 10000)
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

static void P_3_6_Flow_doSet(property_operation_t *o)
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

static void P_3_7_Saturability_doSet(property_operation_t *o)
{
    // 判断数据格式是否正确，如果错误，返回代码: OPERATION_ERROR_VALUE
    if (o->value->format != PROPERTY_FORMAT_NUMBER)
    {
        o->code = OPERATION_ERROR_VALUE;
        return;
    }

    // 判断数据取值范围是否合法，如果不合法，返回代码: OPERATION_ERROR_VALUE
    if (o->value->data.number.value.integerValue < 0 || o->value->data.number.value.integerValue > 100)
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

void S_3_IndicatorLight_doSet(property_operation_t *o)
{
    switch (o->piid)
    {
        case IID_3_1_On:
            P_3_1_On_doSet(o);
            break;

        case IID_3_2_Mode:
            P_3_2_Mode_doSet(o);
            break;

        case IID_3_3_Brightness:
            P_3_3_Brightness_doSet(o);
            break;

        case IID_3_4_Color:
            P_3_4_Color_doSet(o);
            break;

        case IID_3_5_ColorTemperature:
            P_3_5_ColorTemperature_doSet(o);
            break;

        case IID_3_6_Flow:
            P_3_6_Flow_doSet(o);
            break;

        case IID_3_7_Saturability:
            P_3_7_Saturability_doSet(o);
            break;

        default:
            o->code = OPERATION_ERROR_CANNOT_WRITE;
            break;
    }
}