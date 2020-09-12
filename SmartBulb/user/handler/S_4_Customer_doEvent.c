/**
 * Copyright (C) 2013-2015
 *
 * @author ouyangchengfeng@xiaomi.com
 * @date   2018-11-14
 *
 * @file   S_4_Customer_doEvent.c
 *
 * @remark
 *
 */

#include "arch_dbg.h"
#include "S_4_Customer_doEvent.h"
#include "operation_executor.h"
#include "arguments.h"

#define TAG "S_4_Customer_doEvent"

void E_4_1_Testevent(miio_handle_t handle, int status, bool on)
{
    event_operation_t * o = NULL;

    do
    {
        // 初始化Event
        o = event_operation_new();
        if (o == NULL)
        {
            LOG_ERROR_TAG(TAG, "event_operation_new failed!\n");
            break;
        }

        o->siid = 4;
        o->eiid = 1;

        // 初始化参数列表
        o->arguments = arguments_new();
        if (o->arguments == NULL)
        {
            LOG_ERROR_TAG(TAG, "arguments_new failed!\n");
            break;
        }

        // 参数个数
        o->arguments->size = 2;

        // 第0个参数: Status
        o->arguments->arguments[0].piid = 2;
        o->arguments->arguments[0].value = property_value_new_integer(status);

        // 第1个参数: On
        o->arguments->arguments[1].piid = 1;
        o->arguments->arguments[1].value = property_value_new_boolean(on);

        // 发送消息到服务器
        if (send_event_occurred(handle, o) != MIIO_OK)
        {
            LOG_ERROR_TAG(TAG, "send_event_occurred failed!\n");
            break;
        }
    } while (false);

    if (o != NULL)
    {
        event_operation_delete(o);
    }
}

