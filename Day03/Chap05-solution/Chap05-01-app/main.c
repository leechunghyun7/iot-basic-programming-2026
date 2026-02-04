
// if(조건이 참 {
//참조건 로직수앻ㅇ}
//else{
	//거짓조건 로직수행

#include <stdio.h> //표준 입출력 헤더파일

int main() {
	int a = 10, b = 0;
	//2개의 조건
	if (a > 10) {
		b = a;
	}
	else {
		b = 1000;
	}


	//3개의 조건
	if (a > 0) {
		b = 1;
	}
	else if (a == 0) {
		b = 2;
	}
	else {
		b = 3;
	}
	printf("a:%d,b:%d\n",a,b); //화면에 문자열 출력

	int age = 20;
	int gender = 1;// 1은 남자 ,0은 여자
	if (age > 12) {
		if (gender == 1) {
			printf("'남탕,성인입니다. 20000원'");
		}
		else {
			printf("'여탕,성인입니다. 20000원'");

		}
	}
	else {
		if (gender == 1) {
			printf("'남탕,소인입니다. 12000원'\n");
		}
		else {
			printf("'여탕,소인입니다.12000원'\n");
		}
	}
	return 0;
}


