
#include <stdint.h>

//This is constant data or read only data stored in flash memory of the MCU
char const my_word[] = "I am Learning STM32";

#define Base_Addr_SRAM 0x20000000


int main(void)
{
	for(int i =0; i < sizeof(my_word); i++)
	{
		*((uint8_t*)Base_Addr_SRAM + i) = my_word[i];
	}	
	
	return 0;
}
