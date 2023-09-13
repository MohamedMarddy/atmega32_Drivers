/*
 * LCD_program.c
 *
 *  Created on: ???/???/????
 *      Author: moham
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#define F_CPU 8000000
#include "avr/delay.h"
#include "DIO_interface.h"
#include "LCD_configration.h"
#include "LCD_interface.h"


void LCD_Init(void){
	DIO_SetPortDirection(DATA_PORT,PORT_OUTPUT);
	DIO_SetPinDirection(CONTROL_PORT,RS_PIN,PIN_OUTPUT);
	DIO_SetPinDirection(CONTROL_PORT,RW_PIN,PIN_OUTPUT);
	DIO_SetPinDirection(CONTROL_PORT,E_PIN,PIN_OUTPUT);

	_delay_ms(3);
	LCD_Write_Command(lcd_FunctionSet8bit);
	_delay_ms(3);
	LCD_Write_Command(lcd_DisplayOn);
	_delay_ms(3);
	LCD_Write_Command(lcd_Clear);
	_delay_ms(3);
	LCD_Write_Command(lcd_EntryMode);
	_delay_ms(3);
	LCD_Write_Command(lcd_Home);
}
void LCD_Write_Command(u8 Command){
	DIO_SetPinValue(CONTROL_PORT,RS_PIN,PIN_LOW);
	DIO_SetPinValue(CONTROL_PORT,RW_PIN,PIN_LOW);
	DIO_SetPinValue(CONTROL_PORT,E_PIN,PIN_LOW);

	DIO_SetPortValue(DATA_PORT,Command);
	_delay_ms(3);
	DIO_SetPinValue(CONTROL_PORT,E_PIN,PIN_HIGH);
	_delay_ms(3);
	DIO_SetPinValue(CONTROL_PORT,E_PIN,PIN_LOW);
}
void LCD_Write_Data(u8 Data){
	DIO_SetPinValue(CONTROL_PORT,RS_PIN,PIN_HIGH);
	DIO_SetPinValue(CONTROL_PORT,RW_PIN,PIN_LOW);
	DIO_SetPinValue(CONTROL_PORT,E_PIN,PIN_LOW);

	DIO_SetPortValue(DATA_PORT,Data);
	_delay_ms(3);
	DIO_SetPinValue(CONTROL_PORT,E_PIN,PIN_HIGH);
	_delay_ms(3);
	DIO_SetPinValue(CONTROL_PORT,E_PIN,PIN_LOW);
}

