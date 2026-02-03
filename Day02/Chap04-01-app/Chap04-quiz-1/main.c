#include<stdio.h>
int main(void)
{
	double seat = 70;
	double audience = 65;
	float rate = (audience/ seat)*100;
	printf("입장률: %.1f\n", rate);

}