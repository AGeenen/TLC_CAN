/**
  ******************************************************************************
  * @file    can.c
  * @author  Hamza Shehada
  * @version V1.0.2
  * @date    8-November-2016
  * @brief   CAN functions for transmitting and receiving frames
  *
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
  */

#include "can.h"
#include "counter.h"

#define LED_OFFSET 5

/* Global variables ---------------------------------------------------------*/
CanTxMsg TxMessage;
CanTxMsg TxRxMessage;
CanRxMsg RxMessage;

/**
  * @brief  Initializes the CAN and configure the GPIO for CAN
  * @param  None
  * @retval None
  */
void CAN_Config(void) {

	CAN_InitTypeDef 		CAN_InitStructure;
	CAN_FilterInitTypeDef   CAN_FilterInitStructure;
	NVIC_InitTypeDef  		NVIC_InitStructure;
	GPIO_InitTypeDef 		GPIO_InitStructure;

	/* Enable CAN1 clock */
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN1, ENABLE);

	/* CAN register init */
	CAN_DeInit(CAN1);

	/* Enable GPIOB clock */
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
	/* Connect PD1 to CAN1_Tx pin */
	GPIO_PinAFConfig(GPIOB, GPIO_PinSource9, GPIO_AF_CAN1);

	/* Connect PD0 to CAN1_Rx pin */
	GPIO_PinAFConfig(GPIOB, GPIO_PinSource8, GPIO_AF_CAN1);

	/* Configure CAN1_Rx(PD0) and CAN1_Tx(PD1) pins */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_9;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_UP;
	GPIO_Init(GPIOB, &GPIO_InitStructure);

  	NVIC_InitStructure.NVIC_IRQChannel = CAN1_RX0_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x0;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x0;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);

	/*Setup InitStructure*/
	CAN_InitStructure.CAN_Prescaler = 2;
	CAN_InitStructure.CAN_Mode	= CAN_Mode_Normal;
	CAN_InitStructure.CAN_SJW	= CAN_SJW_1tq;
	CAN_InitStructure.CAN_BS1	= CAN_BS1_6tq;
	CAN_InitStructure.CAN_BS2	= CAN_BS2_8tq;
	CAN_InitStructure.CAN_TTCM	= DISABLE;
	CAN_InitStructure.CAN_ABOM	= DISABLE;
	CAN_InitStructure.CAN_AWUM	= DISABLE;
	CAN_InitStructure.CAN_NART	= DISABLE;
	CAN_InitStructure.CAN_RFLM	= DISABLE;
	CAN_InitStructure.CAN_TXFP	= DISABLE;
	CAN_Init(CAN1, &CAN_InitStructure);

	/*Setup FilterStructure*/
	CAN_FilterInitStructure.CAN_FilterIdHigh		= 0x0000;
	CAN_FilterInitStructure.CAN_FilterIdLow			= 0x0000;
	CAN_FilterInitStructure.CAN_FilterMaskIdHigh		= 0x0000;
	CAN_FilterInitStructure.CAN_FilterMaskIdLow		= 0x0000;
	CAN_FilterInitStructure.CAN_FilterFIFOAssignment	= CAN_FIFO0;
	CAN_FilterInitStructure.CAN_FilterNumber		= 0;
	CAN_FilterInitStructure.CAN_FilterMode			= CAN_FilterMode_IdMask;
	CAN_FilterInitStructure.CAN_FilterScale			= CAN_FilterScale_32bit;
	CAN_FilterInitStructure.CAN_FilterActivation		= ENABLE;
	CAN_FilterInit(&CAN_FilterInitStructure);

	/* Enable FIFO 0 message pending Interrupt */
	CAN_ITConfig(CAN1, CAN_IT_FMP0, ENABLE);
}

/**
  * @brief  Delay
  * @param  None
  * @retval None
  */
void Delay(void) // Make a bigger delay
{
	uint16_t nTime = 0x0000;

	for(nTime = 0; nTime < 6000000; nTime++)
	{
	}
}
/**
  * @brief  Initializes the Rx Message.
  * @param  RxMessage: pointer to the message to initialize
  * @retval None
  */
void Init_RxMes(CanRxMsg *RxMessage)
{
	uint8_t i = 0;

	RxMessage->StdId = 0x00;
	RxMessage->ExtId = 0x00;
	RxMessage->IDE = CAN_ID_STD;
	RxMessage->DLC = 8;
	RxMessage->FMI = 0;
	for (i = 0;i < 8;i++)
	{
		RxMessage->Data[i] = 0x00;
	}
}

/**
  * @brief  Transmit CAN frame
  * @param  None
  * @retval None
  */
void CAN_TxMessage(uint8_t * data, uint8_t length)
{
	uint8_t uCounter = 0;

	/* Transmit Structure preparation */
	TxMessage.StdId = 0x321;
	TxMessage.ExtId = 0x01;
	TxMessage.IDE = CAN_ID_STD; //0
	TxMessage.RTR = CAN_RTR_DATA;//2
	TxMessage.DLC = length; // Frame length between0 and 8	
	
	
	while(uCounter < length)
	{	
		TxMessage.Data[uCounter] = data[uCounter];
		uCounter ++;
	}
	
	CAN_Transmit(CAN1, &TxMessage);
}

/**
  * @brief  Transmit the received CAN frame
  * @param  CanRxMsg RxMessage
  * @retval None
  */
void CAN_TxRxMessage(CanRxMsg* RxMessage)
{
	uint8_t uCounterTx = 0;

	/* Transmit Received message Structure preparation */
	TxRxMessage.StdId = RxMessage->StdId;
	TxRxMessage.ExtId = RxMessage->ExtId;
	TxRxMessage.IDE   = RxMessage->IDE;
	TxRxMessage.RTR   = CAN_RTR_DATA;
	TxRxMessage.DLC   = RxMessage->DLC; /* Frame length between0 and 8 */
	
	while(uCounterTx < RxMessage->DLC) 
	{	
		TxRxMessage.Data[uCounterTx] = RxMessage->Data[uCounterTx];
		uCounterTx ++;
	}
	
	CAN_Transmit(CAN1, &TxRxMessage);
}

/**
  * @brief  Interrupt handler for receiving CAN frame
  * @param  None
  * @retval None
  */
void CAN1_RX0_IRQHandler(void) {

 	Init_RxMes(&RxMessage);

 	/*Check if interrupt was because data is received*/
	if(CAN_GetITStatus(CAN1,CAN_IT_FMP0)) {
		/*Receiving*/
		CAN_Receive(CAN1,CAN_FIFO0,&RxMessage);
		counter_update_leds(RxMessage.Data[0]);

		CAN_ClearITPendingBit(CAN1,CAN_IT_FMP0);

    }
}
