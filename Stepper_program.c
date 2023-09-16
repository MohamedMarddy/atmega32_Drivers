/*
 * Steper_program.c
 *
 *  Created on: ???/???/????
 *      Author: moham
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "Stepper_Config.h"
#include "Stepper_interface.h"
#include "avr/delay.h"
#define F_CPU 8000000


void STEPPER_Init(void){
	DIO_SetPinDirection(STEPPER_PORT,BLUE,PIN_OUTPUT);
	DIO_SetPinDirection(STEPPER_PORT,PINK,PIN_OUTPUT);
	DIO_SetPinDirection(STEPPER_PORT,YELLOW,PIN_OUTPUT);
	DIO_SetPinDirection(STEPPER_PORT,ORANGE,PIN_OUTPUT);

	DIO_SetPinValue(STEPPER_PORT,BLUE,PIN_HIGH);
	DIO_SetPinValue(STEPPER_PORT,PINK,PIN_HIGH);
	DIO_SetPinValue(STEPPER_PORT,YELLOW,PIN_HIGH);
	DIO_SetPinValue(STEPPER_PORT,ORANGE,PIN_HIGH);
}
void STEPPER_ClockWise(u16 Degrees){
	DIO_SetPinValue(STEPPER_PORT,BLUE,PIN_HIGH);
	DIO_SetPinValue(STEPPER_PORT,PINK,PIN_HIGH);
	DIO_SetPinValue(STEPPER_PORT,YELLOW,PIN_HIGH);
	DIO_SetPinValue(STEPPER_PORT,ORANGE,PIN_HIGH);

	u16 max = (10*Degrees/7); // TURNS
	u16 i=0;
	for(i=0;i<max;i++){
		DIO_SetPinValue(STEPPER_PORT,BLUE,PIN_LOW);
		DIO_SetPinValue(STEPPER_PORT,PINK,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,YELLOW,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,ORANGE,PIN_HIGH);
		_delay_ms(2);
		DIO_SetPinValue(STEPPER_PORT,BLUE,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,PINK,PIN_LOW);
		DIO_SetPinValue(STEPPER_PORT,YELLOW,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,ORANGE,PIN_HIGH);
		_delay_ms(2);

		DIO_SetPinValue(STEPPER_PORT,BLUE,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,PINK,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,YELLOW,PIN_LOW);
		DIO_SetPinValue(STEPPER_PORT,ORANGE,PIN_HIGH);
		_delay_ms(2);

		DIO_SetPinValue(STEPPER_PORT,BLUE,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,PINK,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,YELLOW,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,ORANGE,PIN_LOW);
		_delay_ms(2);
	}
}
void STEPPER_CounterClockWise(u16 Degrees){
	DIO_SetPinValue(STEPPER_PORT,BLUE,PIN_HIGH);
	DIO_SetPinValue(STEPPER_PORT,PINK,PIN_HIGH);
	DIO_SetPinValue(STEPPER_PORT,YELLOW,PIN_HIGH);
	DIO_SetPinValue(STEPPER_PORT,ORANGE,PIN_HIGH);

	u16 max = (10*Degrees/7); // TURNS
	u16 i=0;
	for(i=0;i<max;i++){
		DIO_SetPinValue(STEPPER_PORT,BLUE,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,PINK,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,YELLOW,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,ORANGE,PIN_LOW);
		_delay_ms(2);
		DIO_SetPinValue(STEPPER_PORT,BLUE,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,PINK,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,YELLOW,PIN_LOW);
		DIO_SetPinValue(STEPPER_PORT,ORANGE,PIN_HIGH);
		_delay_ms(2);

		DIO_SetPinValue(STEPPER_PORT,BLUE,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,PINK,PIN_LOW);
		DIO_SetPinValue(STEPPER_PORT,YELLOW,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,ORANGE,PIN_HIGH);
		_delay_ms(2);

		DIO_SetPinValue(STEPPER_PORT,BLUE,PIN_LOW);
		DIO_SetPinValue(STEPPER_PORT,PINK,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,YELLOW,PIN_HIGH);
		DIO_SetPinValue(STEPPER_PORT,ORANGE,PIN_HIGH);
		_delay_ms(2);
	}
}
