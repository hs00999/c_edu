#include "m0_matrix_lib.h"

/* System 변수 및 함수들이므로 절대 수정하거나 삭제하지 마시오 */

RTC_TimeTypeDef RTC_Time;
volatile uint32_t Key_value = 0;
volatile uint32_t Timer3_Counter = 0;
volatile uint32_t Timer3_Period = 0;
volatile uint32_t Timer3_Flag_on = 0;

void HardFault_Handler(void)
{
	Uart2_Printf("HardFault_Handler \n\n");
	for(;;);
}

/* 라이브러리에서 사용하는 ISR이므로 절대 수정하거나 삭제하지 마시오 */

void EXTI4_15_IRQHandler(void)
{
	Key_value = 1;
	TIM_Delay_ms(20);
	EXTI->PR = 1<<12;
	NVIC->ICPR[0] = 1<<7;
}

void TIM3_IRQHandler(void)
{
	if((TIM3->SR & 0x1) != 0x0)
	{
		TIM3->SR &= ~0x1;

		if (Timer3_Counter++ >= Timer3_Period)
		{
			Timer3_Counter = 0;
			Timer3_Flag_on = 1;
		}
	}
}

/* 여기서부터 필요한 ISR을 설계하시오 */

void WWDG_IRQHandler(void){}
void PVD_IRQHandler(void){}
void RTC_IRQHandler(void){}
void FLASH_IRQHandler(void){}
void RCC_IRQHandler(void){}
void EXTI0_1_IRQHandler(void){}
void EXTI2_3_IRQHandler(void){}
void TS_IRQHandler(void){}
void DMA1_Channel1_IRQHandler(void){}
void DMA1_Channel2_3_IRQHandler(void){}
void DMA1_Channel4_5_IRQHandler(void){}
void ADC1_COMP_IRQHandler(void){}
void TIM1_BRK_UP_TRG_COM_IRQHandler(void){}
void TIM1_CC_IRQHandler(void){}
void TIM6_DAC_IRQHandler(void){}
void TIM14_IRQHandler(void){}
void TIM15_IRQHandler(void){}
void TIM16_IRQHandler(void){}
void I2C1_IRQHandler(void){}
void I2C2_IRQHandler(void){}
void SPI1_IRQHandler(void){}
void SPI2_IRQHandler(void){}
void USART1_IRQHandler(void){}
void USART2_IRQHandler(void){}
void CEC_IRQHandler(void){}
void TIM17_IRQHandler(void){}
