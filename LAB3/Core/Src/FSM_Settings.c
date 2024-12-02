/*
 * FSM_Settings.c
 *
 *  Created on: Nov 5, 2024
 *      Author: dangk
 */

#include "FSM_Settings.h"
#include "FSM_Automatic.h"

void FSM_Settings_run()
{
	switch (modeFSM) {
		case NORMAL_MODE:
			FSM_Automatic_run();
			scan_Led();
			if (isSelectMode() == 1)
			{
				setTimer2(500);
				modeFSM = (modeFSM + 1) % 4;
			}
			break;
		case MODIFY_RED:
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
			HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, RESET);
			HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, RESET);
			if (flagTimer2 == 1)
			{
				HAL_GPIO_TogglePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin);
				HAL_GPIO_TogglePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin);
				setTimer2(500);
			}
			display_Led7_Segment(modifyRed);
			if (isModifyMode() == 1)
			{
				modifyRed = (modifyRed + 1) % 100;
			}
			if (isSetMode() == 1)
			{
				durationRed = modifyRed * 1000;
				setTimer2(500);
				modeFSM = (modeFSM + 1) % 4;
			}
			if (isSelectMode() == 1)
			{
				setTimer2(500);
				modeFSM = (modeFSM + 1) % 4;
			}
			break;
		case MODIFY_YELLOW:
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
			if (flagTimer2 == 1)
			{
				HAL_GPIO_TogglePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin);
				HAL_GPIO_TogglePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin);
				setTimer2(500);
			}
			display_Led7_Segment(modifyYellow);
			modifyGreen = modifyRed - modifyYellow;
			// durationGreen = modifyGreen * 1000;
			if (isModifyMode() == 1)
			{
				if (modifyGreen >= 1)
					modifyYellow = (modifyYellow + 1) % 100;
			}
			if (isSetMode() == 1)
			{
				durationYellow = modifyYellow * 1000;
				durationGreen = modifyGreen * 1000;

				setTimer2(500);
				modeFSM = (modeFSM + 1) % 4;
			}
			if (isSelectMode() == 1)
			{
				setTimer2(500);
				modeFSM = (modeFSM + 1) % 4;
			}
			break;
		case MODIFY_GREEN:
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
			if (flagTimer2 == 1)
			{
				HAL_GPIO_TogglePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin);
				HAL_GPIO_TogglePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin);
				setTimer2(500);
			}
			display_Led7_Segment(modifyGreen);
			modifyYellow = modifyRed - modifyGreen;
			// durationYellow = modifyYellow * 1000;
			if (isModifyMode() == 1)
			{
				if (modifyYellow > 1)
					modifyGreen = (modifyGreen + 1) % 100;
			}
			if (isSetMode() == 1)
			{
				durationGreen = modifyGreen * 1000;

				status = INIT;
				modeFSM = (modeFSM + 1) % 4;
				scanMode = INIT;
				setTimer3(1000);
			}
			if (isSelectMode() == 1)
			{
				status = INIT;
				scanMode = INIT;
				blinkyMode = INIT;
				setTimer3(1000);
				setTimer4(500);
				modeFSM = (modeFSM + 1) % 4;
			}
			break;
		default:
			break;
	}
}
