/*
* BIT_MATH.h
*
* Created: 12/19/2019 5:19:06 PM
*  Author: Karim
*/


#ifndef BIT_MATH_H_
#define BIT_MATH_H_
/*Macros like function*/
#define SET_BIT(REG,BIT)	 REG |= (1<<BIT)
#define CLR_BIT(REG,BIT)	 REG &=~ (1<<BIT)
#define GET_BIT(REG,BIT)	 ((REG>>BIT)&1)
#define TGL_BIT(REG,BIT)     REG ^= (1<<BIT)
#define Get_LOW_Nibble(REG)  REG & 0x0F //HexaDecimal 
#define Get_HIGH_Nibble(REG) (REG>>4) & 0b00001111 //Binary
#define SET_PORT(REG)  REG = REG | 0xFF
#define CLR_PORT(REG)  REG = REG & 0x00
#define TGL_PORT(REG) REG ^= 0xFF
#define GET_PORT(REG) REG & 0xFF
#endif /* BIT_MATH_H_ */