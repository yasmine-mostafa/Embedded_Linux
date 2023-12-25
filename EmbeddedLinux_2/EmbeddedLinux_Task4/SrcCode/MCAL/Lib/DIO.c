/*
 * DIO.c
 *
 * Created: 11/27/2023 12:40:26 AM
 *  Author: main
 */ 

#include "DIO.h"
#define F_CPU 8000000ul

DIO_enumError_t DIO_enumSetPinConfig(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumConfig_t Copy_enumConfig)
{
	DIO_enumError_t Ret_enumErrorStatus= DIO_enumNOk;
	
	if(Copy_enumPortNum > NUM_OF_PORTS || Copy_enumPortNum < DIO_enumPortA) //The user entered an invalid pin
	{
		Ret_enumErrorStatus=DIO_enumWrongPort;
	}
	else if(Copy_enumPinNum > DIO_enumPin7 || Copy_enumPinNum < DIO_enumPin0) //The user entered an invalid pin
	{
		Ret_enumErrorStatus=DIO_enumWrongPin;
	}
	else if(Copy_enumConfig > DIO_enumInputExternalPD || Copy_enumConfig < DIO_enumOutputLow) //The user entered and invalid configuration 
	{
		Ret_enumErrorStatus=DIO_enumWrongConfig;
	}
	else 
	{
		switch(Copy_enumPortNum) //Switch cases for the port and each case has switch cases for the configuration
		{
			case DIO_enumPortA:
			switch(Copy_enumConfig) 
			{
				case DIO_enumOutputLow:
				SET_BIT(DIO_DDRA,Copy_enumPinNum);
				CLR_BIT(DIO_PORTA,Copy_enumPinNum);
				break;
				
				case DIO_enumOutputHigh:
				SET_BIT(DIO_DDRA,Copy_enumPinNum);
				SET_BIT(DIO_PORTA,Copy_enumPinNum);
				break;
				
				case DIO_enumInputInternalPU:
				CLR_BIT(DIO_DDRA,Copy_enumPinNum);
				SET_BIT(DIO_PORTA,Copy_enumPinNum);
				break;
				
				case DIO_enumInputExternalPD:
				CLR_BIT(DIO_DDRA,Copy_enumPinNum);
				CLR_BIT(DIO_PORTA,Copy_enumPinNum);
				break;
				
				default:
				break;
			}
			break;
			
			case DIO_enumPortB:
			switch(Copy_enumConfig)
			{
				case DIO_enumOutputLow:
				SET_BIT(DIO_DDRB,Copy_enumPinNum);
				CLR_BIT(DIO_PORTB,Copy_enumPinNum);
				break;
				
				case DIO_enumOutputHigh:
				SET_BIT(DIO_DDRB,Copy_enumPinNum);
				SET_BIT(DIO_PORTB,Copy_enumPinNum);
				break;
				
				case DIO_enumInputInternalPU:
				CLR_BIT(DIO_DDRB,Copy_enumPinNum);
				SET_BIT(DIO_PORTB,Copy_enumPinNum);
				break;
				
				case DIO_enumInputExternalPD:
				CLR_BIT(DIO_DDRB,Copy_enumPinNum);
				CLR_BIT(DIO_PORTB,Copy_enumPinNum);
				break;
				
				default:
				break;
			}
			break;
			
			#if NUM_OF_PORTS > TWO_PORTS
			case DIO_enumPortC:
			switch(Copy_enumConfig)
			{
				case DIO_enumOutputLow:
				SET_BIT(DIO_DDRC,Copy_enumPinNum);
				CLR_BIT(DIO_PORTC,Copy_enumPinNum);
				break;
				
				case DIO_enumOutputHigh:
				SET_BIT(DIO_DDRC,Copy_enumPinNum);
				SET_BIT(DIO_PORTC,Copy_enumPinNum);
				break;
				
				case DIO_enumInputInternalPU:
				CLR_BIT(DIO_DDRC,Copy_enumPinNum);
				SET_BIT(DIO_PORTC,Copy_enumPinNum);
				break;
				
				case DIO_enumInputExternalPD:
				CLR_BIT(DIO_DDRC,Copy_enumPinNum);
				CLR_BIT(DIO_PORTC,Copy_enumPinNum);
				break;
				
				default:
				break;
			}
			break;
			#endif
			
			#if NUM_OF_PORTS > THREE_PORTS
			case DIO_enumPortD:
			switch(Copy_enumConfig)
			{
				case DIO_enumOutputLow:
				SET_BIT(DIO_DDRD,Copy_enumPinNum);
				CLR_BIT(DIO_PORTD,Copy_enumPinNum);
				break;
				
				case DIO_enumOutputHigh:
				SET_BIT(DIO_DDRD,Copy_enumPinNum);
				SET_BIT(DIO_PORTD,Copy_enumPinNum);
				break;
				
				case DIO_enumInputInternalPU:
				CLR_BIT(DIO_DDRD,Copy_enumPinNum);
				SET_BIT(DIO_PORTD,Copy_enumPinNum);
				break;
				
				case DIO_enumInputExternalPD:
				CLR_BIT(DIO_DDRD,Copy_enumPinNum);
				CLR_BIT(DIO_PORTD,Copy_enumPinNum);
				break;
				
				default:
				break;
			}
			break;
			#endif 
			
			default:
			break;
		}
		Ret_enumErrorStatus= DIO_enumOk;
	}
	return Ret_enumErrorStatus;
}
DIO_enumError_t DIO_enumSetPortConfig(DIO_enumPorts_t Copy_enumPortNum,DIO_enumConfig_t Copy_enumConfig)
{
	DIO_enumError_t Ret_enumErrorStatus= DIO_enumNOk;
	
	if(Copy_enumPortNum > NUM_OF_PORTS || Copy_enumPortNum < DIO_enumPortA) //The user entered an invalid pin
	{
		Ret_enumErrorStatus=DIO_enumWrongPort;
	}
	else if(Copy_enumConfig > DIO_enumInputExternalPD || Copy_enumConfig < DIO_enumOutputLow) //The user entered and invalid configuration
	{
		Ret_enumErrorStatus=DIO_enumWrongConfig;
	}
	else
	{
		switch(Copy_enumPortNum) //Switch cases for the port and each case has switch cases for the configuration
		{
			case DIO_enumPortA:
			switch(Copy_enumConfig) 
			{
				
				case DIO_enumOutputLow:
				ASSIGN_REG(DIO_DDRA,0xFF);
				ASSIGN_REG(DIO_PORTA,0x00);
				break;
				
				case DIO_enumOutputHigh:
				ASSIGN_REG(DIO_DDRA,0xFF);
				ASSIGN_REG(DIO_PORTA,0xFF);
				break;
				
				case DIO_enumInputInternalPU:
				ASSIGN_REG(DIO_DDRA,0x00);
				ASSIGN_REG(DIO_PORTA,0xFF);
				break;
				
				case DIO_enumInputExternalPD:
				ASSIGN_REG(DIO_DDRA,0x00);
				ASSIGN_REG(DIO_PORTA,0x00);
				break;
				
				default:
				break;
			}
			break;
			
			case DIO_enumPortB:
			switch(Copy_enumConfig)
			{
				
				case DIO_enumOutputLow:
				ASSIGN_REG(DIO_DDRB,0xFF);
				ASSIGN_REG(DIO_PORTB,0x00);
				break;
				
				case DIO_enumOutputHigh:
				ASSIGN_REG(DIO_DDRB,0xFF);
				ASSIGN_REG(DIO_PORTB,0xFF);
				break;
				
				case DIO_enumInputInternalPU:
				ASSIGN_REG(DIO_DDRB,0x00);
				ASSIGN_REG(DIO_PORTB,0xFF);
				break;
				
				case DIO_enumInputExternalPD:
				ASSIGN_REG(DIO_DDRB,0x00);
				ASSIGN_REG(DIO_PORTB,0x00);
				break;
				
				default:
				break;
			}
			break;
			
			#if NUM_OF_PORTS >TWO_PORTS
			case DIO_enumPortC:
			switch(Copy_enumConfig)
			{
				
				case DIO_enumOutputLow:
				ASSIGN_REG(DIO_DDRC,0xFF);
				ASSIGN_REG(DIO_PORTC,0x00);
				break;
				
				case DIO_enumOutputHigh:
				ASSIGN_REG(DIO_DDRC,0xFF);
				ASSIGN_REG(DIO_PORTC,0xFF);
				break;
				
				case DIO_enumInputInternalPU:
				ASSIGN_REG(DIO_DDRC,0x00);
				ASSIGN_REG(DIO_PORTC,0xFF);
				break;
				
				case DIO_enumInputExternalPD:
				ASSIGN_REG(DIO_DDRC,0x00);
				ASSIGN_REG(DIO_PORTC,0x00);
				break;
				
				default:
				break;
			}
			break;
			#endif 
			
			#if NUM_OF_PORTS > THREE_PORTS
			case DIO_enumPortD:
			switch(Copy_enumConfig)
			{
				
				case DIO_enumOutputLow:
				ASSIGN_REG(DIO_DDRD,0xFF);
				ASSIGN_REG(DIO_PORTD,0x00);
				break;
				
				case DIO_enumOutputHigh:
				ASSIGN_REG(DIO_DDRD,0xFF);
				ASSIGN_REG(DIO_PORTD,0xFF);
				break;
				
				case DIO_enumInputInternalPU:
				ASSIGN_REG(DIO_DDRD,0x00);
				ASSIGN_REG(DIO_PORTD,0xFF);
				break;
				
				case DIO_enumInputExternalPD:
				ASSIGN_REG(DIO_DDRD,0x00);
				ASSIGN_REG(DIO_PORTD,0x00);
				break;
				
				default:
				break;
			}
			break;
			#endif
			
			default:
			break;
		}
		Ret_enumErrorStatus= DIO_enumOk;
	}
	return Ret_enumErrorStatus;
}

DIO_enumError_t DIO_enumSetPin(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumLogicState_t Copy_enumLogicState)
{
	DIO_enumError_t Ret_enumErrorStatus= DIO_enumNOk;
	
	if(Copy_enumPortNum > NUM_OF_PORTS || Copy_enumPortNum < DIO_enumPortA) //The user entered an invalid pin
	{
		Ret_enumErrorStatus=DIO_enumWrongPort;
	}
	else if(Copy_enumPinNum > DIO_enumPin7 || Copy_enumPinNum < DIO_enumPin0) //The user entered an invalid pin
	{
		Ret_enumErrorStatus=DIO_enumWrongPin;
	}
	else if(Copy_enumLogicState > DIO_enumLogicHigh || Copy_enumLogicState < DIO_enumLogicLow) //The user entered an invalid logic state
	{
		Ret_enumErrorStatus=DIO_enumWrongLogicState;
	}
	else
	{
		switch(Copy_enumPortNum) //Switch cases for the port number and each has switch cases for the logic state
		{
			case DIO_enumPortA:
			switch(Copy_enumLogicState)
			{
				case DIO_enumLogicHigh:
				SET_BIT(DIO_PORTA,Copy_enumPinNum);
				break;
				
				case DIO_enumLogicLow:
				CLR_BIT(DIO_PORTA,Copy_enumPinNum);
				break;
				
				default:
				break;
			}
			break;
			
			case DIO_enumPortB:
			switch(Copy_enumLogicState)
			{
				case DIO_enumLogicHigh:
				SET_BIT(DIO_PORTB,Copy_enumPinNum);
				break;
				
				case DIO_enumLogicLow:
				CLR_BIT(DIO_PORTB,Copy_enumPinNum);
				break;
				
				default:
				break;
			}
			break;
			
			#if NUM_OF_PORTS > TWO_PORTS
			case DIO_enumPortC:
			switch(Copy_enumLogicState)
			{
				case DIO_enumLogicHigh:
				SET_BIT(DIO_PORTC,Copy_enumPinNum);
				break;
				
				case DIO_enumLogicLow:
				CLR_BIT(DIO_PORTC,Copy_enumPinNum);
				break;
				
				default:
				break;
			}
			break;
			#endif
			
			#if NUM_OF_PORTS > THREE_PORTS
			case DIO_enumPortD:
			switch(Copy_enumLogicState)
			{
				case DIO_enumLogicHigh:
				SET_BIT(DIO_PORTD,Copy_enumPinNum);
				break;
				
				case DIO_enumLogicLow:
				CLR_BIT(DIO_PORTD,Copy_enumPinNum);
				break;
				
				default:
				break;
			}
			break;
			#endif
			
			default:
			break;
		}
		Ret_enumErrorStatus= DIO_enumOk;
	}
	return Ret_enumErrorStatus;
}

DIO_enumError_t DIO_enumTogglePin(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum)
{
	DIO_enumError_t Ret_enumErrorStatus= DIO_enumNOk;
	
	if(Copy_enumPortNum > NUM_OF_PORTS || Copy_enumPortNum < DIO_enumPortA) //The user entered an invalid pin
	{
		Ret_enumErrorStatus=DIO_enumWrongPort;
	}
	else if(Copy_enumPinNum > DIO_enumPin7 || Copy_enumPinNum < DIO_enumPin0) //The user entered an invalid pin
	{
		Ret_enumErrorStatus=DIO_enumWrongPin;
	}
	else
	{
		switch(Copy_enumPortNum) //Switch cases for the Port number
		{
			case DIO_enumPortA:
			TGL_BIT(DIO_PORTA,Copy_enumPinNum);
			break;
			
			case DIO_enumPortB:
			TGL_BIT(DIO_PORTB,Copy_enumPinNum);
			break;
			
			#if NUM_OF_PORTS > TWO_PORTS
			case DIO_enumPortC:
			TGL_BIT(DIO_PORTC,Copy_enumPinNum);
			break;
			#endif
			
			#if NUM_OF_PORTS > THREE_PORTS
			case DIO_enumPortD:
			TGL_BIT(DIO_PORTD,Copy_enumPinNum);
			break;
			#endif
			
			default:
			break;
		}
		Ret_enumErrorStatus=DIO_enumOk;
	}
	return Ret_enumErrorStatus;
}

DIO_enumError_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum,DIO_enumLogicState_t Copy_enumLogicState)
{
		DIO_enumError_t Ret_enumErrorStatus= DIO_enumNOk;
		
		if(Copy_enumPortNum > NUM_OF_PORTS || Copy_enumPortNum < DIO_enumPortA) //The user entered an invalid pin
		{
			Ret_enumErrorStatus=DIO_enumWrongPort;
		}
		else if(Copy_enumLogicState > DIO_enumLogicHigh || Copy_enumLogicState < DIO_enumLogicLow) //The user entered an invalid logic state
		{
			Ret_enumErrorStatus=DIO_enumWrongLogicState;
		}
		else
		{
			switch(Copy_enumPortNum) //Switch cases for the port number and each has switch cases for the logic state
			{
				case DIO_enumPortA:
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
					ASSIGN_REG(DIO_PORTA,0xFF);
					break;
					
					case DIO_enumLogicLow:
					ASSIGN_REG(DIO_PORTA,0x00);
					break;
					
					default:
					break;
				}
				break;
				
				case DIO_enumPortB:
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
					ASSIGN_REG(DIO_PORTB,0xFF);
					break;
					
					case DIO_enumLogicLow:
					ASSIGN_REG(DIO_PORTB,0x00);
					break;
					
					default:
					break;
				}
				break;
				
				#if NUM_OF_PORTS > TWO_PORTS
				case DIO_enumPortC:
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
					ASSIGN_REG(DIO_PORTC,0xFF);
					break;
					
					case DIO_enumLogicLow:
					ASSIGN_REG(DIO_PORTC,0x00);
					break;
					
					default:
					break;
				}
				break;
				#endif
				
				#if NUM_OF_PORTS > THREE_PORTS
				case DIO_enumPortD:
				switch(Copy_enumLogicState)
				{
					case DIO_enumLogicHigh:
					ASSIGN_REG(DIO_PORTD,0xFF);
					break;
					
					case DIO_enumLogicLow:
					ASSIGN_REG(DIO_PORTD,0x00);
					break;
					
					default:
					break;
				}
				break;
				#endif
				
				default:
				break;
			}
			Ret_enumErrorStatus= DIO_enumOk;
		}
		return Ret_enumErrorStatus;
}

DIO_enumError_t DIO_enumSetPortValue(DIO_enumPorts_t Copy_enumPortNum,u8 Copy_u8Value)
{
	DIO_enumError_t  Ret_enumErrorStatus= DIO_enumNOk;
	
	if(Copy_enumPortNum > NUM_OF_PORTS || Copy_enumPortNum < DIO_enumPortA) //The user entered an invalid pin
	{
		Ret_enumErrorStatus=DIO_enumWrongPort;
	}
	else if(Copy_u8Value > 0xFF || Copy_u8Value < 0x00) //The user entered an invalid value
	{
		Ret_enumErrorStatus= DIO_enumWrongValue;
	}
	else
	{
		switch(Copy_enumPortNum) //Switch cases for the port number
		{
			case DIO_enumPortA:
			ASSIGN_REG(DIO_PORTA,Copy_u8Value);
			break;
			
			case DIO_enumPortB:
			ASSIGN_REG(DIO_PORTB,Copy_u8Value);
			break;
			
			#if NUM_OF_PORTS > TWO_PORTS
			case DIO_enumPortC:
			ASSIGN_REG(DIO_PORTC,Copy_u8Value);
			break;
			#endif
			
			#if NUM_OF_PORTS > THREE_PORTS
			case DIO_enumPortD:
			ASSIGN_REG(DIO_PORTD,Copy_u8Value);
			break;
			#endif
			
			default:
			break;
		}
		Ret_enumErrorStatus= DIO_enumOk;
	}
	return Ret_enumErrorStatus;
}

DIO_enumError_t DIO_enumReadState(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumLogicState_t* Add_PenumPinValue)
{
	DIO_enumError_t Ret_enumErrorStatus= DIO_enumNOk;
	
	if(Copy_enumPortNum > NUM_OF_PORTS || Copy_enumPortNum < DIO_enumPortA) //The user entered an invalid pin
	{
		Ret_enumErrorStatus=DIO_enumWrongPort;
	}
	else if(Copy_enumPinNum > DIO_enumPin7 || Copy_enumPinNum < DIO_enumPin0) //The user entered an invalid pin
	{
		Ret_enumErrorStatus=DIO_enumWrongPin;
	}
	else if(Add_PenumPinValue == NULL) //The user passed a null pointer
	{
		Ret_enumErrorStatus=DIO_enumNullPointer;
	}
	else
	{
		u8 Loc_u8Value;
		switch(Copy_enumPortNum) //Switch cases for the port number
		{
			case DIO_enumPortA:
			Loc_u8Value=GET_BIT(DIO_PINA,Copy_enumPinNum);
			if (!Loc_u8Value)
			{
				*Add_PenumPinValue=DIO_enumLogicLow;
			}
			else
			{
				*Add_PenumPinValue=DIO_enumLogicHigh;
			}
			break;
			
			case DIO_enumPortB:
			Loc_u8Value=GET_BIT(DIO_PINB,Copy_enumPinNum);
			if (!Loc_u8Value)
			{
				*Add_PenumPinValue=DIO_enumLogicLow;
			}
			else
			{
				*Add_PenumPinValue=DIO_enumLogicHigh;
			}
			break;
			
			#if NUM_OF_PORTS > TWO_PORTS
			case DIO_enumPortC:
			Loc_u8Value=GET_BIT(DIO_PINC,Copy_enumPinNum);
			if (!Loc_u8Value)
			{
				*Add_PenumPinValue=DIO_enumLogicLow;
			}
			else
			{
				*Add_PenumPinValue=DIO_enumLogicHigh;
			}
			break;
			#endif
			
			#if NUM_OF_PORTS > THREE_PORTS
			case DIO_enumPortD:
			Loc_u8Value=GET_BIT(DIO_PIND,Copy_enumPinNum);
			if (!Loc_u8Value)
			{
				*Add_PenumPinValue=DIO_enumLogicLow;
			}
			else
			{
				*Add_PenumPinValue=DIO_enumLogicHigh;
			}
			break;
			#endif
			
			default:
			break;
		}
		Ret_enumErrorStatus= DIO_enumOk;
	}
	return Ret_enumErrorStatus;
}


void DIO_DelayTimeMS(u32 Copy_u32TimeMS)
{
	u32 cycles = (F_CPU / 8000UL)*Copy_u32TimeMS;
	
	for( u32 Loc_u8Counter=0; Loc_u8Counter<cycles;Loc_u8Counter++)
	{
		asm volatile("nop");
	}
}
