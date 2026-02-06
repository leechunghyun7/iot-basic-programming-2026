//포인터 크기


#include <stdio.h>

int main(void) {
	char ch;
	int in;
	double db;
	//선언 및 초기화
	char* pch = &ch;
	int* pin = &in;
	double* pdb = &db;

	//주소크기 출력
	//윈도우가 64비트 컴퓨터라고 해도, 예전 32비트 주소체계를 그대로 따라감
	//현재 윈도우의 주소체계는 8byte이다

	printf("char형 *변수의 주소 크기 %d\n", sizeof(&ch)); //char자체는 1바이트이지만 주소자체는 길이가 8바이트이기 때문에 8바이트가 된다
	printf("int형 *변수의 주소 크기 %d\n", sizeof(&in));
	printf("double형 *변수의 주소 크기 %d\n", sizeof(&db));

	//포인터의 크기>>변수의 주소를 담아야되므로 8바이트가 된다.
	printf("char형 * 가르키는 변수의 주소 크기 %d\n", sizeof(pch));
	printf("int형 * 가르키는 변수의 주소 크기 %d\n", sizeof(pin));
	printf("double형 * 가르키는 변수의 주소 크기 %d\n", sizeof(pdb));
	
	printf("char형 * 가르키는 변수의 주소 크기 %d\n", sizeof(*pch));
	printf("int형 * 가르키는 변수의 주소 크기 %d\n", sizeof(*pin));
	printf("double형 * 가르키는 변수의 주소 크기 %d\n", sizeof(*pdb));

	printf("char형 * 가르키는 변수의 주소 크기 %d\n", sizeof(ch));
	printf("int형 * 가르키는 변수의 주소 크기 %d\n", sizeof(in));
	printf("double형 * 가르키는 변수의 주소 크기 %d\n", sizeof(db));

	return 0;
}