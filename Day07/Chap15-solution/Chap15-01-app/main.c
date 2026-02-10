//함수 포인터
//함수도 변수처럼 주소를 가짐 포인터로 활용가능
//콜백 대리자(이벤트)함수 처리할 때 필요한 기능

#include <stdio.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main (void){
int (*fp)(int, int);//함수 포인터 선언! 매개변수의 타입과 갯수 일치
int res;

fp = sum;
res = fp(10, 20);
printf("sum 결과:%d\n", res);

fp = sub;
res = fp(20, 10);
printf("뻴셈 결과 : %d\n", res);

fp = mul;
res = fp(20, 10);
printf("곱셈 결과 : %d\n", res);

fp = div;
res = fp(20, 10);
printf("나눌셈 결과 : %d\n", res);

	return 0;
}


int mul(int x, int y) {
	return x * y;
}


int div(int x, int y) {
	return x / y;
}


int sum(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}