/*
 * f_timer.h
 *
 *  Created on: Dec 13, 2023
 *      Author: Vy Nguyen
 */

#ifndef INC_F_TIMER_H_
#define INC_F_TIMER_H_

#define NUM_OF_TIMERS		2

extern int TIME_CYCLE;

extern int timer_flag[NUM_OF_TIMERS];

void setTimer(int index, int duration);
void clearTimer(int index);
void timerRun();


#endif /* INC_F_TIMER_H_ */
