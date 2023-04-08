/*
* BUTTON.c
*
* Created: 11/6/2020 12:40:51 PM
*  Author: karim
*/


#include "BUTTON.h"


void BTN2_Init(void)
{
	DIO_SetPin_Direction(DIO_PORTD, DIO_PIN2, DIO_PIN_INPUT);
}

Uint8t BTN2_GetValue(void)
{
	Uint8t BTNX;
	
	value = GET_BIT(PINB, PINB0);
	DIO_ReadPin_Value(DIO_PORTD, DIO_PIN2, &BTNX);
	while(!BTNX){
	
	return BTNX;}
}
