

#include "main.h"

UART_HandleTypeDef huart2;

const int TIMER_CYCLE = 10;

int timer1_flag = 0;
int timer1_counter = 0;

int timer2_flag = 0;
int timer2_counter = 0;

void setTimer1(uint32_t duration){
	timer1_counter = duration/TIMER_CYCLE;
	timer1_flag = 0;
}

void setTimer2(uint32_t duration){
	timer2_counter = duration/TIMER_CYCLE;
	timer2_flag = 0;
}

void timerRun(){
	if(timer1_counter >0){
		timer1_counter--;
		if(timer1_counter <=0){
			timer1_flag =1;
		}
	}
	if(timer2_counter >0){
			timer2_counter--;
			if(timer2_counter <=0){
				timer2_flag =1;
			}
		}
}

void reset_timer1()
{
	timer1_counter = 0;
	timer1_flag = 0;
}




