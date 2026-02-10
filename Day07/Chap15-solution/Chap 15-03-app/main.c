#include<stdio.h>

int main(void) {
	int a = 10;
	double b = 3.5;

	void* vp;
	int* pi = (int*)vp;
	int* pa;
	double* pb;

	vp = &a;
	printf("a:%d\n", *(int*)vp);

	vp = &b;
	printf("b:%.1f\n", *(double*)vp);

	pa = &b; //이전에 봤던 내용;
	printf("pa:%.1f\n", *(double*)vp);

	return 0;

}