/*
 * Button.h
 *
 *  Created on: Oct 22, 2024
 *      Author: dangk
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET
#define SELECT_BUTTON 0
#define MODIFY_BUTTON 1
#define SET_BUTTON 2

int isSelectMode();
int isModifyMode();
int isSetMode();

void getKeyInput();

#endif /* INC_BUTTON_H_ */
