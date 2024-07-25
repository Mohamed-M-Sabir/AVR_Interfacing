/*
 * bit_math.h
 *
 *  Created on: Jul 19, 2024
 *      Author: BEDO
 */

#ifndef LIB_BIT_MATH_H_
#define LIB_BIT_MATH_H_



#define set_bit(num,bit_num)         num=num|(1<<bit_num)
#define clear_bit(num,bit_num)       num=num&(~(1<<bit_num))
#define toggle_bit(num,bit_num)      num=num^(1<<bit_num)
#define get_bit(num,bit_num)         (num>>bit_num)&1

#endif /* LIB_BIT_MATH_H_ */
