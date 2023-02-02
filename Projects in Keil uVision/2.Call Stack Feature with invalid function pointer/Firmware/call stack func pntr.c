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
	for(i=0;i<=50000;i++)
	{
	}
}

int main()
{
	Buttons_Initialize();
	LED_Initialize();
	while(1)
	{
		fun1();
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
}
	
