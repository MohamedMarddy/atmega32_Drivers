/*
 * GLOPAL_INTERRUPT_program.c
 *
 *  Created on: ???/???/????
 *      Author: moham
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GLOPAL_INTERRUPT_register.h"
#include "GLOPAL_INTERRUPT_inreface.h"

void GLOPAL_INTERRUPT_Enable(void){

	Set_Bit(SREG_register,I);
}
void GLOPAL_INTERRUPT_Disable(void){
	Clr_Bit(SREG_register,I);

}
