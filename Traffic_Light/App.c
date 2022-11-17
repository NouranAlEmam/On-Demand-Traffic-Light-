/*
 * App.c
 *
 * Created: 11/13/2022 9:44:38 PM
 *  Author: Nouran
 */ 

//CONNECTING FILES
#include "App.h"

//INITIALIZATION
void APP_INITIALIZE(void)
{
	//CAR LEDS
	LED_INITIALIZE(LED_CAR,LED_GREEN_CAR);
	LED_INITIALIZE(LED_CAR,LED_YELLOW_CAR);
	LED_INITIALIZE(LED_CAR,LED_RED_CAR);
	
	//PEDESTRIANS LEDS
	LED_INITIALIZE(LED_PEDESTRIANS,LED_GREEN_PEDESTRIANS);
	LED_INITIALIZE(LED_PEDESTRIANS,LED_YELLOW_PEDESTRIANS);
	LED_INITIALIZE(LED_PEDESTRIANS,LED_RED_PEDESTRIANS);
	
	//BUTTON
	BUTTON_INITIALIZE(BUTTON_PORT,BUTTON_PIN);
	
	//TIMER
	
	//INTERRUPT
	SEI();
	RISING_EDGE();
	SETUP();
}

//STARTING APPLICATION
void APP_START(void)
{
	
}
IFUN(INT0_VECTOR)
{
	
}