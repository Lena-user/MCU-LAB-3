/*
 * Button.c
 *
 *  Created on: Oct 22, 2024
 *      Author: dangk
 */

#include "Button.h"

int selectFlag = 0;
int modifyFlag = 0;
int setFlag = 0;

int keyReg0[3] = {NORMAL_STATE};
int keyReg1[3] = {NORMAL_STATE};
int keyReg2[3] = {NORMAL_STATE};
int keyReg3[3] = {NORMAL_STATE};
int keyPressTimer = 50;

int isSelectMode()
{
	if (selectFlag == 1)
	{
		selectFlag = 0;
		return 1;
	}
	return 0;
}

int isModifyMode()
{
	if (modifyFlag == 1)
	{
		modifyFlag = 0;
		return 1;
	}
	return 0;
}

int isSetMode()
{
	if (setFlag == 1)
	{
		setFlag = 0;
		return 1;
	}
	return 0;
}


void getKeyInput()
{
	for (int i = 0; i < 3; i++)
	{
		keyReg0[i] = keyReg1[i];
		keyReg1[i] = keyReg2[i];
		switch(i)
		{
		case SELECT_BUTTON:
			keyReg2[i] = HAL_GPIO_ReadPin(SELECT_BUTTON_GPIO_Port, SELECT_BUTTON_Pin);
			break;
		case MODIFY_BUTTON:
			keyReg2[i] = HAL_GPIO_ReadPin(MODIFY_BUTTON_GPIO_Port, MODIFY_BUTTON_Pin);
			break;
		case SET_BUTTON:
			keyReg2[i] = HAL_GPIO_ReadPin(SET_BUTTON_GPIO_Port, SET_BUTTON_Pin);
			break;
		default:
			break;
		}
		if ((keyReg0[i] == keyReg1[i]) && (keyReg1[i] == keyReg2[i]))
		{
			if (keyReg3[i] != keyReg2[i])
			{
				keyReg3[i] = keyReg2[i];
				if (keyReg2[i] == PRESSED_STATE)
				{
					//TODO
					switch(i)
					{
					case SELECT_BUTTON:
						selectFlag = 1;
						break;
					case MODIFY_BUTTON:
						modifyFlag = 1;
						break;
					case SET_BUTTON:
						setFlag = 1;
						break;
					default:
						break;
					}
					keyPressTimer = 50;
				}
			}
			else
			{
				keyPressTimer--;
				if (keyPressTimer <= 0)
				{
					//TODO
					keyReg3[i] = NORMAL_STATE;
					keyPressTimer = 50;
				}
			}
		}
	}
}
