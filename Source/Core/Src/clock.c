/*
 * clock.c
 *
 *  Created on: Oct 2, 2024
 *      Author: Hoang Vy
 */
#include "clock.h"
#include "global.h"

void clock(){
	second++;
	if(second == 60)
	{
		minute++;
		second = 0;
	}

	if(minute == 60)
	{
		hour++;
		minute = 0;
	}

	if(hour == 24) hour = 0;
}

