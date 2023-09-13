/*
 * SEGMENT_interface.h
 *
 *  Created on: ???/???/????
 *      Author: moham
 */

#ifndef SEGMENT_INTERFACE_H_
#define SEGMENT_INTERFACE_H_

#define COMMON_CATHODE 0
#define COMMON_ANODE 1

#define Segment_Zero   0b00111111
#define Segment_One    0b00000110
#define Segment_Two    0b01011011
#define Segment_Three  0b01001111
#define Segment_Four   0b01100110
#define Segment_Five   0b01101101
#define Segment_Six    0b01111101
#define Segment_Seven  0b00000111
#define Segment_Eight  0b01111111
#define Segment_Nine   0b01101111


void SEGMENT_Init(u8 DataPort,u8 ControlPort,u8 ControlPin,u8 SegmentType);
void SEGMENT_Enable(u8 ControlPort,u8 ControlPin,u8 SegmentType);
void SEGMENT_Disable(u8 ControlPort,u8 ControlPin,u8 SegmentType);
void SEGMENT_Display_Number(u8 DataPort,u8 SegmentType,u8 Number);



#endif /* SEGMENT_INTERFACE_H_ */
