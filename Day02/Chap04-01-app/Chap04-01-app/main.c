#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	//산술연산자
	int x, y;
	int sum, sub, mul, mod;
	double div;
	int inv;

	x = 6;
	y = 3;
	sum = x + y;
	sub = x - y;
	mul = x * y;
	div = (double)x / y; // 나눗셈, 실수로 형변환
	mod = x % y;
	inv = -x;

	printf("x = %d, y = %d\n", x, y);
	printf("x+y = %d\n",sum);
	printf("x-y = %d\n",sub);
	printf("x X y = %d\n",mul);
	printf("x ÷ y = %lf\n",div);
	printf("x mod = %d", mod);
	printf("inverse x = %d",inv);

	int a = 10;
	int b = 20;
	char c = 'c';

	//증감연산자
	//++a; a에 1을 증가시켜라
	//a++;
	//c++;
	//감소연산자
	// 증감 연산에 따라 처리되는 순서가 다르다
	--b;
	//b--;
	printf("a=%d\n", a);
	printf("b=%d\n", b);

	printf("a=%d\n", a++);//이 한줄을 끝낸 다음에 a값을 증가시켜라 
	printf("a=%d\n", a);

	//관계 연산자
	int d = 10;
	int res;

	res = (a > b);//false=>0,true=>1
	printf("a>b이냐?%d\n", res);
	printf("a>=:%d\n", (a>=b));
	res = (a < b);
	printf("a>=:%d\n", (a < b));
	res = (a == b); // = 대입연산자, == 동치비교연산자
	res = (a != b);//1
	// 논리 연산자
	// &&(AND), ||(OR), (!)NOT
	

	res = (a > b) && (b < 20);
	printf("(a>10)&&(b < 20):%d\n",res);
	res = (a <= 10) || (b > 10);
	printf("(a<10)||(b > 100):%d\n",res);

	//형 변환 연산자
	// int, short, char, long, float, double....
	printf("%d\n", (int)3.14);
	printf("%f\n", (float)3);
	// 형 변환 방법

	char chval = 65;
	int ival = 0;
	ival = chval;
	printf("%d\n",ival);
	//sizeof 연산자
	int g = 25;
	float h = 3.1f;

	printf("int 형 변수 크기 %lld\n", sizeof(g));
	printf("int 형 변수 크기 %lld\n", sizeof(int));
	printf("int 형 변수 크기 %lld\n", sizeof(h));
	printf("int 형 변수 크기 %lld\n", sizeof(1.5+3.4));

	//복합대입연산자
	printf("%d\n", a);
	a += 5;// 변수 a에 5를 더해서 다시 a에 저장해라

	res = 2;
	a = 10, b = 20;
	int C = 30;

	res*=b + 10;
	printf("% d\n", res);

	// 콤마 연산자
	// 한번에 여러개 수식을 차례로 나열해야 할 때 사용
	res = (++a, ++b);
	printf("% d, % d, % d\n", a, b, res);
	res = (++a, ++b, ++c);
	printf("% d, % d, % d, %d\n", a, b, C, res);

	//삼항 연산자 (조건)? 참의 결과:거짓결과;
	int i = 30, j = 25;
	printf("작은 값은:%d\n", (i < j) ? i : j);//i가 j 보다 작으면 i 내보내고 j가 크면 j
	//뒤에 if 문과 매치

	//비트 연산자, 2 진수 변환 후 0은 false 1은 true로 감안하고
	a = 10;// 00000000 00000000 00000000 00001010;
	b = 12;// 00000000 00000000 00000000 00001100;
	&(and),|or,^(xor),~(not),<< >>(shift)
	printf("a&b:  %d\n", (a&b));
	printf("a|b:  %d\n", (a|b));

	return 0;
}
