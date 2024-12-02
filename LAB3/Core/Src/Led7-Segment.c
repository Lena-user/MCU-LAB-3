/*
 * Led7-SEG_ment.c
 *
 *  Created on: Nov 5, 2024
 *      Author: dangk
 */

#include "Led7-Segment.h"

void display_Led7_Segment1(int number)
{
	switch (number) {
		case 0:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, SET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, SET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_0_GPIO_Port, LED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			break;
		default:
			break;
	}
}

void display_Led7_Segment2(int number)
{
	switch (number)
	{
			case 0:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
				break;
			case 1:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
				break;
			case 2:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				break;
			case 3:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				break;
			case 4:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				break;
			case 5:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				break;
			case 6:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				break;
			case 7:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
				break;
			case 8:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				break;
			case 9:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				break;
			default:
				break;
		}
}

void display_Led7_Segment(int number)
{
	number = number % 100;
	display_Led7_Segment2(number / 10);
	display_Led7_Segment1(number % 10);
}

