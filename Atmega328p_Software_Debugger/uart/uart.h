/*
 * uart.h
 *
 * Created: 3/28/19 6:33:04 AM
 *  Author: Ahmed El-Torky
 */

#ifndef UART_H_
#define UART_H_

#define F_CPU 1000000ul
#define BAUD_RATE 2400
#define BAUD_RATE_VALUE (((F_CPU) / (BAUD_RATE * 16UL)) - 1)

typedef struct
{
	/* Place here module configuration registers. */
	uint8_t UBRRH_cfg;
	uint8_t UBRRL_cfg;
	uint8_t UCSRA_cfg;
	uint8_t UCSRB_cfg;
	uint8_t UCSRC_cfg;
} UART_cfg;

extern void UART_Init(UART_cfg *my_cfg);
extern void UART_SendPayload(uint8_t *tx_data, uint16_t len);
extern void UART_ReceivePayload(uint8_t *rx_data, uint16_t len);
extern uint8_t UART_IsDataAvaiable(void);
extern uint8_t UART_IsTxComplete(void);
extern uint8_t UART_IsRxComplete(void);

#endif /* UART_H_ */
