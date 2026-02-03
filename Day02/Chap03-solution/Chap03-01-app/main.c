#include <stdio.h> //표준 입출력 헤더 파일 포함
#include <limits.h>

int x;
void plusnumber(int** x) {
	*x = *x + 1; 
}


int main(void) {
	int a;// 정수형 변수 a 선언
	int b, c;// 정수형 변수 b, c 선언
	float f;// 실수형 변수 f 선언
	double d;// 더 정밀한 소수점 있는 숫자 데이터
	char ch;// 문자형 변수 ch 선언

	//변수에 값 대입

	//assignment 왼쪽 변수에 오른쪽 값을 대입

	a = 10;//정수 10을 변수 a에 대입
	b = a; // a가 가진 10을 b에 대입
	c = a + 20;

	c = 3.145;

	f = 3.14159;
	d = 3.1415926538;
	ch = 'A';

	printf("변수 a의 값 %d\n", a);
	printf("변수 b의 값 %d\n", b);
	printf("변수 c의 값 %d\n", c);
	printf("변수 f의 값 %f\n", f); // 빨간색밑줄은 무조건 오류, 녹색 밑줄은 경고(!) 실행은 가능하다
	printf("변수 d의 값 %f\n", d);
	printf("변수 ch의 값 %c\n", ch);
	printf("변수 ch의 값 %c\n", 97);


	int* p;
	int array[5] = { 1,2,3,4,5 };
	p = array + 3;
	plusnumber(&p);
	printf("다음값은 %d\n", *p);

	//ASCII - 영문자, 특수문자(+,-,etc)등 숫자값으로 1:1 매칭되어 있음
	// https://ko.wikipedia.org/wiki/ASCII



// 정수형
// CHAR : 크기 1byte -> 8bit 00000000-11111111 -> 00-FF (0~255까지 표현) 최대크기 255
// short : 2bytes
// int (기본) : 4bytes
// long : 4bytes
// long long : 8bytes

// unsigned 양수로만 표현하는 방법
	printf("변수 char 사이즈, %zu byte,최소 %d, 최대 %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("변수 char 사이즈, %zu byte,최소 %d, 최대 %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("변수 char 사이즈, %zu byte,최소 %d, 최대 %d\n", sizeof(long long), SHRT_MIN, CHAR_MAX);

	//unsigned 양수로만 표현하는 방법
	//최소값이 0
	printf("변수 unsigned char, %zu byte, 최소 %d, 최대 %d\n", sizeof(unsigned char), 0, UCHAR_MAX);
	printf("변수 unsigned short, %zu byte, 최소 %d, 최대 %d\n", sizeof(unsigned char), 0, USHRT_MAX);
	printf("변수 unsigned int, %zu byte, 최소 %d, 최대 %u\n", sizeof(unsigned int), 0, UINT_MAX);
	printf("변수 unsigned long, %zu byte, 최소 %d, 최대 %u\n", sizeof(unsigned int), 0, ULONG_MAX);
	printf("변수 unsigned long long, %zu byte, 최소 %d, 최대 %lld\n", sizeof(unsigned int), 0, ULLONG_MAX);


	printf("변수 float, %zu byte, 최소 %d, 최대 %d\n",sizeof(float),FLT_MIN,)




	return 0;
}