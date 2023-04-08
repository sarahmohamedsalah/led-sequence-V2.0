/*
* LED.c
*
* Created: 11/6/2020 11:29:56 AM
*  Author: karim
*/

#include "LED.h"


void LED0_Init(void)
{
	
	//DDRC = 0x04;
	DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
}
void LED0_ON(void)
{
	//PORTC = 0x04;
	DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_HIGH);
}
void LED0_OFF(void)
{
	//PORTC = 0x00;
	DIO_SetPin_Value(DIO_PORTC, DIO_PIN2, DIO_PIN_LOW);
}
void LED0_Toggle(void)
{
	//TGL_BIT(PORTC, 2);
	DIO_TogglePin(DIO_PORTC, DIO_PIN2);
}