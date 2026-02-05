//포인터 이전 로컬변수, 변수스코프

#include<stdio.h>;
void func(void);
int add(int);
int x = 10;

int main(void) {
	int x = 30;//전역변수
	printf("main x =%d\n", x);
	func();
	printf("main x = %d\n", x);

	//여기까지 기본 변수 스코프

	//블록 스코프 int b는 지역변수이므로 if문밖에서 사용 불가능 하다 if문 내에서만 동작한다.
	int a = 1;
	if (a == 1) {
		int b = 2;
		printf("블록 내부 a=%d,b=%d\n",a,b);
		int y = 10;
		int res = add(y);
		printf("y=%d\n", res);

		return 0;
	}
	printf("블록 외부 : a=%d\n", a);// b는 스코프를 벗어났으므로 동작하지 않는다. compile error발생
	return 0;
}
int add(int x) {
	x = x + 100;
	return x;
}
void func(void){
	int x = 20;//지역변수 우선순위 높음

	printf("func x =%d\n ", 20);
	}