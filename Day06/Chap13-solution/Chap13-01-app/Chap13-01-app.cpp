//지역변수,전역변수,정적변수

#include<stdio.h>

void assign(void); 

int a;

int main(void) {

	int a = 10;
	int b = 20;

	assign();
	printf("main 함수 a:%d\n", a);

	printf("교환전 %d, %d\n", a, b);
	{
		int a = 0, b = 0, temp;//블록내의 지역변수가 우선적으로 쓰인다 그래서 이런일 벌어짐
		temp = a;
		a = b;
		b = temp;//안에서 지지고 볶고 밖에는 전혀 영향을 미치지 않음
	}
	printf("교환후%d,%d\n", a, b);

	return 0;

}

void assign(void) {
	int a;

	a = 100;
	printf("assign 함수 a:%d\n", a);
}