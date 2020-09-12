/**
 * Copyright (C) 2013-2015
 *
 * @author ouyangchengfeng@xiaomi.com
 * @date   2018-10-29
 *
 * @file   on_action_invoke.c
 *
 * @remark
 *
 */

#include "arch_dbg.h"
#include "on_action_invoke.h"
#include "operation_code.h"
#include "iid.h"
#include "S_4_Customer_doAction.h"
#include "S_5_Vacuum_doAction.h"

void on_action_invoke(action_operation_t *o)
{
    LOG_INFO("on_action_invoke\n");
    LOG_INFO("siid: %d\n", o->siid);
    LOG_INFO("aiid: %d\n", o->aiid);

    switch (o->siid)
    {
        case IID_4_Customer:
            S_4_Customer_doAction(o);
            break;

        case IID_5_Vacuum:
            S_5_Vacuum_doAction(o);
            break;

        default:
            o->code = OPERATION_INVALID;
            break;
    }
}