
#include <stdint.h>
#include "stm32f407xx.h"

int main(void)
{
	RCC_TypeDef *pRCC;
	pRCC = RCC ;
	
	//1.Enable the HSE Oscillator
	pRCC->CR |= (0x1 << 16);	
	
	//2.Wait until the HSE becomes Stable.Crystall oscillator takes more time than the RC Oscillator to become Stable
	while(!(pRCC->CR |= (0x1 << 17)))
	{
		//Stays Until the CR set to 1 (Waits Until HSE becomes Stable)
	}

	//3.Select HSE as System Clock
	pRCC->CFGR &= ~(0x3 << 0);
	pRCC->CFGR |= (0x1 << 0);

	
	return 0;
}
