#include "miio_define.h"
#include "miio_api.h"
#include "miio_uart.h"
#include "arch_dbg.h"
#include "S_4_Customer_doEvent.h"
#include "S_3_IndicatorLight_doChange.h"
#include "user_app_func.h"
#include "user_app_main.h"

static int cnt = 0;

int user_app_main(int argc, void *argv)
{
	
	if(cnt++ % 20 == 0) {
		/* spec functions */
		E_4_1_Testevent(argv, 1, false);
		P_3_1_On_doChange(argv, false);

#if 1
		/* add user functions here */
		// app_func_factory(argv);
		app_func_get_time(argv);
		app_func_get_mac(argv);
		app_func_get_net_state(argv);
		// app_func_reboot(argv);
		// app_func_restore(argv);
		// app_func_getwifi(argv);
		// app_func_setwifi(argv);
		app_func_get_version(argv);
		// app_func_set_mcu_version(argv);
		// app_func_get_arch_platform(argv);
#endif
	}

	return MIIO_OK;
}

