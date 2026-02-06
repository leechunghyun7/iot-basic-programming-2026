//포인터 대입 규칙
//포인터를 사용할 때 주의 할 점
//포인터는 가리키는 변수의 형태가 같아야 한다!!

#include <stdio.h>

int main(void) {
	double a = 10;//정수 선언 및 초기화
	int* p = &a; //정수형 포인터 선언 및 초기화
	double* pd; //실수형 포인터 선언

	//pd = p;
	pd = &a;//double형 포인터에 int 형 주소를 넣어라.
	//포인터형 변수랑 일반변수의 타입을 일치 시켜야함 왜냐면 8바이트로 읽으므로 앞에 4바이트는 10인데 나머지 4바이트는 쓰레기 값

	printf("%d\n", *p);
	printf("%.1f\n", *pd);

	//형변환을 사용한 포인터 대입은 가능하다
	double c = 3.14;
	int* pi;

	pd = &c;
	printf("%lf\n", *pd);
	pi = (int*)pd;

	printf("%1f\n", *pi);

	return 0;
}
