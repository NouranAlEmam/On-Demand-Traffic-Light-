/*
 * LED.h
 *
 * Created: 11/13/2022 9:40:18 PM
 *  Author: Nouran
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../EUCAL/DIO Driver/dio.h"
#include "../../EUCAL/Timer Driver/Timer.h"

//CARS LEDS
#define LED_GREEN_CAR PIN0			
#define LED_YELLOW_CAR PIN1			
#define LED_RED_CAR PIN2
	
//PEDESTRIANS LEDS
#define LED_GREEN_PEDESTRIANS PIN0
#define LED_YELLOW_PEDESTRIANS PIN1
#define LED_RED_PEDESTRIANS PIN2	
	
//TRAFFIC PORTS
#define LED_CAR PORT_A			
#define LED_PEDESTRIANS PORT_B	

void LED_INITIALIZE(uint8_t portNumber, uint8_t pinNumber);
void LED_ON(uint8_t ledPort, uint8_t ledPin);
void LED_OFF(uint8_t ledPort, uint8_t ledPin);
void LED_TOGGLE(uint8_t ledPort, uint8_t ledPin);

//TEST FUNCTIONS
void TEST_LED(void);
void TEST_TIMER(void);
#endif /* LED_H_ */