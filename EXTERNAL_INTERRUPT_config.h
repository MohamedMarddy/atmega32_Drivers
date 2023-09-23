/*
 * EXTERNAL_INTERRUPT_config.h
 *
 *  Created on: ???/???/????
 *      Author: moham
 */

#ifndef EXTERNAL_INTERRUPT_CONFIG_H_
#define EXTERNAL_INTERRUPT_CONFIG_H_

#define LOW_LEVEL     0
#define IOC           1
#define FALLING_EDGE  2
#define RISING_EDGE   3


#define EXTI0 0
#define EXTI1 1
#define EXTI2 2

#define EXTI0_MODE IOC
#define EXTI1_MODE RISING_EDGE
#define EXTI2_MODE FALLING_EDGE

#endif /* EXTERNAL_INTERRUPT_CONFIG_H_ */
