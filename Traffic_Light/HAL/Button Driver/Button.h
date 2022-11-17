/*
 * Button.h
 *
 * Created: 11/13/2022 9:39:38 PM
 *  Author: Nouran
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
//CONNECTING FILES
#include "../../EUCAL/DIO Driver/dio.h"

//BUTTON MACROS
#define BUTTON_PIN	PIN2			
#define BUTTON_PORT PORT_D			

//INITIALIZATION
void BUTTON_INITIALIZE(uint8_t buttonPort, uint8_t buttonPin);
//GET BUTTON STATE
void BUTTON_READ(uint8_t buttonPort, uint8_t buttonPin, uint8_t* value);

#endif /* BUTTON_H_ */