/*
 * EXTERNAL_INTERRUPT_register.h
 *
 *  Created on: ???/???/????
 *      Author: moham
 */

#ifndef EXTERNAL_INTERRUPT_REGISTER_H_
#define EXTERNAL_INTERRUPT_REGISTER_H_

#define MCUCR_register *((volatile u8*)(0x55))
#define MCUCSR_register *((volatile u8*)(0x54))
#define GICR_register *((volatile u8*)(0x5B))
#define GIFR_register *((volatile u8*)(0x5A))

#define INT_0 6
#define INT_1 7
#define INT_2 5

#define INTF_0 6
#define INTF_1 7
#define INTF_2 5

#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3

#define ISC2 6
#endif /* EXTERNAL_INTERRUPT_REGISTER_H_ */
