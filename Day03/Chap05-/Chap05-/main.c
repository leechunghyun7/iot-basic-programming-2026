//반복문

#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS

int main() {
	/*while 문
	/*while (조건){// 조건이 참인동안
	*실행문// // 반복
	*}//
	*///
	//while 조건괄호 뒤 필수!
	int a = 1;//초기화 중요!

	while (a < 10) {
		a = a * 2;
	}
	printf("a:%d\n", a);
	a = 0;
	while (a > 0) {
		printf("while 실행\n");
		a--;
	}
	printf("while문 종료\n");
		a = 1;
	do {
		a *= 2;
	} while (a < 10); 
		printf("a:%d\n", a);
		a = 0;
	do{
		printf("do while실행\n"); //무조건 한번 실행
		a--;
	} while (a > 0);
	printf("do while종료\n");
	return 0;
}
