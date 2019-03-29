/*
 * Atmega328p_Software_Debugger.c
 *
 * Created: 3/28/19 6:31:27 AM
 * Author : Ahmed El-Torky
 */

#define F_CPU 1000000ul

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#include "uart/uart.h"
#include "SoftwareDebugger/SoftwareDebugger.h"

int main(void)
{

	SDEBUG_Init(); // initialize software debugger
	sei();		   // set global interrupt

	while (1)
	{
		SDEBUG_MainFunction();
		_delay_ms(500);
	}
}
