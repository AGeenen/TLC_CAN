/**
  ******************************************************************************
  * @file    can.h
  * @author  Toon Heyrman
  * @version V1.0.0
  * @date    8-November-2016
  * @brief   
  *
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
  */

#ifndef __CAN_H
#define __CAN_H

#include "misc.h"
#include <stdio.h>
#include <stdlib.h>

void CAN_Config(void);
void CAN_RxMessage(void);
void CAN_TxMessage(uint8_t * data, uint8_t length);
void CAN1_RX0_IRQHandler(void);
void Init_RxMes(CanRxMsg *RxMessage);
void Delay(void);

#endif
