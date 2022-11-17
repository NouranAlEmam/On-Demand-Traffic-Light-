/*
 * LED.c
 *
 * Created: 11/13/2022 9:40:11 PM
 *  Author: Nouran
 */ 

#include "LED.h"

//INITIALIZATION
void LED_INITIALIZE(uint8_t ledPort, uint8_t ledPin)
{
	DIO_INITIALIZE(ledPin, ledPort, OUT);
}

//LED ON
void LED_ON(uint8_t ledPort, uint8_t ledPin)
{
	DIO_WRITE(ledPin, ledPort, HIGH);
}

//LED OFF
void LED_OFF(uint8_t ledPort, uint8_t ledPin)
{
	DIO_WRITE(ledPin, ledPort, LOW);
}

//LED TOGGLE
void LED_TOGGLE(uint8_t ledPort, uint8_t ledPin)
{
	DIO_TOGGLE(ledPin, ledPort);
}
