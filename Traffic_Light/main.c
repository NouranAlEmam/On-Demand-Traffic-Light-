/*
 * Traffic_Light.c
 *
 * Created: 11/11/2022 11:38:55 PM
 * Author : Nouran
 */ 

#include "Application/App.h"


/*int main(void)
{
    //INITIALIZATION
	APP_INITIALIZE();
    while (1) 
    {
		//STARTING APPLICATION
		APP_START();
    }
}*/

int main(void)
{
	LED_INITIALIZE(LED_PEDESTRIANS,LED_GREEN_PEDESTRIANS);
	BUTTON_INITIALIZE(BUTTON_PORT,BUTTON_PIN);
	Timer_INITIALIZE();
	
	uint8_t *p=0;
	while(1)
	{
		BUTTON_READ(BUTTON_PORT,BUTTON_PIN,p);
		if (*p==0)
		{
			LED_ON(LED_PEDESTRIANS,LED_GREEN_PEDESTRIANS);
			Timer_ON(2000);
			for(int j=0 ; j<30 ; j++)
			{
				Timer_ON(100);
				LED_TOGGLE(LED_PEDESTRIANS,LED_GREEN_PEDESTRIANS);
			}
		} 
		else
		{
			LED_OFF(LED_PEDESTRIANS,LED_GREEN_PEDESTRIANS);
			Timer_ON(5000);
		}
		//Timer_ON(1000);
	}
}
