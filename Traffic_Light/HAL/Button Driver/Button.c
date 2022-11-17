/*
 * Button.c
 *
 * Created: 11/13/2022 9:39:45 PM
 *  Author: Nouran
 */ 

#include "Button.h"

//INITIALIZATION
void BUTTON_INITIALIZE(uint8_t buttonPort, uint8_t buttonPin)
{
	DIO_INITIALIZE(buttonPin, buttonPort, IN);
}

//GET BUTTON STATE
void BUTTON_READ(uint8_t buttonPort, uint8_t buttonPin, uint8_t* value)
{
	DIO_READ(buttonPin, buttonPort, value);
}