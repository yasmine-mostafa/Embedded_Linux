/*
 * Port_Config.h
 *
 * Created: 12/2/2023 5:09:55 PM
 *  Author: main
 */ 


#ifndef PORT_CONFIG_H_
#define PORT_CONFIG_H_

#include "Port_Priv.h"
/*******************************************User Configuration*******************************************/
/*@brief:
PRE-COMP
POST_COMP*/
#define COMPILATION_MODE PRE_COMP

/*@brief:
TWO_PORTS
THREE_PORTS
FOUR_PORTS*/
#define NUM_OF_PORTS FOUR_PORTS

/*@brief:
INPUT_PU
INPUT_PD
OUTPUT_LOW
OUTPUT_HIGH*/
#define DIO_PIN0 OUTPUT_LOW
#define DIO_PIN1 OUTPUT_LOW
#define DIO_PIN2 OUTPUT_LOW
#define DIO_PIN3 OUTPUT_LOW
#define DIO_PIN4 INPUT_PD
#define DIO_PIN5 INPUT_PU
#define DIO_PIN6 INPUT_PD
#define DIO_PIN7 INPUT_PD

#define DIO_PIN8 INPUT_PU
#define DIO_PIN9 INPUT_PD
#define DIO_PIN10 OUTPUT_LOW 
#define DIO_PIN11 INPUT_PD
#define DIO_PIN12 INPUT_PU
#define DIO_PIN13 OUTPUT_HIGH
#define DIO_PIN14 OUTPUT_HIGH
#define DIO_PIN15 OUTPUT_LOW

#define DIO_PIN16 INPUT_PD
#define DIO_PIN17 OUTPUT_HIGH
#define DIO_PIN18 OUTPUT_LOW
#define DIO_PIN19 INPUT_PD
#define DIO_PIN20 INPUT_PD
#define DIO_PIN21 INPUT_PU
#define DIO_PIN22 OUTPUT_HIGH
#define DIO_PIN23 INPUT_PU

#define DIO_PIN24 OUTPUT_HIGH
#define DIO_PIN25 OUTPUT_LOW 
#define DIO_PIN26 INPUT_PD
#define DIO_PIN27 OUTPUT_HIGH
#define DIO_PIN28 OUTPUT_HIGH
#define DIO_PIN29 OUTPUT_LOW
#define DIO_PIN30 INPUT_PU
#define DIO_PIN31 INPUT_PU
/**************************************************************************************/

typedef enum
{
	PORT_enumInputPU,
	PORT_enumInputPD,
	PORT_enumOutputHigh,
	PORT_enumOutputLow,
	PORT_enumIgnore
}PORT_enumPinCnfg_t;

typedef enum
{
	PORT_A=0,
	PORT_B,
	PORT_C,
	PORT_D
}PORT_enumPortNum_t;


#endif /* PORT_CONFIG_H_ */