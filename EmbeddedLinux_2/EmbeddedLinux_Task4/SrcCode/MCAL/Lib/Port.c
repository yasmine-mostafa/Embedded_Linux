/*
 * Port.c
 *
 * Created: 12/2/2023 7:18:02 PM
 *  Author: main
 */ 

#include "Port.h"

#if COMPILATION_MODE == POST_COMP
extern const PORT_enumPinCnfg_t PORT_enumPinCfg[32];
#endif

void PORT_voidInit()
{
//************************************************************PRE-COMPILATION CONFIGURATION************************************************************//
	#if COMPILATION_MODE==PRE_COMP
		
		#if DIO_PIN0==INPUT_PU
			#define DIO_PIN0_DDR PORT_LOW
			#define DIO_PIN0_PORT PORT_HIGH
		#elif DIO_PIN0 == INPUT_PD
			#define DIO_PIN0_DDR PORT_LOW
			#define DIO_PIN0_PORT PORT_LOW
		#elif DIO_PIN0==OUTPUT_LOW
			#define DIO_PIN0_DDR PORT_HIGH
			#define DIO_PIN0_PORT PORT_LOW 
		#elif DIO_PIN0 == OUTPUT_HIGH
			#define DIO_PIN0_DDR PORT_HIGH
			#define DIO_PIN0_PORT PORT_HIGH
		#else
			#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN1 == INPUT_PU
		#define DIO_PIN1_DDR PORT_LOW
		#define DIO_PIN1_PORT PORT_HIGH
		#elif DIO_PIN1 == INPUT_PD
		#define DIO_PIN1_DDR PORT_LOW
		#define DIO_PIN1_PORT PORT_LOW
		#elif DIO_PIN1==OUTPUT_LOW
		#define DIO_PIN1_DDR PORT_HIGH
		#define DIO_PIN1_PORT PORT_LOW
		#elif DIO_PIN1 == OUTPUT_HIGH
		#define DIO_PIN1_DDR PORT_HIGH
		#define DIO_PIN1_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN2 == INPUT_PU
		#define DIO_PIN2_DDR PORT_LOW
		#define DIO_PIN2_PORT PORT_HIGH
		#elif DIO_PIN2 == INPUT_PD
		#define DIO_PIN2_DDR PORT_LOW
		#define DIO_PIN2_PORT PORT_LOW
		#elif DIO_PIN2==OUTPUT_LOW
		#define DIO_PIN2_DDR PORT_HIGH
		#define DIO_PIN2_PORT PORT_LOW
		#elif DIO_PIN2 == OUTPUT_HIGH
		#define DIO_PIN2_DDR PORT_HIGH
		#define DIO_PIN2_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN3 == INPUT_PU
		#define DIO_PIN3_DDR PORT_LOW
		#define DIO_PIN3_PORT PORT_HIGH
		#elif DIO_PIN3 == INPUT_PD
		#define DIO_PIN3_DDR PORT_LOW
		#define DIO_PIN3_PORT PORT_LOW
		#elif DIO_PIN3==OUTPUT_LOW
		#define DIO_PIN3_DDR PORT_HIGH
		#define DIO_PIN3_PORT PORT_LOW
		#elif DIO_PIN3 == OUTPUT_HIGH
		#define DIO_PIN3_DDR PORT_HIGH
		#define DIO_PIN3_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN4 == INPUT_PU
		#define DIO_PIN4_DDR PORT_LOW
		#define DIO_PIN4_PORT PORT_HIGH
		#elif DIO_PIN4 == INPUT_PD
		#define DIO_PIN4_DDR PORT_LOW
		#define DIO_PIN4_PORT PORT_LOW
		#elif DIO_PIN4 == OUTPUT_LOW
		#define DIO_PIN4_DDR PORT_HIGH
		#define DIO_PIN4_PORT PORT_LOW
		#elif DIO_PIN4 == OUTPUT_HIGH
		#define DIO_PIN4_DDR PORT_HIGH
		#define DIO_PIN4_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN5 == INPUT_PU
		#define DIO_PIN5_DDR PORT_LOW
		#define DIO_PIN5_PORT PORT_HIGH
		#elif DIO_PIN5 == INPUT_PD
		#define DIO_PIN5_DDR PORT_LOW
		#define DIO_PIN5_PORT PORT_LOW
		#elif DIO_PIN5 == OUTPUT_LOW
		#define DIO_PIN5_DDR PORT_HIGH
		#define DIO_PIN5_PORT PORT_LOW
		#elif DIO_PIN5 == OUTPUT_HIGH
		#define DIO_PIN5_DDR PORT_HIGH
		#define DIO_PIN5_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN6 == INPUT_PU
		#define DIO_PIN6_DDR PORT_LOW
		#define DIO_PIN6_PORT PORT_HIGH
		#elif DIO_PIN6 == INPUT_PD
		#define DIO_PIN6_DDR PORT_LOW
		#define DIO_PIN6_PORT PORT_LOW
		#elif DIO_PIN6 == OUTPUT_LOW
		#define DIO_PIN6_DDR PORT_HIGH
		#define DIO_PIN6_PORT PORT_LOW
		#elif DIO_PIN6 == OUTPUT_HIGH
		#define DIO_PIN6_DDR PORT_HIGH
		#define DIO_PIN6_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN7 == INPUT_PU
		#define DIO_PIN7_DDR PORT_LOW
		#define DIO_PIN7_PORT PORT_HIGH
		#elif DIO_PIN7 == INPUT_PD
		#define DIO_PIN7_DDR PORT_LOW
		#define DIO_PIN7_PORT PORT_LOW
		#elif DIO_PIN7 == OUTPUT_LOW
		#define DIO_PIN7_DDR PORT_HIGH
		#define DIO_PIN7_PORT PORT_LOW
		#elif DIO_PIN7 == OUTPUT_HIGH
		#define DIO_PIN7_DDR PORT_HIGH
		#define DIO_PIN7_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN8 == INPUT_PU
		#define DIO_PIN8_DDR PORT_LOW
		#define DIO_PIN8_PORT PORT_HIGH
		#elif DIO_PIN8 == INPUT_PD
		#define DIO_PIN8_DDR PORT_LOW
		#define DIO_PIN8_PORT PORT_LOW
		#elif DIO_PIN8 == OUTPUT_LOW
		#define DIO_PIN8_DDR PORT_HIGH
		#define DIO_PIN8_PORT PORT_LOW
		#elif DIO_PIN8 == OUTPUT_HIGH
		#define DIO_PIN8_DDR PORT_HIGH
		#define DIO_PIN8_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN9 == INPUT_PU
		#define DIO_PIN9_DDR PORT_LOW
		#define DIO_PIN9_PORT PORT_HIGH
		#elif DIO_PIN9 == INPUT_PD
		#define DIO_PIN9_DDR PORT_LOW
		#define DIO_PIN9_PORT PORT_LOW
		#elif DIO_PIN9 == OUTPUT_LOW
		#define DIO_PIN9_DDR PORT_HIGH
		#define DIO_PIN9_PORT PORT_LOW
		#elif DIO_PIN9 == OUTPUT_HIGH
		#define DIO_PIN9_DDR PORT_HIGH
		#define DIO_PIN9_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN10 == INPUT_PU
		#define DIO_PIN10_DDR PORT_LOW
		#define DIO_PIN10_PORT PORT_HIGH
		#elif DIO_PIN10 == INPUT_PD
		#define DIO_PIN10_DDR PORT_LOW
		#define DIO_PIN10_PORT PORT_LOW
		#elif DIO_PIN10 == OUTPUT_LOW
		#define DIO_PIN10_DDR PORT_HIGH
		#define DIO_PIN10_PORT PORT_LOW
		#elif DIO_PIN10 == OUTPUT_HIGH
		#define DIO_PIN10_DDR PORT_HIGH
		#define DIO_PIN10_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN11 == INPUT_PU
		#define DIO_PIN11_DDR PORT_LOW
		#define DIO_PIN11_PORT PORT_HIGH
		#elif DIO_PIN11 == INPUT_PD
		#define DIO_PIN11_DDR PORT_LOW
		#define DIO_PIN11_PORT PORT_LOW
		#elif DIO_PIN11 == OUTPUT_LOW
		#define DIO_PIN11_DDR PORT_HIGH
		#define DIO_PIN11_PORT PORT_LOW
		#elif DIO_PIN11 == OUTPUT_HIGH
		#define DIO_PIN11_DDR PORT_HIGH
		#define DIO_PIN11_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN12 == INPUT_PU
		#define DIO_PIN12_DDR PORT_LOW
		#define DIO_PIN12_PORT PORT_HIGH
		#elif DIO_PIN12 == INPUT_PD
		#define DIO_PIN12_DDR PORT_LOW
		#define DIO_PIN12_PORT PORT_LOW
		#elif DIO_PIN12 == OUTPUT_LOW
		#define DIO_PIN12_DDR PORT_HIGH
		#define DIO_PIN12_PORT PORT_LOW
		#elif DIO_PIN12 == OUTPUT_HIGH
		#define DIO_PIN12_DDR PORT_HIGH
		#define DIO_PIN12_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN13 == INPUT_PU
		#define DIO_PIN13_DDR PORT_LOW
		#define DIO_PIN13_PORT PORT_HIGH
		#elif DIO_PIN13 == INPUT_PD
		#define DIO_PIN13_DDR PORT_LOW
		#define DIO_PIN13_PORT PORT_LOW
		#elif DIO_PIN13 == OUTPUT_LOW
		#define DIO_PIN13_DDR PORT_HIGH
		#define DIO_PIN13_PORT PORT_LOW
		#elif DIO_PIN13 == OUTPUT_HIGH
		#define DIO_PIN13_DDR PORT_HIGH
		#define DIO_PIN13_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN14 == INPUT_PU
		#define DIO_PIN14_DDR PORT_LOW
		#define DIO_PIN14_PORT PORT_HIGH
		#elif DIO_PIN14 == INPUT_PD
		#define DIO_PIN14_DDR PORT_LOW
		#define DIO_PIN14_PORT PORT_LOW
		#elif DIO_PIN14 == OUTPUT_LOW
		#define DIO_PIN14_DDR PORT_HIGH
		#define DIO_PIN14_PORT PORT_LOW
		#elif DIO_PIN14 == OUTPUT_HIGH
		#define DIO_PIN14_DDR PORT_HIGH
		#define DIO_PIN14_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN15 == INPUT_PU
		#define DIO_PIN15_DDR PORT_LOW
		#define DIO_PIN15_PORT PORT_HIGH
		#elif DIO_PIN15 == INPUT_PD
		#define DIO_PIN15_DDR PORT_LOW
		#define DIO_PIN15_PORT PORT_LOW
		#elif DIO_PIN15 == OUTPUT_LOW
		#define DIO_PIN15_DDR PORT_HIGH
		#define DIO_PIN15_PORT PORT_LOW
		#elif DIO_PIN15 == OUTPUT_HIGH
		#define DIO_PIN15_DDR PORT_HIGH
		#define DIO_PIN15_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
	#if NUM_OF_PORTS > TWO_PORTS
	
		#if DIO_PIN16 == INPUT_PU
		#define DIO_PIN16_DDR PORT_LOW
		#define DIO_PIN16_PORT PORT_HIGH
		#elif DIO_PIN16 == INPUT_PD
		#define DIO_PIN16_DDR PORT_LOW
		#define DIO_PIN16_PORT PORT_LOW
		#elif DIO_PIN16 == OUTPUT_LOW
		#define DIO_PIN16_DDR PORT_HIGH
		#define DIO_PIN16_PORT PORT_LOW
		#elif DIO_PIN16 == OUTPUT_HIGH
		#define DIO_PIN16_DDR PORT_HIGH
		#define DIO_PIN16_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN17 == INPUT_PU
		#define DIO_PIN17_DDR PORT_LOW
		#define DIO_PIN17_PORT PORT_HIGH
		#elif DIO_PIN17 == INPUT_PD
		#define DIO_PIN17_DDR PORT_LOW
		#define DIO_PIN17_PORT PORT_LOW
		#elif DIO_PIN17 == OUTPUT_LOW
		#define DIO_PIN17_DDR PORT_HIGH
		#define DIO_PIN17_PORT PORT_LOW
		#elif DIO_PIN17 == OUTPUT_HIGH
		#define DIO_PIN17_DDR PORT_HIGH
		#define DIO_PIN17_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN18 == INPUT_PU
		#define DIO_PIN18_DDR PORT_LOW
		#define DIO_PIN18_PORT PORT_HIGH
		#elif DIO_PIN18 == INPUT_PD
		#define DIO_PIN18_DDR PORT_LOW
		#define DIO_PIN18_PORT PORT_LOW
		#elif DIO_PIN18 == OUTPUT_LOW
		#define DIO_PIN18_DDR PORT_HIGH
		#define DIO_PIN18_PORT PORT_LOW
		#elif DIO_PIN18 == OUTPUT_HIGH
		#define DIO_PIN18_DDR PORT_HIGH
		#define DIO_PIN18_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN19 == INPUT_PU
		#define DIO_PIN19_DDR PORT_LOW
		#define DIO_PIN19_PORT PORT_HIGH
		#elif DIO_PIN19 == INPUT_PD
		#define DIO_PIN19_DDR PORT_LOW
		#define DIO_PIN19_PORT PORT_LOW
		#elif DIO_PIN19 == OUTPUT_LOW
		#define DIO_PIN19_DDR PORT_HIGH
		#define DIO_PIN19_PORT PORT_LOW
		#elif DIO_PIN19 == OUTPUT_HIGH
		#define DIO_PIN19_DDR PORT_HIGH
		#define DIO_PIN19_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN20 == INPUT_PU
		#define DIO_PIN20_DDR PORT_LOW
		#define DIO_PIN20_PORT PORT_HIGH
		#elif DIO_PIN20 == INPUT_PD
		#define DIO_PIN20_DDR PORT_LOW
		#define DIO_PIN20_PORT PORT_LOW
		#elif DIO_PIN20 == OUTPUT_LOW
		#define DIO_PIN20_DDR PORT_HIGH
		#define DIO_PIN20_PORT PORT_LOW
		#elif DIO_PIN20 == OUTPUT_HIGH
		#define DIO_PIN20_DDR PORT_HIGH
		#define DIO_PIN20_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN21 == INPUT_PU
		#define DIO_PIN21_DDR PORT_LOW
		#define DIO_PIN21_PORT PORT_HIGH
		#elif DIO_PIN21 == INPUT_PD
		#define DIO_PIN21_DDR PORT_LOW
		#define DIO_PIN21_PORT PORT_LOW
		#elif DIO_PIN21 == OUTPUT_LOW
		#define DIO_PIN21_DDR PORT_HIGH
		#define DIO_PIN21_PORT PORT_LOW
		#elif DIO_PIN21 == OUTPUT_HIGH
		#define DIO_PIN21_DDR PORT_HIGH
		#define DIO_PIN21_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN22 == INPUT_PU
		#define DIO_PIN22_DDR PORT_LOW
		#define DIO_PIN22_PORT PORT_HIGH
		#elif DIO_PIN22 == INPUT_PD
		#define DIO_PIN22_DDR PORT_LOW
		#define DIO_PIN22_PORT PORT_LOW
		#elif DIO_PIN22 == OUTPUT_LOW
		#define DIO_PIN22_DDR PORT_HIGH
		#define DIO_PIN22_PORT PORT_LOW
		#elif DIO_PIN22 == OUTPUT_HIGH
		#define DIO_PIN22_DDR PORT_HIGH
		#define DIO_PIN22_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN23 == INPUT_PU
		#define DIO_PIN23_DDR PORT_LOW
		#define DIO_PIN23_PORT PORT_HIGH
		#elif DIO_PIN23 == INPUT_PD
		#define DIO_PIN23_DDR PORT_LOW
		#define DIO_PIN23_PORT PORT_LOW
		#elif DIO_PIN23 == OUTPUT_LOW
		#define DIO_PIN23_DDR PORT_HIGH
		#define DIO_PIN23_PORT PORT_LOW
		#elif DIO_PIN23 == OUTPUT_HIGH
		#define DIO_PIN23_DDR PORT_HIGH
		#define DIO_PIN23_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
	#endif
	
	#if NUM_OF_PORTS > THREE_PORTS
		
		#if DIO_PIN24 == INPUT_PU
		#define DIO_PIN24_DDR PORT_LOW
		#define DIO_PIN24_PORT PORT_HIGH
		#elif DIO_PIN24 == INPUT_PD
		#define DIO_PIN24_DDR PORT_LOW
		#define DIO_PIN24_PORT PORT_LOW
		#elif DIO_PIN24 == OUTPUT_LOW
		#define DIO_PIN24_DDR PORT_HIGH
		#define DIO_PIN24_PORT PORT_LOW
		#elif DIO_PIN24 == OUTPUT_HIGH
		#define DIO_PIN24_DDR PORT_HIGH
		#define DIO_PIN24_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN25 == INPUT_PU
		#define DIO_PIN25_DDR PORT_LOW
		#define DIO_PIN25_PORT PORT_HIGH
		#elif DIO_PIN25 == INPUT_PD
		#define DIO_PIN25_DDR PORT_LOW
		#define DIO_PIN25_PORT PORT_LOW
		#elif DIO_PIN25 == OUTPUT_LOW
		#define DIO_PIN25_DDR PORT_HIGH
		#define DIO_PIN25_PORT PORT_LOW
		#elif DIO_PIN25 == OUTPUT_HIGH
		#define DIO_PIN25_DDR PORT_HIGH
		#define DIO_PIN25_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN26 == INPUT_PU
		#define DIO_PIN26_DDR PORT_LOW
		#define DIO_PIN26_PORT PORT_HIGH
		#elif DIO_PIN26 == INPUT_PD
		#define DIO_PIN26_DDR PORT_LOW
		#define DIO_PIN26_PORT PORT_LOW
		#elif DIO_PIN26 == OUTPUT_LOW
		#define DIO_PIN26_DDR PORT_HIGH
		#define DIO_PIN26_PORT PORT_LOW
		#elif DIO_PIN26 == OUTPUT_HIGH
		#define DIO_PIN26_DDR PORT_HIGH
		#define DIO_PIN26_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN27 == INPUT_PU
		#define DIO_PIN27_DDR PORT_LOW
		#define DIO_PIN27_PORT PORT_HIGH
		#elif DIO_PIN27 == INPUT_PD
		#define DIO_PIN27_DDR PORT_LOW
		#define DIO_PIN27_PORT PORT_LOW
		#elif DIO_PIN27 == OUTPUT_LOW
		#define DIO_PIN27_DDR PORT_HIGH
		#define DIO_PIN27_PORT PORT_LOW
		#elif DIO_PIN27 == OUTPUT_HIGH
		#define DIO_PIN27_DDR PORT_HIGH
		#define DIO_PIN27_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN28 == INPUT_PU
		#define DIO_PIN28_DDR PORT_LOW
		#define DIO_PIN28_PORT PORT_HIGH
		#elif DIO_PIN28 == INPUT_PD
		#define DIO_PIN28_DDR PORT_LOW
		#define DIO_PIN28_PORT PORT_LOW
		#elif DIO_PIN28 == OUTPUT_LOW
		#define DIO_PIN28_DDR PORT_HIGH
		#define DIO_PIN28_PORT PORT_LOW
		#elif DIO_PIN28 == OUTPUT_HIGH
		#define DIO_PIN28_DDR PORT_HIGH
		#define DIO_PIN28_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN29 == INPUT_PU
		#define DIO_PIN29_DDR PORT_LOW
		#define DIO_PIN29_PORT PORT_HIGH
		#elif DIO_PIN29 == INPUT_PD
		#define DIO_PIN29_DDR PORT_LOW
		#define DIO_PIN29_PORT PORT_LOW
		#elif DIO_PIN29 == OUTPUT_LOW
		#define DIO_PIN29_DDR PORT_HIGH
		#define DIO_PIN29_PORT PORT_LOW
		#elif DIO_PIN29 == OUTPUT_HIGH
		#define DIO_PIN29_DDR PORT_HIGH
		#define DIO_PIN29_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN30 == INPUT_PU
		#define DIO_PIN30_DDR PORT_LOW
		#define DIO_PIN30_PORT PORT_HIGH
		#elif DIO_PIN30 == INPUT_PD
		#define DIO_PIN30_DDR PORT_LOW
		#define DIO_PIN30_PORT PORT_LOW
		#elif DIO_PIN30 == OUTPUT_LOW
		#define DIO_PIN30_DDR PORT_HIGH
		#define DIO_PIN30_PORT PORT_LOW
		#elif DIO_PIN30 == OUTPUT_HIGH
		#define DIO_PIN30_DDR PORT_HIGH
		#define DIO_PIN30_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
		#if DIO_PIN31 == INPUT_PU
		#define DIO_PIN31_DDR PORT_LOW
		#define DIO_PIN31_PORT PORT_HIGH
		#elif DIO_PIN31 == INPUT_PD
		#define DIO_PIN31_DDR PORT_LOW
		#define DIO_PIN31_PORT PORT_LOW
		#elif DIO_PIN31 == OUTPUT_LOW
		#define DIO_PIN31_DDR PORT_HIGH
		#define DIO_PIN31_PORT PORT_LOW
		#elif DIO_PIN31 == OUTPUT_HIGH
		#define DIO_PIN31_DDR PORT_HIGH
		#define DIO_PIN31_PORT PORT_HIGH
		#else
		#error "Invalid Configuration"
		#endif
		
	#endif

		DIO_DDRA = CONCAT(DIO_PIN7_DDR, DIO_PIN6_DDR, DIO_PIN5_DDR, DIO_PIN4_DDR, DIO_PIN3_DDR, DIO_PIN2_DDR, DIO_PIN1_DDR, DIO_PIN0_DDR);
		DIO_PORTA= CONCAT(DIO_PIN7_PORT, DIO_PIN6_PORT, DIO_PIN5_PORT, DIO_PIN4_PORT, DIO_PIN3_PORT, DIO_PIN2_PORT, DIO_PIN1_PORT, DIO_PIN0_PORT);
	
		DIO_DDRB = CONCAT(DIO_PIN15_DDR, DIO_PIN14_DDR, DIO_PIN13_DDR, DIO_PIN12_DDR, DIO_PIN11_DDR, DIO_PIN10_DDR, DIO_PIN9_DDR, DIO_PIN8_DDR);
		DIO_PORTB= CONCAT(DIO_PIN15_PORT, DIO_PIN14_PORT, DIO_PIN13_PORT, DIO_PIN12_PORT, DIO_PIN11_PORT, DIO_PIN10_PORT, DIO_PIN9_PORT, DIO_PIN8_PORT);
	
		#if NUM_OF_PORTS > TWO_PORTS
		DIO_DDRC = CONCAT(DIO_PIN23_DDR, DIO_PIN22_DDR, DIO_PIN21_DDR, DIO_PIN20_DDR, DIO_PIN19_DDR, DIO_PIN18_DDR, DIO_PIN17_DDR, DIO_PIN16_DDR);
		DIO_PORTC= CONCAT(DIO_PIN23_PORT, DIO_PIN22_PORT, DIO_PIN21_PORT, DIO_PIN20_PORT, DIO_PIN19_PORT, DIO_PIN18_PORT, DIO_PIN17_PORT, DIO_PIN16_PORT);
		#endif
	
		#if NUM_OF_PORTS > THREE_PORTS
		DIO_DDRD = CONCAT(DIO_PIN31_DDR, DIO_PIN30_DDR, DIO_PIN29_DDR, DIO_PIN28_DDR, DIO_PIN27_DDR, DIO_PIN26_DDR, DIO_PIN25_DDR, DIO_PIN24_DDR);
		DIO_PORTD= CONCAT(DIO_PIN31_PORT, DIO_PIN30_PORT, DIO_PIN29_PORT, DIO_PIN28_PORT, DIO_PIN27_PORT, DIO_PIN26_PORT, DIO_PIN25_PORT, DIO_PIN24_PORT);
		#endif
	
//************************************************************POST-COMPILATION CONFIGURATION************************************************************//
	#elif COMPILATION_MODE == POST_COMP
		
		for(u8 Loc_u8Counter=0 ; Loc_u8Counter < NUM_OF_PORTS * NUM_OF_PINS ; Loc_u8Counter++)
		{
			u8 Loc_enumPortNum= Loc_u8Counter / NUM_OF_PINS; //Pins Per Port are 8
			u8 Loc_u8PinNum= Loc_u8Counter % NUM_OF_PINS; //Pin Number (0-7)
			
			/****Switch cases for the Port and each one has switch cases for the Pin_cnfg array ****/
			switch(Loc_enumPortNum)
			{
				case PORT_A:
				switch(PORT_enumPinCfg[Loc_u8Counter])
				{
					case PORT_enumInputPU:
					CLR_BIT(DIO_DDRA,Loc_u8PinNum);
					SET_BIT(DIO_PORTA,Loc_u8PinNum);
					break;
					
					case PORT_enumInputPD:
					CLR_BIT(DIO_DDRA,Loc_u8PinNum);
					CLR_BIT(DIO_PORTA,Loc_u8PinNum);
					break;
					
					case PORT_enumOutputLow:
					SET_BIT(DIO_DDRA,Loc_u8PinNum);
					CLR_BIT(DIO_PORTA,Loc_u8PinNum);
					break;
					
					case PORT_enumOutputHigh:
					SET_BIT(DIO_DDRA,Loc_u8PinNum);
					SET_BIT(DIO_PORTA,Loc_u8PinNum);
					break;
					
					default:
					break;
				}
				break;
				
				case PORT_B:
				switch(PORT_enumPinCfg[Loc_u8Counter])
				{
					case PORT_enumInputPU:
					CLR_BIT(DIO_DDRB,Loc_u8PinNum);
					SET_BIT(DIO_PORTB,Loc_u8PinNum);
					break;
					
					case PORT_enumInputPD:
					CLR_BIT(DIO_DDRB,Loc_u8PinNum);
					CLR_BIT(DIO_PORTB,Loc_u8PinNum);
					break;
					
					case PORT_enumOutputLow:
					SET_BIT(DIO_DDRB,Loc_u8PinNum);
					CLR_BIT(DIO_PORTB,Loc_u8PinNum);
					break;
					
					case PORT_enumOutputHigh:
					SET_BIT(DIO_DDRB,Loc_u8PinNum);
					SET_BIT(DIO_PORTB,Loc_u8PinNum);
					break;
					
					default:
					break;
				}
				break;
				
				#if NUM_OF_PORTS > TWO_PORTS
				case PORT_C:
				switch(PORT_enumPinCfg[Loc_u8Counter])
				{
					case PORT_enumInputPU:
					CLR_BIT(DIO_DDRC,Loc_u8PinNum);
					SET_BIT(DIO_PORTC,Loc_u8PinNum);
					break;
					
					case PORT_enumInputPD:
					CLR_BIT(DIO_DDRC,Loc_u8PinNum);
					CLR_BIT(DIO_PORTC,Loc_u8PinNum);
					break;
					
					case PORT_enumOutputLow:
					SET_BIT(DIO_DDRC,Loc_u8PinNum);
					CLR_BIT(DIO_PORTC,Loc_u8PinNum);
					break;
					
					case PORT_enumOutputHigh:
					SET_BIT(DIO_DDRC,Loc_u8PinNum);
					SET_BIT(DIO_PORTC,Loc_u8PinNum);
					break;
					
					default:
					break;
				}
				break;
				#endif
				
				#if NUM_OF_PORTS > THREE_PORTS
				case PORT_D:
				switch(PORT_enumPinCfg[Loc_u8Counter])
				{
					case PORT_enumInputPU:
					CLR_BIT(DIO_DDRD,Loc_u8PinNum);
					SET_BIT(DIO_PORTD,Loc_u8PinNum);
					break;
					
					case PORT_enumInputPD:
					CLR_BIT(DIO_DDRD,Loc_u8PinNum);
					CLR_BIT(DIO_PORTD,Loc_u8PinNum);
					break;
					
					case PORT_enumOutputLow:
					SET_BIT(DIO_DDRD,Loc_u8PinNum);
					CLR_BIT(DIO_PORTD,Loc_u8PinNum);
					break;
					
					case PORT_enumOutputHigh:
					SET_BIT(DIO_DDRD,Loc_u8PinNum);
					SET_BIT(DIO_PORTD,Loc_u8PinNum);
					break;
					
					default:
					break;
				}
				break;
				#endif
				
			    default:
				break;
				
			}
		}	
	#else
	#error "Invalid Configuration"
	#endif
}

DIO_enumError_t PORT_enumSetConfig(PORT_structConfig_t* Add_PstructPortConfig, u8 Copy_u8Length )
{
	DIO_enumError_t Ret_enumErrorStatus= DIO_enumNOk;
	
	//Loop on the configuration array
	for( u8 Loc_u8Counter =0; Loc_u8Counter< Copy_u8Length ; Loc_u8Counter++)
	{
		//call DIO_enumSetPinConfig function with the struct parameters of each index
		Ret_enumErrorStatus=DIO_enumSetPinConfig(Add_PstructPortConfig[Loc_u8Counter].Port,Add_PstructPortConfig[Loc_u8Counter].Pin, Add_PstructPortConfig[Loc_u8Counter].ConfigType);
		
		//If the Error Status is anything other than OK break from the for loop and return the Error Status so it doesn't overwrite
		if(Ret_enumErrorStatus != DIO_enumOk)
		{
			break;
		}
	}
	return Ret_enumErrorStatus;
}