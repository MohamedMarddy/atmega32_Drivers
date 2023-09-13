/*
 * SEGMENT_program.c
 *
 *  Created on: ???/???/????
 *      Author: moham
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "SEGMENT_interface.h"

void SEGMENT_Init(u8 DataPort,u8 ControlPort,u8 ControlPin,u8 SegmentType){
	switch(SegmentType){
	case COMMON_CATHODE :
		DIO_SetPortDirection(DataPort,PORT_OUTPUT);
		DIO_SetPinDirection(ControlPort,ControlPin,PIN_OUTPUT);
		DIO_SetPortValue(DataPort,PORT_LOW);
		DIO_SetPinValue(ControlPort,ControlPin,PIN_LOW);
		break ;
	case COMMON_ANODE :
		DIO_SetPortDirection(DataPort,PORT_OUTPUT);
		DIO_SetPinDirection(ControlPort,ControlPin,PIN_OUTPUT);
		DIO_SetPortValue(DataPort,PORT_HIGH);
		DIO_SetPinValue(ControlPort,ControlPin,PIN_HIGH);
		break;
	default :
		break;
	}
}
void SEGMENT_Enable(u8 ControlPort ,u8 ControlPin,u8 SegmentType){
	switch(SegmentType){
	case COMMON_CATHODE :
		DIO_SetPinDirection(ControlPort,ControlPin,PIN_LOW);
		break ;
	case COMMON_ANODE :
		DIO_SetPinDirection(ControlPort,ControlPin,PIN_HIGH);
		break ;
	default :
		break;
	}
}
void SEGMENT_Disable(u8 ControlPort ,u8 ControlPin,u8 SegmentType){
	switch(SegmentType){
	case COMMON_CATHODE :
		DIO_SetPinDirection(ControlPort,ControlPin,PIN_HIGH);
		break ;
	case COMMON_ANODE :
		DIO_SetPinDirection(ControlPort,ControlPin,PIN_LOW);
		break ;
	default :
		break;
	}
}
void SEGMENT_Display_Number(u8 DataPort ,u8 SegmentType,u8 Number){
	if (SegmentType == COMMON_CATHODE){
		switch (Number){
		case 0 :DIO_SetPortValue(DataPort , Segment_Zero);
		break;
		case 1 :DIO_SetPortValue(DataPort , Segment_One);
		break;
		case 2 :DIO_SetPortValue(DataPort , Segment_Two);
		break;
		case 3 :DIO_SetPortValue(DataPort , Segment_Three);
		break;
		case 4 :DIO_SetPortValue(DataPort , Segment_Four);
		break;
		case 5 :DIO_SetPortValue(DataPort , Segment_Five);
		break;
		case 6 :DIO_SetPortValue(DataPort , Segment_Six);
		break;
		case 7 :DIO_SetPortValue(DataPort , Segment_Seven);
		break;
		case 8 :DIO_SetPortValue(DataPort , Segment_Eight);
		break;
		case 9 :DIO_SetPortValue(DataPort , Segment_Nine);
		break;

		}
	}else if(SegmentType == COMMON_ANODE){
		switch (Number){
		case 0 :DIO_SetPortValue(DataPort , ~Segment_Zero);
		break;
		case 1 :DIO_SetPortValue(DataPort , ~Segment_One);
		break;
		case 2 :DIO_SetPortValue(DataPort , ~Segment_Two);
		break;
		case 3 :DIO_SetPortValue(DataPort , ~Segment_Three);
		break;
		case 4 :DIO_SetPortValue(DataPort , ~Segment_Four);
		break;
		case 5 :DIO_SetPortValue(DataPort , ~Segment_Five);
		break;
		case 6 :DIO_SetPortValue(DataPort , ~Segment_Six);
		break;
		case 7 :DIO_SetPortValue(DataPort , ~Segment_Seven);
		break;
		case 8 :DIO_SetPortValue(DataPort , ~Segment_Eight);
		break;
		case 9 :DIO_SetPortValue(DataPort , ~Segment_Nine);
		break;

		}
	}
}

