/*
 * counter.c
 *
 *  Created on: Jan 5, 2017
 *      Author: Guest42
 */
#include "stm32f2xx.h"
#include "stm32f2xx_can.h"
#include "stm32f2xx_exti.h"
#include "stm32f2xx_syscfg.h"
#include "misc.h"
#include "can.h"
#include "counter.h"

#define MAX_COUNT_VAL	16

#define GPIO_MODE_IN        0x00
#define GPIO_MODE_OUT       0x01
#define GPIO_MODE_AF        0x02
#define GPIO_MODE_AN        0x03
#define GPIO_OTYPE_PP       0x00
#define GPIO_OTYPE_OD       0x01
#define GPIO_PUPD_NOPULL    0x00
#define GPIO_PUPD_UP        0x01
#define GPIO_PUPD_DOWN      0x02
#define GPIO_SPEED_2MHZ     0x00
#define GPIO_SPEED_25MHZ    0x01
#define GPIO_SPEED_50MHZ    0x02
#define GPIO_SPEED_100MHZ   0x03

#define GPIO_MODE_SET(pin,x)            (((3)&(x))<<(2*pin))
#define GPIO_MODE_RESET_MASK(pin)       (~(3<<(pin*2)))

#define GPIO_OTYPE_RESET_MASK(pin)      (~((1)<<(pin)))
#define GPIO_OTYPE_SET_OD(pin)          ((1)<<(pin))
#define GPIO_OTYPE_SET_PP(pin)          (GPIO_OTYPE_RESET_MASK(pin))

#define GPIO_OSPEEDR_SET(pin,x)         (((3)&(x))<<(2*pin))
#define GPIO_OSPEEDR_RESET_MASK(pin)    (~(3<<(pin*2)))

#define GPIO_PUPDR_SET(pin,x)           (((3)&(x))<<(2*pin))
#define GPIO_PUPDR_RESET_MASK(pin)      (~(3<<(pin*2)))

uint8_t counter = 0;

void GPIO_Init2(GPIO_TypeDef *GPIOx, u8 pin, u8 mode, u8 otype, u8 pupd, u8 speed)
{
  GPIOx->MODER &= GPIO_MODE_RESET_MASK(pin);
  GPIOx->MODER |= GPIO_MODE_SET(pin,mode);

  GPIOx->OSPEEDR &= GPIO_OSPEEDR_RESET_MASK(pin);
  GPIOx->OSPEEDR |= GPIO_OSPEEDR_SET(pin,speed);

  GPIOx->OTYPER &= GPIO_OTYPE_RESET_MASK(pin);
  if (otype != GPIO_OTYPE_PP) {
    GPIOx->OTYPER |= GPIO_OTYPE_SET_OD(pin);
  }

  GPIOx->PUPDR &= GPIO_PUPDR_RESET_MASK(pin);
  GPIOx->PUPDR |= GPIO_PUPDR_SET(pin,pupd);
}

void counter_init (void)   {
  RCC->AHB1ENR 	 |= RCC_AHB1ENR_GPIOFEN;

  GPIO_Init2(GPIOF, 6, GPIO_MODE_OUT, GPIO_OTYPE_PP, GPIO_PUPD_UP, GPIO_SPEED_50MHZ);
  GPIO_Init2(GPIOF, 7, GPIO_MODE_OUT, GPIO_OTYPE_PP, GPIO_PUPD_UP, GPIO_SPEED_50MHZ);
  GPIO_Init2(GPIOF, 8, GPIO_MODE_OUT, GPIO_OTYPE_PP, GPIO_PUPD_UP, GPIO_SPEED_50MHZ);
  GPIO_Init2(GPIOF, 9, GPIO_MODE_OUT, GPIO_OTYPE_PP, GPIO_PUPD_UP, GPIO_SPEED_50MHZ);

  GPIOF->BSRRH = (1 << 6) | (1 << 7) | (1 << 8) | (1 << 9);
}


void counter_count_and_tx (void) {
	uint8_t tx_data[8] = {0, 0, 0, 0, 0, 0, 0, 0};

	counter++;

	tx_data[0] = counter;
	CAN_TxMessage(tx_data, 1);
}


void counter_update_leds (uint8_t count) {
	uint8_t val = count % MAX_COUNT_VAL;
	int i = 0;

	GPIOF->BSRRH = (1 << 6) | (1 << 7) | (1 << 8) | (1 << 9);

	for (i = 0; i < 4; i++) {
		if (val & (0x01 << i)) {
			GPIOF->BSRRL = 1 << (6 + i);
		}
	}
}
