/*
 * Timer.h
 *
 *  Created on: Oct 22, 2024
 *      Author: dangk
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int flagTimer1;
extern int flagTimer2;
extern int flagTimer3;
extern int flagTimer4;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);
void TimerRun();

#endif /* INC_TIMER_H_ */
