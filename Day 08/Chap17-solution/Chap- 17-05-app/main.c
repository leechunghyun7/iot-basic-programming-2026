//공용체(union)
//구조체와 유사. 하나의 저장공간을 같이 사용

#include<stdio.h>
enum season{SPRING=1,SUMMER=2,FALL=3,WINTER=8};

union student{
	char ch1;
	int num;
	double grade;
};

int main(void) {
	union student st1 = { .num = 315 };

	printf("공용체 사이즈 %zu\n", sizeof(st1));
	
	printf("학번:%d\n", st1.num);
	st1.grade = 4.4;
	printf("학점:%.1f\n", st1.grade);
	printf("학점:%d\n", st1.num);

	enum season ss;
	char* pc = NULL;

	ss = SUMMER;
	switch (ss) {
	case SPRING:
		pc = "inline";
		break;
	case SUMMER:
		pc = "tracking";
		break;
	case FALL:
		pc = "skiing";
		break;
	}

	return 0;
}