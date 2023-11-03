 /******************************************************************************
 *
 * Module: UART
 *
 * File Name: uart.h
 *
 * Description: Header file for the UART AVR driver
 *
 * Author: Mohamed Tarek
 *
 *******************************************************************************/

#ifndef UART_H_
#define UART_H_
#include <stdint.h>
#include "std_types.h"
/*******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/

//To determine the bits data size in the UART message structure
typedef enum {
	UART_5_Bits, UART_6_Bits, UART_7_Bits, UART_8_Bits, UART_9_Bits = 7
}UART_BitData;


//To determine the parity mode
typedef enum
{
	UART_PARITY_DISABLED, UART_PARITY_EVEN=2, UART_PARITY_ODD
}UART_Parity;


//To configure the stop-bit
typedef enum
{
	UART_STOPBIT_1_BIT, UART_STOPBIT_2_BIT
}UART_StopBit;


//Typedef for the baudrate selection
typedef uint32 UART_BaudRate;


//To determine the synchronization mode
typedef enum {
	UART_ASYNCHRONOUS, UART_SYNCHRONOUS
}UART_SYNC;


//A configuration struct to be used in initializing the UART
typedef struct{
	UART_BitData bit_data;
	UART_Parity parity;
	UART_StopBit stop_bit;
	UART_BaudRate baud_rate;
	UART_SYNC synchronization;
}UART_ConfigType;

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Functional responsible for Initialize the UART device by:
 * 1. Setup the Frame format like number of data bits, parity bit type and number of stop bits.
 * 2. Enable the UART.
 * 3. Setup the UART baud rate.
 */
void UART_init(UART_ConfigType *UART_CONFIG_PTR);

/*
 * Description :
 * Functional responsible for send byte to another UART device.
 */
void UART_sendByte(const uint8 data);

/*
 * Description :
 * Functional responsible for receive byte from another UART device.
 */
uint8 UART_recieveByte(void);

/*
 * Description :
 * Send the required string through UART to the other UART device.
 */
void UART_sendString(const uint8 *Str);

/*
 * Description :
 * Receive the required string until the '#' symbol through UART from the other UART device.
 */
void UART_receiveString(uint8 *Str); // Receive until #
void UART_receiveArray(uint8_t *array, uint32_t size);

#endif /* UART_H_ */
