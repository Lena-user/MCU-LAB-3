/*
 * global.h
 *
 *  Created on: Nov 5, 2024
 *      Author: dangk
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "Button.h"
#include "Timer.h"
#include "Led7-Segment.h"

#define NORMAL_MODE 0
#define MODIFY_RED 1
#define MODIFY_YELLOW 2
#define MODIFY_GREEN 3

#define INIT 10

#define AUTO_TRAFFIC_1_GREEN 11
#define AUTO_TRAFFIC_1_YELLOW 12

#define AUTO_TRAFFIC_2_GREEN 13
#define AUTO_TRAFFIC_2_YELLOW 14

#define Traffic_1 1000
#define Traffic_2 2000

#define Blinky_Led_1 100
#define Blinky_Led_2 200

extern int status;
extern int modeFSM;
extern int scanMode;
extern int blinkyMode;

extern int durationRed;
extern int durationGreen;
extern int durationYellow;

extern int modifyRed;
extern int modifyYellow;
extern int modifyGreen;

void init_Led();
void update_Led_Traffic();
void scan_Led();
#endif /* INC_GLOBAL_H_ */
