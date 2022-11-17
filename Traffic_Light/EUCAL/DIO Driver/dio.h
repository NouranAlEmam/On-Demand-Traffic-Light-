/*
 * dio.h
 *
 * Created: 11/13/2022 9:37:16 PM
 *  Author: Nouran
 */ 


#ifndef DIO_H_
#define DIO_H_

//CONNCETING FILES
#include "../../Utilities/BitManipulation.h"
#include "../../Utilities/Registers.h"
#include "../Timer Driver/Timer.h"

//DIRECTIONS
#define IN	0
#define OUT 1

//PORTS
#define PORT_A 'A'
#define	PORT_B 'B'
#define	PORT_C 'C'
#define	PORT_D 'D'

//STATE
#define LOW	 0
#define HIGH 1
 
 //INITIALIZATION
 void DIO_INITIALIZE(uint8_t pinNumber, uint8_t portNumber, uint8_t direction);

 //CHANGE DIO STATE
 void DIO_WRITE(uint8_t pinNumber, uint8_t portNumber, uint8_t status);

 //TOGGLE DIO STATE
 void DIO_TOGGLE(uint8_t pinNumber, uint8_t portNumber);

 //GET DIO STATE
uint8_t DIO_READ(uint8_t pinNumber, uint8_t portNumber, uint8_t* value);	


#endif /* DIO_H_ */