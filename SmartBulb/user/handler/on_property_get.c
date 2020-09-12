/**
 * Copyright (C) 2013-2015
 *
 * @author ouyangchengfeng@xiaomi.com
 * @date   2018-10-29
 *
 * @file   on_property_get.c
 *
 * @remark
 *
 */

#include "on_property_get.h"
#include "print_value.h"
#include "arch_dbg.h"
#include "operation_code.h"
#include "iid.h"
#include "S_1_DeviceInformation_doGet.h"
#include "S_2_Switch_doGet.h"
#include "S_3_IndicatorLight_doGet.h"
#include "S_4_Customer_doGet.h"
#include "S_5_Vacuum_doGet.h"

void on_property_get(property_operation_t *o)
{
    LOG_INFO("on_property_get\n");
	LOG_INFO("siid: %d\n", o->siid);
	LOG_INFO("piid: %d\n", o->piid);

    switch (o->siid)
    {
            case IID_1_DeviceInformation:
            S_1_DeviceInformation_doGet(o);
            break;

            case IID_2_Switch:
            S_2_Switch_doGet(o);
            break;

            case IID_3_IndicatorLight:
            S_3_IndicatorLight_doGet(o);
            break;

            case IID_4_Customer:
            S_4_Customer_doGet(o);
            break;

            case IID_5_Vacuum:
            S_5_Vacuum_doGet(o);
            break;

        default:
            o->code = OPERATION_INVALID;
            break;
    }
}