/*
 * dio.c
 *
 * Created: 11/13/2022 9:37:24 PM
 *  Author: Nouran
 */ 

//CONNECTING FILES
#include "dio.h"

//INITIALIZATION
void DIO_INITIALIZE(uint8_t pinNumber, uint8_t portNumber, uint8_t direction)
{
	switch (portNumber)
	{
		case PORT_A:
			if (direction == IN)
			{
				CLEAR(DDRA, pinNumber);
			}
			else if (direction == OUT)
			{
				SET(DDRA, pinNumber);
			}
			else
			{
				//Error handling
			}
			break;
			case PORT_B:
			if (direction == IN)
			{
				CLEAR(DDRB, pinNumber);
			}
			else if (direction == OUT)
			{
				SET(DDRB, pinNumber);
			}
			else
			{
				//Error handling
			}
			break;
			case PORT_C:
			if (direction == IN)
			{
				CLEAR(DDRC, pinNumber);
			}
			else if (direction == OUT)
			{
				SET(DDRC, pinNumber);
			}
			else
			{
				//Error handling
			}
			break;
			case PORT_D:
			if (direction == IN)
			{
				CLEAR(DDRD, pinNumber);
			}
			else if (direction == OUT)
			{
				SET(DDRD, pinNumber);
			}
			else
			{
				//Error handling
			}
			break;
	}
}

//CHANGE DIO STATE
void DIO_WRITE(uint8_t pinNumber, uint8_t portNumber, uint8_t value)
{
	switch (portNumber)
	{
		case PORT_A:
		if(value == LOW)
		{
			CLEAR(PORTA, pinNumber);
		}
		else if (value == HIGH)
		{
			SET(PORTA, pinNumber);
		}
		else
		{
			// Error handling
		}
		break;
		case PORT_B:
		if(value == LOW)
		{
			CLEAR(PORTB, pinNumber);
		}
		else if (value == HIGH)
		{
			SET(PORTB, pinNumber);
		}
		else
		{
			// Error handling
		}
		break;
		case PORT_C:
		if(value == LOW)
		{
			CLEAR(PORTC, pinNumber);
		}
		else if (value == HIGH)
		{
			SET(PORTC, pinNumber);
		}
		else
		{
			// Error handling
		}
		break;
		case PORT_D:
		if(value == LOW)
		{
			CLEAR(PORTD, pinNumber);
		}
		else if (value == HIGH)
		{
			SET(PORTD, pinNumber);
		}
		else
		{
			// Error handling
		}
		break;
	}
}

//TOGGLE DIO STATE
void DIO_TOGGLE(uint8_t pinNumber, uint8_t portNumber)
{
	switch (portNumber)
	{
		case PORT_A:
		TOGGEL(PORTA, pinNumber);
		break;
		
		case PORT_B:
		TOGGEL(PORTB, pinNumber);
		break;
		
		case PORT_C:
		TOGGEL(PORTC, pinNumber);
		break;
		
		case PORT_D:
		TOGGEL(PORTD, pinNumber);
		break;
	}
}

//GET DIO STATE
uint8_t DIO_READ(uint8_t pinNumber, uint8_t portNumber, uint8_t* value)
{
	switch (portNumber)
	{
		case PORT_A:
			*value = GET(PINA, pinNumber);
		break;
		case PORT_B:
			*value = GET(PINB, pinNumber);
		break;
		case PORT_C:
			*value = GET(PINC, pinNumber);
		break;
		case PORT_D:
			*value = GET(PIND, pinNumber);
		break;
	}
	return *value;
}