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

//TEST FUNCTION
void TEST_LED(void)
{
	LED_INITIALIZE(LED_PEDESTRIANS, LED_YELLOW_CAR);
	LED_ON(LED_PEDESTRIANS, LED_YELLOW_CAR);
}

void TEST_TIMER(void)
{
	Timer_INITIALIZE();
	LED_INITIALIZE(LED_CAR, LED_GREEN_CAR);
	LED_ON(LED_CAR, LED_GREEN_CAR);
	Timer_ON(4000);
	LED_OFF(LED_CAR, LED_GREEN_CAR);
	Timer_ON(4000);
}