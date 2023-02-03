#include<stdint.h>
#include "Board_Buttons.h"
#include "Board_LED.h"
static void fun3(void)
{
	void (*jump_addr) (void) = 0x00000000;
	jump_addr();
}
static void fun2(void)
{
	fun3();
}
static void fun1(void)
{
	fun2();
}
static void delay(void)
{
	uint32_t i=0;
	for(i=0;i<=70000;i++)
	{
	}
}

int main()
{
	Buttons_Initialize();
	LED_Initialize();
	uint32_t count = 0;
	while(1)
	{
		if(Buttons_GetState())
		{
			if(count<3)
			{
				count++;
			}
			else
			{
				count =0;
			}
		}
		if(count== 0)
		{
			LED_On(0);
			LED_On(1);
			LED_On(2);
			LED_On(3);
			delay();
			LED_Off(0);
			LED_Off(1);
			LED_Off(2);
			LED_Off(3);
			delay();
		}
		else if (count==1)
		{
			LED_On(0);
			delay();
			LED_Off(0);
			LED_On(1);
			delay();
			LED_Off(1);
			LED_On(2);
			delay();
			LED_On(3);
			LED_Off(2);
			delay();
			LED_Off(3);
			delay();
		}
		else
		{
			LED_On(0);
			LED_On(3);
			delay();
			delay();
			LED_Off(0);
			LED_Off(3);
			LED_On(1);
			LED_On(2);
			delay();
			delay();
			LED_Off(1);
			LED_Off(2);
		}
	}
}
	
