/*
 * Global.c
 *
 *  Created on: Nov 5, 2024
 *      Author: dangk
 */

#include "Global.h"

int status = INIT;
int modeFSM = NORMAL_MODE;
int scanMode = INIT;
int blinkyMode = INIT;

int durationRed = 5000;
int durationGreen = 3000;
int durationYellow = 2000;

int modifyRed = 0;
int modifyYellow = 0;
int modifyGreen = 0;

int ledBuffer[2];
int green1, red1, yellow1;
int green2, red2, yellow2;

void init_Led()
{
	red1 = red2 = modifyRed = durationRed / 1000;
	yellow1 = yellow2 = modifyYellow = durationYellow / 1000;
	green1 = green2 = modifyGreen = durationGreen / 1000;
	ledBuffer[0] = durationGreen / 1000;
	ledBuffer[1] = durationRed / 1000;
}

void update_Led_Traffic() {
	if (green1 > 1)
		ledBuffer[0] = --green1;
	else if (yellow1 > 0)
		ledBuffer[0] = yellow1--;
	else if (red1 > 0)
		ledBuffer[0] = red1--;
	else
	{
		ledBuffer[0] = green1 = durationGreen / 1000;
		red1 = durationRed / 1000;
		yellow1 = durationYellow / 1000;
	}

	if (red2 > 1)
		ledBuffer[1] = --red2;
	else if (green2 > 0)
		ledBuffer[1] = green2--;
	else if (yellow2 > 0)
		ledBuffer[1] = yellow2--;
	else
	{
		ledBuffer[1] = red2 = durationRed / 1000;
		yellow2 = durationYellow / 1000;
		green2 = durationGreen / 1000;
	}
}

void display_Led_Buffer(int index)
{
	display_Led7_Segment(ledBuffer[index % 2]);
}

void scan_Led()
{
	if (flagTimer3 == 1)
	{
		update_Led_Traffic();
		setTimer3(1000);
	}
	switch (scanMode)
	{
	case INIT:
		scanMode = Traffic_1;
		init_Led();
		display_Led_Buffer(0);
		setTimer2(500);
		break;
	case Traffic_1:
		HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, RESET);
		HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, SET);
		if (flagTimer2 == 1)
		{
			scanMode = Traffic_2;
			display_Led_Buffer(1);
			setTimer2(500);
		}
		break;
	case Traffic_2:
		HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, SET);
		HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, RESET);
		if (flagTimer2 == 1)
		{
			scanMode = Traffic_1;
			display_Led_Buffer(0);
			setTimer2(500);
		}
		break;
	default:
		break;
	}
}
