/*
 * DIO_register.h
 *
 *  Created on: ???/???/????
 *      Author: moham
 */

#ifndef DIO_REGISTER_H_
#define DIO_REGISTER_H_

 #define DDRA_register     *((volatile u8*)(0x3B))
 #define PORTA_register    *((volatile u8*)(0x3A))
 #define PINA_register     *((volatile u8*)(0x39))

 #define DDRB_register     *((volatile u8*)(0x37))
 #define PORTB_register    *((volatile u8*)(0x38))
 #define PINB_register     *((volatile u8*)(0x36))

 #define DDRC_register     *((volatile u8*)(0x34))
 #define PORTC_register    *((volatile u8*)(0x35))
 #define PINC_register     *((volatile u8*)(0x33))

 #define DDRD_register     *((volatile u8*)(0x31))
 #define PORTD_register    *((volatile u8*)(0x32))
 #define PIND_register     *((volatile u8*)(0x30))


#endif /* DIO_REGISTER_H_ */
