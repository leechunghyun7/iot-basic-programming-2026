#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile{//구조체정의
	int age;
	double height;
};

struct student {
	int id;
	double grade;
	struct profile pf;
};

int main(void){
	struct student st1;

	st1.id = 9537;
	st1.grade = 4.1;
	//student 구조체 내 profile 구조체 사용
	st1.pf.age = 25;//구조체 안에 구조체가 들어가면 점점으로 계속이어지게된다
	st1.pf.height = 173.0;//. 레벨을 뜻한다

	//출력
	printf("학번:%d\n", st1.id);
	printf("학점:%.1f\n", st1.grade);
	printf("나이:%d\n", st1.pf.age);
	printf("키:%d\n", st1.pf.height);

	return 0;
	}