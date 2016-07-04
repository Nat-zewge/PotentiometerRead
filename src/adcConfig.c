/*
 * adcConfig.c
 *
 *  Created on: 2 Jul 2016
 *      Author: natnael
 */
#include "adcConfig.h"

#include "stm32f4xx_hal.h"


ADC_InitTypeDef adc1;
ADC_HandleTypeDef adcHandle;

void adcInit(void){
  GPIO_InitTypeDef gpioInit;
  __GPIOC_CLK_ENABLE();
  __ADC1_CLK_ENABLE();

  gpioInit.Pin=GPIO_PIN_1;
  gpioInit.Mode=GPIO_MODE_ANALOG;
  gpioInit.Pull=GPIO_NOPULL;
  HAL_GPIO_Init(GPIOC,&gpioInit);
  HAL_NVIC_SetPriority(ADC_IRQn,0,0);
  HAL_NVIC_EnableIRQ(ADC_IRQn);





}



