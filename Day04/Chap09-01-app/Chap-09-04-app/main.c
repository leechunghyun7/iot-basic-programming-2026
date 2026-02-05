#include<stdio.h>

int main(void) {
	int a;//일반변수
	int *pa;//포인터 변수

	//포인터 변수는 다른 변수의 주소를 대입하는 변수
	pa = &a;
	*pa = 100;

	printf("a의 값을 출력 : %d\n", a);
	printf("pa가 가르키고 있는 값:%d", *pa);

	//a의 주소
	printf("변수 a의 주소:%u\n",&a);
	printf("포인터변수 pa의 값 :%u\n", *pa);// pa는 주소를 담고*pa는 그 주소가 가르키는 값을 나타낸다

	return 0;
}