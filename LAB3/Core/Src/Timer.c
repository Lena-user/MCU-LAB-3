/*
 * Timer.c
 *
 *  Created on: Oct 22, 2024
 *      Author: dangk
 */

#include "Timer.h"

int counterTimer1 = 0;
int flagTimer1 = 0;

int counterTimer2 = 0;
int flagTimer2 = 0;

int counterTimer3 = 0;
int flagTimer3 = 0;

int counterTimer4 = 0;
int flagTimer4 = 0;

int cycleTimer = 10;

void setTimer1(int duration)
{
	counterTimer1 = duration / cycleTimer;
	flagTimer1 = 0;
}

void setTimer2(int duration)
{
	counterTimer2 = duration / cycleTimer;
	flagTimer2 = 0;
}

void setTimer3(int duration)
{
	counterTimer3 = duration / cycleTimer;
	flagTimer3 = 0;
}

void setTimer4(int duration)
{
	counterTimer4 = duration / cycleTimer;
	flagTimer4 = 0;
}

void TimerRun()
{
	counterTimer1--;
	counterTimer2--;
	counterTimer3--;
	counterTimer4--;
	if (counterTimer1 < 0)
		flagTimer1 = 1;
	if (counterTimer2 < 0)
		flagTimer2 = 1;
	if (counterTimer3 < 0)
		flagTimer3 = 1;
	if (counterTimer4 < 0)
		flagTimer4 = 1;
}
