#include<stdio.h>

int main(void)
{
	int hour, min, sec;
	double time = 3.76;
	hour = (int)time;
	min = (time - (int)time;) * 60;
	sec = (double(min) - (int)min;) * 60;
	printf("3.76시간은 %d시간 %d분  %d초입니다\n", hour, min, sec);
}