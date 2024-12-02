/*
 * FSM_Autotmatic.c
 *
 *  Created on: Nov 5, 2024
 *      Author: dangk
 */

#include "FSM_Automatic.h"

void FSM_Automatic_run()
{
	switch(status)
	{
	case INIT:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
		status = AUTO_TRAFFIC_1_GREEN;
		setTimer1(durationGreen);
		break;
	case AUTO_TRAFFIC_1_GREEN:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
		// HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
		// HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
		switch(blinkyMode)
		{
		case INIT:
			blinkyMode = Blinky_Led_1;
			setTimer4(500);
			break;
		case Blinky_Led_1:
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
			if (flagTimer4 == 1)
			{
				blinkyMode = Blinky_Led_2;
				setTimer4(500);
			}
			break;
		case Blinky_Led_2:
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
			if (flagTimer4 == 1)
			{
				blinkyMode = Blinky_Led_1;
				setTimer4(500);
			}
			break;
		}
		if (flagTimer1 == 1)
		{
			blinkyMode = INIT;
			setTimer4(500);
			status = AUTO_TRAFFIC_1_YELLOW;
			setTimer1(durationYellow);
		}
		break;
	case AUTO_TRAFFIC_1_YELLOW:
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
		switch(blinkyMode)
		{
		case INIT:
			blinkyMode = Blinky_Led_1;
			break;
		case Blinky_Led_1:
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
			if (flagTimer4 == 1)
			{
				blinkyMode = Blinky_Led_2;
				setTimer4(500);
			}
			break;
		case Blinky_Led_2:
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
			if (flagTimer4 == 1)
			{
				blinkyMode = Blinky_Led_1;
				setTimer4(500);
			}
			break;
		}
		if (flagTimer1 == 1)
		{
			blinkyMode = INIT;
			setTimer4(500);
			status = AUTO_TRAFFIC_2_GREEN;
			setTimer1(durationGreen);
		}
		break;
	case AUTO_TRAFFIC_2_GREEN:
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
		switch(blinkyMode)
		{
		case INIT:
			blinkyMode = Blinky_Led_1;
			break;
		case Blinky_Led_1:
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
			if (flagTimer4 == 1)
			{
				blinkyMode = Blinky_Led_2;
				setTimer4(500);
			}
			break;
		case Blinky_Led_2:
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
			if (flagTimer4 == 1)
			{
				blinkyMode = Blinky_Led_1;
				setTimer4(500);
			}
			break;
		}
		if (flagTimer1 == 1)
		{
			blinkyMode = INIT;
			setTimer4(500);
			status = AUTO_TRAFFIC_2_YELLOW;
			setTimer1(durationYellow);
		}
		break;
	case AUTO_TRAFFIC_2_YELLOW:
		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
		switch(blinkyMode)
		{
		case INIT:
			blinkyMode = Blinky_Led_1;
			break;
		case Blinky_Led_1:
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
			if (flagTimer4 == 1)
			{
				blinkyMode = Blinky_Led_2;
				setTimer4(500);
			}
			break;
		case Blinky_Led_2:
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
			if (flagTimer4 == 1)
			{
				blinkyMode = Blinky_Led_1;
				setTimer4(500);
			}
			break;
		}
		if (flagTimer1 == 1)
		{
			blinkyMode = INIT;
			setTimer4(500);
			status = AUTO_TRAFFIC_1_GREEN;
			setTimer1(durationGreen);
		}
		break;
	default:
		break;
	}

	if (isSelectMode() == 1)
	{
		modeFSM = (modeFSM + 1) % 4;
	}
}
