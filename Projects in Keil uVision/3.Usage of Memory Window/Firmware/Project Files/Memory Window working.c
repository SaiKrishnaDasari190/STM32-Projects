#include<stdint.h>
#include "Board_LED.h"

static int value = 0;
static void ram_read(void)
{
	uint32_t *ram_pointer = (uint32_t*)0x20000000;
	value = *(ram_pointer);

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
	ram_read();
	LED_Initialize();
	while(1)
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
	
