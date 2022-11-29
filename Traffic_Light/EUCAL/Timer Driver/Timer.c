/*
 * Timer.c
 *
 * Created: 11/13/2022 9:37:47 PM
 *  Author: Nouran
 */ 

//CONNECTING FILES
#include "Timer.h"

//MATHMATICAL OPERATIONS
#include <math.h>

//INTIALIZATION
void Timer_INITIALIZE(void)
{
	COUNTER=0x00;
}
//TIMER DELAY
void Timer_ON(uint32_t TIME)
{
	//DEFINIG VARIABLES
	double COUNTS_NO = 0, TT=0, MAX=0, To=0, NO_FLAGS=0;
	
	//CALCULATION OF MAXIMUM DELAY TIME
	TT = 256.0/1000.0;   //TIME NEEDED FOR ONE TICK
	MAX = TT*(2*2*2*2*2*2*2*2);	
	
	//GET To & NO. OF COUNTS
	if (MAX == TIME)
	{
		To = 0;
		NO_FLAGS = 1;
	}
	else if (MAX < TIME)
	{
		NO_FLAGS = ceil(TIME/MAX);
		To = (1 << 8) - (TIME/TT)/NO_FLAGS;
	}
	else
	{
		To = (MAX - TIME)/TT;
		NO_FLAGS = 1;
	} 
	
	//SETTING To
	CONTROL = To;        // TIMER 0 CONTROL REGISTER VALUE = To
	SET(COUNTER,2);      //SETTING TIMER 0 COUNTER REGISTER BY 2
				         
	//NO. OF COUNTS
	while(NO_FLAGS > COUNTS_NO)
	{
		//STARTING TIMER
		SET(FLAG,0);

		//WAITING
		while (GET(FLAG,0) == 0);
		
		//CLEAR
		SET(FLAG,0);
		COUNTS_NO++;
	}
	//STOP
	COUNTER = 0x00;
}
