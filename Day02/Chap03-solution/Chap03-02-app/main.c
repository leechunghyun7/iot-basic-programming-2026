#define _CRT_SECURE_NO_WARNINGS//오래된 함수를 쓸 때 오류를 안 일으키도록 하는 전처리 함수
#include<stdio.h>
#include<float.h> //실수형 표현을 위한 라이브러리
#include<string.h> //문자열을 표현하기 위한 라이브러리
int main(void) {
printf("변수 float, %zu byte,최소%e\n", sizeof(float), FLT_MIN, FLT_MAX);
printf("변수 float, %zu byte,최소%e\n", sizeof(float), FLT_MIN, FLT_MAX);

//문자를 표현할 때는 ''
//근데 문자열을 표현할 때는 ""
char fruit[20] = "strawberry";

printf("과일 이름 : %s", fruit);

//fruit = "banana"; 문자열에서 대입은 불가
strcpy(fruit, "banana");
printf("변경 과일 이름 : %s", fruit);

//const 변하지 않는 값을 지정
const double tax_rate = 0.12;//세율 이거를 쓰는 순간 tax_rate의 값을 바꿀 수 없음
const double pi = 3.141592;
int income = 5000;
double tax = income * tax_rate;
printf("세금은 %d원\n", tax);
int age;// unsinged char(최댓값 255) 가 가장 적합

/*
*변수명 지정방식
*알파벳 A_Z,a-z,0~9,_까지만 사용가능*/
*숫자로 시작할 수 없음
* 대소문자 구별
* 예약어는 변수명으로 사용 불가
*
* 의미있는 단어들의 조합으로 변수명 선언할 것
* /
char[50] full name="Hugo MG sung";
int age = 50;
char address[100] = "부산시 남구 용호동 356";
char bood_type = 'B';
float height = 'B'
float height = 178.5f;
int non stop
}