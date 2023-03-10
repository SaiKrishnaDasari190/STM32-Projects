
#include <stdint.h>
#include "stm32f407xx.h"

int main(void)
{
	//Initialising Structure Pointer of the Particular Peripheral
	ADC_TypeDef *pADC;
	RCC_TypeDef *pRCC;
	GPIO_TypeDef *pGPIO;
	
	//Giving Base Address of Peripheral to the pointer Variable of Structure Pointer
	pGPIO = GPIOA;
	pRCC = RCC;
	pADC = ADC1;
	
	//First Enable then access the Peripheral Register
	pRCC->APB2ENR = pRCC->APB2ENR | (1 << 8); 	//pRCC->APB2ENR |= (1 << 8);
	pRCC->AHB1ENR = pRCC->AHB1ENR | (1<<0);
	
	//Writing Data Into The Register
	pADC->CR1 = 0x55;
	pGPIO->PUPDR = 0x11;
	
	return 0;
}
