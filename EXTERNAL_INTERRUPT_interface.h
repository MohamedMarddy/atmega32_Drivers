/*
 * EXTERNAL_INTERRUPT_interface.h
 *
 *  Created on: ???/???/????
 *      Author: moham
 */

#ifndef EXTERNAL_INTERRUPT_INTERFACE_H_
#define EXTERNAL_INTERRUPT_INTERFACE_H_


void EXTERNAL_INTERRUPT_Init();
void EXTERNAL_INTERRUPT_Enable(u8 INT_no);
void EXTERNAL_INTERRUPT_Disable(u8 INT_no);
void EXTERNAL_INTERRUPT_Set_Mode(u8 INT_no,u8 Mode);



#endif /* EXTERNAL_INTERRUPT_INTERFACE_H_ */
