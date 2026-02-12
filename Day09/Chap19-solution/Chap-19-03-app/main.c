// main 소스코드

#include <stdio.h>

int input_data(void);
double average(void);
void print_data(double);

int count = 0;
static int total = 0;//정적/ 소스코드가 실행되는 동ㅇ나 끝까지 살아남는 변수

int main(void) {
	double avg;

	total = input_data();//main.c에 없음
	avg = average();//main.c에 없음
	print_data(avg);//main.c에 존재
	return 0;
}

void print_data(double avg) {

}