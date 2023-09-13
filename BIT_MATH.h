/*
 * BIT_MATH.h
 *
 *  Created on: ???/???/????
 *      Author: moham
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define Set_Bit(Var,BitNo)    (Var |=  (1 << (BitNo)))
#define Clr_Bit(Var,BitNo)    (Var &= ~(1 << (BitNo)))
#define Tog_Bit(Var,BitNo)    (Var ^=  (1 << (BitNo)))
#define Get_Bit(Var,BitNo)    (Var = (Var>>BitNo) &1)

#endif /* BIT_MATH_H_ */
