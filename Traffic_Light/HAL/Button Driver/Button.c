/*
 * Button.c
 *
 * Created: 11/13/2022 9:39:45 PM
 *  Author: Nouran
 */ 

#include "Button.h"

uint8_t I = 0;

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

//TEST FUNCTION
void TEST_BUTTON (void)
{
	uint8_t* r = 0;
	BUTTON_INITIALIZE(BUTTON_PORT, BUTTON_PIN);
	LED_INITIALIZE(LED_CAR, LED_GREEN_CAR);
	BUTTON_READ(BUTTON_PORT, BUTTON_PIN, r);
	Timer_INITIALIZE();
	LED_ON(LED_CAR, LED_GREEN_CAR);
	if (*r == HIGH)
	{
		
		//Timer_ON(2000);
		//LED_TOGGLE(LED_CAR, LED_GREEN_CAR);
		
		LED_OFF(LED_CAR, LED_GREEN_CAR);
		Timer_ON(2000);
	}
}

void TEST_BUTTON_INTERRUPT (void)
{
	
	BUTTON_INITIALIZE(BUTTON_PORT, BUTTON_PIN);
	LED_INITIALIZE(LED_PEDESTRIANS, LED_YELLOW_PEDESTRIANS);
	Timer_INITIALIZE();
	SEI();
	RISING_EDGE();
	SETUP();
	LED_ON(LED_PEDESTRIANS, LED_YELLOW_PEDESTRIANS);
	if (I == HIGH)
	{
		LED_OFF(LED_PEDESTRIANS, LED_YELLOW_PEDESTRIANS);
		Timer_ON(2000);
		I=0;
	}
}

IFUN(INT0_VECTOR)
{
	I=1;
}