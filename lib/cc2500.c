/*
  driver for Texas Instruments CC2500 radio
 */

#include "config.h"
#include "stm8l.h"
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "util.h"
#include "spi.h"
#include "gpio.h"
#include "timer.h"
#include "channels.h"
#include "crc.h"
#include "adc.h"
#include "telem_structure.h"
#include "cc2500.h"

#if SUPPORT_CC2500

struct telem_status t_status;

void cc2500_init(void)
{
	//...
}

void cc2500_irq()
{
	//...
}

void cc2500_start_bind_send(void)
{
	//...
}

void cc2500_start_send(void)
{
	//...
}

void cc2500_start_FCC_test(void)
{
	//...
}

void cc2500_start_factory_test(uint8_t test_mode)
{
	//...
}

void cc2500_next_FCC_power(void)
{
	//...
}

void cc2500_set_CW_mode(bool cw)
{
	//...
}

void cc2500_change_FCC_channel(int8_t change)
{
	//...
}

void cc2500_FCC_toggle_scan(void)
{
	//...
}

uint8_t get_tx_power(void)
{
	//...
	return 0;
}

int8_t get_FCC_chan(void)
{
	//...
	return 0;
}

uint8_t get_FCC_power(void)
{
	//...
	return 0;
}


#endif
