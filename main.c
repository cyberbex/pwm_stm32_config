
#include "timer_drive.h"
#include "adc_drive.h"




int main(void)
{
	
	RCC->APB2ENR |= 0x0800;
	
	init_GP(PA,8,OUT50,O_AF_PP);

	
	TIM1->PSC = (24-1);
	TIM1->ARR = 100;
	TIM1->CNT = 0;
	TIM1->CCMR1 |= 0x60;
	TIM1->CCER |= 1;

	
	TIM1->BDTR |= 0x8000;
	
	TIM1->CCR1 = 99; // duty cycle

	
	TIM1->CR1 |= 1;

	
	
	 
while(1)
	{	
	
	}
}


