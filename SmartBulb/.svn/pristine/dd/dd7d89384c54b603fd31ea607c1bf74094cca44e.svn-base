/**
* Copyright (C) 2013-2015
*
* @author ouyangchengfeng@xiaomi.com
* @date   2018-11-14
*
* @file   S_5_Vacuum_doAction.c
*
* @remark
*
*/

#include "S_5_Vacuum_doAction.h"
#include "operation_code.h"
#include "iid.h"

static operation_code_t A_5_1_StartSweep()
{
    // TODO: 在这里执行真正的Action操作

    return OPERATION_OK;
}

static operation_code_t A_5_2_StopSweeping()
{
    // TODO: 在这里执行真正的Action操作

    return OPERATION_OK;
}

/**
 * 将Action调用转换为强类型的函数调用。
 */
static void A_5_1_StartSweep_doInvoke(action_operation_t *o)
{
    // 检查输入参数个数
    if (o->in->size != 0)
    {
        o->code = OPERATION_INVALID;
        return;
    }

    // 输出结果个数
    o->out->size = 0;
    

    // 调用真正的执行函数
    o->code = A_5_1_StartSweep();
}

/**
 * 将Action调用转换为强类型的函数调用。
 */
static void A_5_2_StopSweeping_doInvoke(action_operation_t *o)
{
    // 检查输入参数个数
    if (o->in->size != 0)
    {
        o->code = OPERATION_INVALID;
        return;
    }

    // 输出结果个数
    o->out->size = 0;
    

    // 调用真正的执行函数
    o->code = A_5_2_StopSweeping();
}

void S_5_Vacuum_doAction(action_operation_t *o)
{
    switch (o->aiid)
    {
        case IID_5_1_StartSweep:
            A_5_1_StartSweep_doInvoke(o);
            break;

        case IID_5_2_StopSweeping:
            A_5_2_StopSweeping_doInvoke(o);
            break;

        default:
            o->code = OPERATION_INVALID;
            break;
    }
}