/*
 * DIO_program.c
 *
 *  Created on: ???/???/????
 *      Author: moham
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_register.h"
#include "DIO_interface.h"

void DIO_SetPortDirection(u8 PortNo, u8 Direction){
	switch (PortNo){
	case PORT_A:
		DDRA_register=Direction;
		break;
	case PORT_B:
		DDRB_register=Direction;
		break;
	case PORT_C:
		DDRC_register=Direction;
		break;
	case PORT_D:
		DDRD_register=Direction;
		break;
	default :
		break;
	}
}
void DIO_SetPinDirection(u8 PortNo,u8 PinNo, u8 Direction){
	if (PinNo>=PIN_0 && PinNo<=PIN_7){
		if (Direction == PIN_OUTPUT){
			switch (PortNo){
			case PORT_A :
				Set_Bit(DDRA_register,PinNo);
				break;
			case PORT_B :
				Set_Bit(DDRB_register,PinNo);
				break;
			case PORT_C :
				Set_Bit(DDRC_register,PinNo);
				break;
			case PORT_D :
				Set_Bit(DDRD_register,PinNo);
				break;
			default:
				break;
			}
		}else if(Direction == PIN_INPUT) {
			switch (PortNo){
			case PORT_A :
				Clr_Bit(DDRA_register,PinNo);
				break;
			case PORT_B :
				Clr_Bit(DDRB_register,PinNo);
				break;
			case PORT_C :
				Clr_Bit(DDRC_register,PinNo);
				break;
			case PORT_D :
				Clr_Bit(DDRD_register,PinNo);
				break;
			default:
				break;
			}
		}

	}
}
void DIO_SetPortValue(u8 PortNo, u8 Value){
	switch (PortNo){
	case PORT_A:
		PORTA_register=Value;
		break;
	case PORT_B:
		PORTB_register=Value;
		break;
	case PORT_C:
		PORTC_register=Value;
		break;
	case PORT_D:
		PORTD_register=Value;
		break;
	default :
		break;
	}
}
void DIO_SetPinValue(u8 PortNo,u8 pinNo, u8 Value){
	if (pinNo>=PIN_0 && pinNo<=PIN_7){
		if (Value == PIN_HIGH){
			switch (PortNo){
			case PORT_A :
				Set_Bit(PORTA_register,pinNo);
				break;
			case PORT_B :
				Set_Bit(PORTB_register,pinNo);
				break;
			case PORT_C :
				Set_Bit(PORTC_register,pinNo);
				break;
			case PORT_D :
				Set_Bit(PORTD_register,pinNo);
				break;
			default:
				break;
			}
		}else if(Value == PIN_LOW) {
			switch (PortNo){
			case PORT_A :
				Clr_Bit(PORTA_register,pinNo);
				break;
			case PORT_B :
				Clr_Bit(PORTB_register,pinNo);
				break;
			case PORT_C :
				Clr_Bit(PORTC_register,pinNo);
				break;
			case PORT_D :
				Clr_Bit(PORTD_register,pinNo);
				break;
			default:
				break;
			}
		}

	}
}

u8 DIO_GetPortValue(u8 PortNo){
	u8 local_return;
	switch (PortNo){
	case PORT_A:
		local_return = PINA_register;
		break;
	case PORT_B:
		local_return = PINB_register;
		break;
	case PORT_C:
		local_return = PINC_register;
		break;
	case PORT_D:
		local_return = PIND_register;
		break;
	default :
		break;
	}
	return local_return;
}
u8 DIO_GetPinValue(u8 PortNo , u8 PinNo){
	u8 local_return;
	if (PinNo>=PIN_0 && PinNo<=PIN_7){
		switch (PortNo){
		case PORT_A:
			local_return = Get_Bit(PINA_register,PinNo);
			break;
		case PORT_B:
			local_return = Get_Bit(PINB_register,PinNo);
			break;
		case PORT_C:
			local_return = Get_Bit(PINC_register,PinNo);
			break;
		case PORT_D:
			local_return = Get_Bit(PIND_register,PinNo);
			break;
		default :
			break;
		}
	}
	return local_return;
}
