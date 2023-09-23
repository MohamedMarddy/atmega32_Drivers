/*
 * EXTERNAL_INTERRUPT_program.c
 *
 *  Created on: ???/???/????
 *      Author: moham
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "EXTERNAL_INTERRUPT_register.h"
#include "EXTERNAL_INTERRUPT_config.h"
#include "EXTERNAL_INTERRUPT_interface.h"


void EXTERNAL_INTERRUPT_Init(){
#if   EXTI0_MODE == LOW_LEVEL
	Clr_Bit(MCUCR_register,ISC00);
	Clr_Bit(MCUCR_register,ISC01);
#elif EXTI0_MODE == IOC
	Set_Bit(MCUCR_register,ISC00);
	Clr_Bit(MCUCR_register,ISC01);
#elif EXTI0_MODE == FALLING_EDGE
	Clr_Bit(MCUCR_register,ISC00);
	Set_Bit(MCUCR_register,ISC01);
#elif EXTI0_MODE == RISING_EDGE
	Set_Bit(MCUCR_register,ISC00);
	Set_Bit(MCUCR_register,ISC01);
#endif


#if   EXTI1_MODE == LOW_LEVEL
	Clr_Bit(MCUCR_register,ISC10);
	Clr_Bit(MCUCR_register,ISC11);
#elif EXTI1_MODE == IOC
	Set_Bit(MCUCR_register,ISC10);
	Clr_Bit(MCUCR_register,ISC11);
#elif EXTI1_MODE == FALLING_EDGE
	Clr_Bit(MCUCR_register,ISC10);
	Set_Bit(MCUCR_register,ISC11);
#elif EXTI1_MODE == RISING_EDGE
	Set_Bit(MCUCR_register,ISC10);
	Set_Bit(MCUCR_register,ISC10);
#endif


#if EXTI2_MODE == FALLING_EDGE
	Set_Bit(MCUCSR_register,ISC2);
#elif EXTI2_MODE == RISING_EDGE
	Clr_Bit(MCUCSR_register,ISC2);
#endif
}
void EXTERNAL_INTERRUPT_Enable(u8 INT_no){

	switch(INT_no){
	case EXTI0:
		Set_Bit(GICR_register,INT_0);
		break;
	case EXTI1:
		Set_Bit(GICR_register,INT_1);
		break;
	case EXTI2:
		Set_Bit(GICR_register,INT_2);
		break;
	default :
		break;
	}
}
void EXTERNAL_INTERRUPT_Disable(u8 INT_no){

	switch(INT_no){
	case EXTI0:
		Clr_Bit(GICR_register,INT_0);
		break;
	case EXTI1:
		Clr_Bit(GICR_register,INT_1);
		break;
	case EXTI2:
		Clr_Bit(GICR_register,INT_2);
		break;
	default :
		break;
	}
}
void EXTERNAL_INTERRUPT_Set_Mode(u8 INT_no,u8 Mode){
	switch(INT_no){
	case EXTI0:
		switch(Mode){
		case LOW_LEVEL:
			Clr_Bit(MCUCR_register,ISC00);
			Clr_Bit(MCUCR_register,ISC01);
			break;
		case IOC:
			Set_Bit(MCUCR_register,ISC00);
			Clr_Bit(MCUCR_register,ISC01);
			break;
		case FALLING_EDGE:
			Clr_Bit(MCUCR_register,ISC00);
			Set_Bit(MCUCR_register,ISC01);
			break;
		case RISING_EDGE :
			Set_Bit(MCUCR_register,ISC00);
			Set_Bit(MCUCR_register,ISC01);
			break;
		default :
			break;
		}
		break;
		case EXTI1:
			switch(Mode){
			case LOW_LEVEL:
				Clr_Bit(MCUCR_register,ISC10);
				Clr_Bit(MCUCR_register,ISC11);
				break;
			case IOC:
				Set_Bit(MCUCR_register,ISC10);
				Clr_Bit(MCUCR_register,ISC11);
				break;
			case FALLING_EDGE:
				Clr_Bit(MCUCR_register,ISC10);
				Set_Bit(MCUCR_register,ISC11);
				break;
			case RISING_EDGE :
				Set_Bit(MCUCR_register,ISC10);
				Set_Bit(MCUCR_register,ISC10);
				break;
			default :
				break;
			}
			break;
			case EXTI2:
				switch(Mode){
				// ***********
				case RISING_EDGE:
					Clr_Bit(MCUCSR_register,ISC2);
					break;
				case FALLING_EDGE:
					Set_Bit(MCUCSR_register,ISC2);
					break;

				default :
					break;
				}
				break;
				default :
					break;
	}

}
