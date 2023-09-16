#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "SEGMENT_interface.h"
#include "KEYPAD_interface.h"
#include "LCD_interface.h"
#include "Stepper_interface.h"


void main(void){


	DIO_SetPinDirection(PORT_A,PIN_0,PIN_OUTPUT);
	DIO_SetPinValue(PORT_A,PIN_0,PIN_LOW);
	DIO_SetPinDirection(PORT_A,PIN_1,PIN_OUTPUT);
	DIO_SetPinValue(PORT_A,PIN_1,PIN_LOW);

	
	STEPPER_Init();
	while(1){
		STEPPER_ClockWise(180);
		STEPPER_CounterClockWise(180);
	}
}
