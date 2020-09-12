/**
* Copyright (C) 2013-2015
*
* @author ouyangchengfeng@xiaomi.com
* @date   2018-11-14
*
* @file   S_4_Customer_doAction.c
*
* @remark
*
*/

#include "S_4_Customer_doAction.h"
#include "operation_code.h"
#include "iid.h"

static operation_code_t A_4_1_TestAction(bool in_on, int *out_status)
{
    // TODO: 在这里执行真正的Action操作

    return OPERATION_OK;
}

/**
 * 将Action调用转换为强类型的函数调用。
 */
static void A_4_1_TestAction_doInvoke(action_operation_t *o)
{
    // 检查输入参数个数
    if (o->in->size != 1)
    {
        o->code = OPERATION_INVALID;
        return;
    }

    // 检查参数: On
    if (o->in->arguments[0].piid != 1)
    {
        o->code = OPERATION_INVALID;
        return;
    }

    if (o->in->arguments[0].value->format != PROPERTY_FORMAT_BOOLEAN)
    {
        o->code = OPERATION_INVALID;
        return;
    }

    // 输出结果个数
    o->out->size = 1;
    
    //初始化输出参数
	o->out->arguments[0].value = property_value_new_integer(1);
	o->out->arguments[0].piid = 2;

    // 调用真正的执行函数
    o->code = A_4_1_TestAction(o->in->arguments[0].value->data.boolean.value,
        &(o->out->arguments[0].value->data.number.value.integerValue));
}

void S_4_Customer_doAction(action_operation_t *o)
{
    switch (o->aiid)
    {
        case IID_4_1_TestAction:
            A_4_1_TestAction_doInvoke(o);
            break;
        case IID_4_2_TestAction:
            A_4_1_TestAction_doInvoke(o);
            break;
        case IID_4_3_TestAction:
            A_4_1_TestAction_doInvoke(o);
            break;
        case IID_4_4_TestAction:
            A_4_1_TestAction_doInvoke(o);
            break;
        case IID_4_5_TestAction:
            A_4_1_TestAction_doInvoke(o);
            break;
        case IID_4_6_TestAction:
            A_4_1_TestAction_doInvoke(o);
            break;
        case IID_4_7_TestAction:
            A_4_1_TestAction_doInvoke(o);
            break;
        case IID_4_8_TestAction:
            A_4_1_TestAction_doInvoke(o);
            break;
        case IID_4_9_TestAction:
            A_4_1_TestAction_doInvoke(o);
            break;
        case IID_4_10_TestAction:
            A_4_1_TestAction_doInvoke(o);
            break;
        case IID_4_11_TestAction:
            A_4_1_TestAction_doInvoke(o);
            break;
        default:
            o->code = OPERATION_INVALID;
            break;
    }
}