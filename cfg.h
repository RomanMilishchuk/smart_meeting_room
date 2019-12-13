#ifndef CFG_H_
#define CFG_H_

#include "cyhal.h"
#include "cybsp.h"
#include "cycfg.h"
#include "cycfg_ble.h"
#include "FreeRTOS.h"
#include "task.h"

#include "main_fsm.h"

typedef enum {
	MCU_STATE_DEEP_SLEEP,
	MCU_STATE_SHUT_DOWN_BLUETOOTH,
	MCU_STATE_STARTING,
	MCU_STATE_CONNECTING,
	MCU_STATE_UPDATING_INFO,
	MCU_STATE_UPDATING_DISPLAY,
	MCU_STATE_UPDATING_DISPLAY_FINISHED,
	MCU_STATE_ERROR
} mcu_state_t;

mcu_state_t curr_state;

#define BLESS_INTR_PRIORITY		(3u)
#define MCWDT_INTR_PRIORITY     (7u)

#define LOW_POWER_HIBERNATE 1
#define LOW_POWER_DEEP_SLEEP 2

#define LOW_POWER_MODE LOW_POWER_DEEP_SLEEP

bool mcwdt_intr_flag;
bool gpio_intr_flag;

int init_peripherial();

#endif /* CFG_H_ */