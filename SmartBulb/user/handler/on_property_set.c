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

#include "on_property_set.h"
#include "print_value.h"
#include "arch_dbg.h"
#include "operation_code.h"
#include "iid.h"
#include "S_2_Switch_doSet.h"
#include "S_3_IndicatorLight_doSet.h"
#include "S_4_Customer_doSet.h"
#include "S_5_Vacuum_doSet.h"

void on_property_set(property_operation_t *o)
{
    LOG_INFO("on_property_set: siid = [%d], piid = [%d]\n", o->siid, o->piid);
    
    if (o->value == NULL)
    {
    	LOG_ERROR("value is NULL\n");
    	return;
    }
    
    print_value(o->value);

    switch (o->siid)
    {
        case IID_2_Switch:
            S_2_Switch_doSet(o);
            break;

        case IID_3_IndicatorLight:
            S_3_IndicatorLight_doSet(o);
            break;

        case IID_4_Customer:
            S_4_Customer_doSet(o);
            break;

        case IID_5_Vacuum:
            S_5_Vacuum_doSet(o);
            break;

        default:
            o->code = OPERATION_OK;
            break;
    }
}