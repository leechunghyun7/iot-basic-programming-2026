// 문자 입력 실수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char ch1,ch2;
	char ch3;

	//scanf("%c%c", &ch1, &ch2);// a엔터를 치면, ch = 'a',ch = '\n'
	//printf("[%c%c]", ch1, ch2);

	// getchar(), putchar()함수로 글자 하나를 입력, 출력
	// 주석변화 ctrl + /
	// 주석변환2 ctrl + k,c
	// 주석해제 ctrl + k,u
	//ch1 = getchar();//getchar()는 앞선입력의 \n도 들어갈 수 있음 !!
	//printf("입력갑\n>>");
	//putchar(ch1);
	//입력버퍼 문제
	int num, grade;

	int a;

	printf("학번 입력:");
	scanf("%d", &num);//
	getchar();//키보드 버퍼의 내용은 읽어옴 그냥 사라짐
	printf("학점 입력");
	grade = getchar();//학점입력
	printf("학번:%d,학점:%c\n", num, grade);
	return 0;
	
	
	
	
	
	
	
	return 0;


}