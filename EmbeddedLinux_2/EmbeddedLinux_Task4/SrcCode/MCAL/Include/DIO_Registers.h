/*
 * DIO_Registers.h
 *
 * Created: 11/27/2023 4:43:43 PM
 *  Author: main
 */ 


#ifndef DIO_REGISTERS_H_
#define DIO_REGISTERS_H_

#include "STD_Types.h"

#define DIO_DDRA *((volatile u8*)0x3A)
#define DIO_PORTA *((volatile u8*)0x3B)
#define DIO_PINA *((volatile u8*)0x39)

#define DIO_DDRB *((volatile u8*)0x37)
#define DIO_PORTB *((volatile u8*)0x38)
#define DIO_PINB *((volatile u8*)0x36)

#define DIO_DDRC *((volatile u8*)0x34)
#define DIO_PORTC *((volatile u8*)0x35)
#define DIO_PINC *((volatile u8*)0x33)

#define DIO_DDRD *((volatile u8*)0x31)
#define DIO_PORTD *((volatile u8*)0x32)
#define DIO_PIND *((volatile u8*)0x30)

#endif /* DIO_REGISTERS_H_ */
