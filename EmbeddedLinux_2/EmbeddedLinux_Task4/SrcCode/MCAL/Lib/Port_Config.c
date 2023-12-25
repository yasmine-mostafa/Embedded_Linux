/*
 * Post_Config.c
 *
 * Created: 12/2/2023 7:16:52 PM
 *  Author: main
 */ 
#include "Port_Config.h"


	const PORT_enumPinCnfg_t PORT_enumPinCfg[NUM_OF_PORTS * NUM_OF_PINS]=
	{
		PORT_enumOutputLow,
		PORT_enumOutputLow,
		PORT_enumOutputLow,
		PORT_enumOutputLow,
		PORT_enumOutputLow,
		PORT_enumInputPU,
		PORT_enumInputPU,
		PORT_enumInputPD,
		
		PORT_enumInputPU,
		PORT_enumInputPD,
		PORT_enumInputPU,
		PORT_enumOutputHigh,
		PORT_enumOutputLow,
		PORT_enumInputPU,
		PORT_enumInputPU,
		PORT_enumInputPD,
		
		PORT_enumOutputHigh,
		PORT_enumOutputHigh,
		PORT_enumInputPU,
		PORT_enumOutputHigh,
		PORT_enumOutputLow,
		PORT_enumInputPU,
		PORT_enumInputPU,
		PORT_enumInputPD,
		
		PORT_enumOutputLow,
		PORT_enumOutputLow,
		PORT_enumInputPU,
		PORT_enumOutputHigh,
		PORT_enumOutputLow,
		PORT_enumInputPU,
		PORT_enumInputPU,
		PORT_enumInputPD
		
	};
		

