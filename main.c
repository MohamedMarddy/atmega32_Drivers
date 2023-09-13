/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: moham
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "SEGMENT_interface.h"
#include "LCD_interface.h"

void main(void){
LCD_Init();
LCD_Write_Data('M');
LCD_Write_Data('A');
LCD_Write_Data('R');
LCD_Write_Data('D');
LCD_Write_Data('D');
LCD_Write_Data('Y');
while(1){

}
}
