//이중 포인터

#include <stdio.h>

int main(void) {
	int a = 10; //실제값
	int* pi; //포인터
	int** ppi; //이중포인터

	pi = &a;
	ppi = &pi;//이중포인터의 단일포인터의 주소할당
	printf("--------------------------\n");
	        //변수 스페이스 6 변수값 스페이스 7...
	printf("변수       변수값         &연산        *연산       **연산\n");
	printf("--------------------------\n");

	printf("a%12d%12u\n", a, &a);  //변수 a의 값,a의 주소만 출력
	printf("pi%12u%12u%12d\n", pi, &pi, *pi);//pi(포인터변수)
	printf("ppi%12u%12u%12u%12d\n", ppi, &ppi, *ppi, **ppi);//ppi이중포인터

	return 0;
}