/*
 * DIO.h
 *
 * Created: 11/27/2023 12:58:15 AM
 *  Author: main
 */ 


#ifndef DIO_H_
#define DIO_H_

/*Include here Your Standard Types File that contains  typedef, SET,CLEAR,Toggle...etc */
#include "Bit_Math.h"
#include "STD_Types.h"
#include "DIO_Registers.h"
#include "Port_Config.h"
//#include "..\01-PORT\Port.h"
#include <stddef.h>

/**
 *@brief : The ports Type of the AVR Atmega32                            
 */
typedef enum
{  
	DIO_enumPortA,
	DIO_enumPortB,
	
	#if NUM_OF_PORTS > TWO_PORTS
	DIO_enumPortC,
	#endif
	
	#if NUM_OF_PORTS > THREE_PORTS
	DIO_enumPortD
	#endif
	
}DIO_enumPorts_t;

/**
 *@brief : The Error List Type                                           
 */
typedef enum 
{
	/**
	 *@brief : Everything Not Ok, Function had Not Performed Correctly (Initial Value).
	 */
	DIO_enumNOk, 
	/**
	 *@brief : Everything Ok, Function had Performed Correctly.
	 */
	DIO_enumOk,             
	/**
	 *@brief : NULL Pointer is passed.
	 */
	DIO_enumNullPointer,
	/**
	 *@brief : Select Port Not exist ! .
	 */    
	DIO_enumWrongPort,      
	/**
	 *@brief : Select Pin Not exist ! .
	 */
	DIO_enumWrongPin, 
	/**
	 *@brief : Select Configuration type Not Found .
	 */     
	DIO_enumWrongConfig,
	/**
	 *@brief : Select Logic state type Not Found .
	 */     
	DIO_enumWrongLogicState,
	/**
	 *@brief : Select Value type Not Found .
	 */     
	DIO_enumWrongValue   
	
}DIO_enumError_t;
	
/**
 *@brief : The Configuration Type of Pins to be Input or Output !        
 */
typedef enum
{	
	/**
	 *@brief : Select Pin Configuration to be Output Low .
	 */
	DIO_enumOutputLow,
	/**
	 *@brief : Select Pin Configuration to be Output High .
	 */
	DIO_enumOutputHigh,
	/**
	 *@brief : Select Pin Configuration to be Input Internal PullUp .
	 */             
	DIO_enumInputInternalPU,
	/**
	 *@brief : Select Pin Configuration to be Input External PullDown
	 */    
	DIO_enumInputExternalPD   
}DIO_enumConfig_t;

/**
 *@brief :  Status: Input Pull Up or Input Pull Down              
 */
typedef enum
{
	/**
	 *@brief : Select Input to be Internal Pull Up .
	 */             
	DIO_enumInternalPU,
	/**
	 *@brief : Select Input to be Internal Pull Down
	 */    
	DIO_enumExternalPD   
	
}DIO_enumInput_t;
	
/**
 *@brief :  Logic State Type : HIGH (5V) or LOW(0V )                     
 */
typedef enum
{   
	DIO_enumLogicLow,
	DIO_enumLogicHigh
}DIO_enumLogicState_t;


/**
 *@brief :  Pins Type                                                    
 */
typedef enum
{
	DIO_enumPin0,
	DIO_enumPin1,
	DIO_enumPin2,
	DIO_enumPin3,
	DIO_enumPin4,
	DIO_enumPin5,
	DIO_enumPin6,
	DIO_enumPin7
}DIO_enumPins_t;


/**
 *@brief  : Function to Configure the Pins to be INPUT pin or OUTPUT pin.
 *@param  : Port Number,Pin Number,Configuration type(Input/Output).
 *@return : Error State                                               
 */	
DIO_enumError_t DIO_enumSetPinConfig(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumConfig_t Copy_enumConfig);

/**
 *@brief  : Function to Configure the whole Port(8 pins) at one time to be INPUT or OUTPUT port.
 *@param  : Port Number,Configuration type(Input/Output).
 *@return : Error State                                                                      
 */
DIO_enumError_t DIO_enumSetPortConfig(DIO_enumPorts_t Copy_enumPortNum,DIO_enumConfig_t Copy_enumConfig);

/**
 *@brief  : Function to Set the Pins to be Logic HIGH  or Logic LOW.
 *@param  : Port Number,Pin Number,Logic State(HIGH/LOW).
 *@return : Error State                                                                      
 */	
DIO_enumError_t DIO_enumSetPin(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumLogicState_t Copy_enumLogicState);

/**
 *@brief : Function to Toggle a Specific Pin.
 *@param : Port Number,Pin Number.
 *@return: Error State.                                                                      
 */
DIO_enumError_t DIO_enumTogglePin(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum); 

/**
 *@brief : Function to Set the whole Port(8 pins) at one time to be Logic HIGH  or Logic LOW.
 *@param : Port Number,Logic State(HIGH/LOW).
 *@return: Error State.                                                                      
 */
DIO_enumError_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum,DIO_enumLogicState_t Copy_enumLogicState); 

/**
 *@brief : Function to Set the whole Port(8 pins) at one time to be a Specific Value.
 *@param : Port Number,Value.
 *@return: Error State.                                                                      
 */
DIO_enumError_t DIO_enumSetPortValue(DIO_enumPorts_t Copy_enumPortNum,u8 Copy_u8Value); 

/**
 *@brief  : Function to Read the Logic State of the Pin (Is it HIGH or LOW).
 *@param  : Port Number,Pin Number, Pointer points to unsigned char passed by address (to return the value of pin state).
 *@return : Error State                                                                     
 */
DIO_enumError_t DIO_enumReadState(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumLogicState_t* Add_PenumPinValue);

void DIO_DelayTimeMS(u32 Copy_u32TimeMS);
#endif /* DIO_H_ */
