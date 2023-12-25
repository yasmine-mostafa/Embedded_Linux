/*
 * Port.h
 *
 * Created: 12/2/2023 7:17:44 PM
 *  Author: main
 */ 


#ifndef PORT_H_
#define PORT_H_

#include "Port_Config.h"
#include "DIO_Registers.h"
#include "DIO.h"
#include "STD_Types.h"
#include "Bit_Math.h"

typedef struct  
{
	DIO_enumPorts_t Port;
	DIO_enumPins_t Pin;
	DIO_enumConfig_t ConfigType;
}PORT_structConfig_t;


/*@brief:
Functionality:Configures Pins according to the User's Configuration.
Parameters:void.
Returns:void.
*/
void PORT_voidInit(void);

/*@brief:
Functionality:Configures Pins according to the User's Configuration.
Parameters:Array of struct , Length of array.
Returns:Error Status.
*/
DIO_enumError_t PORT_enumSetConfig(PORT_structConfig_t* Add_PstructPortConfig, u8 Copy_u8Length );

#endif /* PORT_H_ */
