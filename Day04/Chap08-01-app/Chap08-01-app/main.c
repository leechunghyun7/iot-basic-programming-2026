#include <stdio.h>

int main() {
	int kor, math, eng, social, scrence;//5개 과목 점수 저장변수
	int ary[5] = { 90,85,70,95,100 };
	//5개 과목 점수 저장 배열 크기 5의 정수형 배열을 만드는 것
	int tot = 0;
	int i = 0;
	int avr = 0;

	

	printf("국어 점수 :%d\n", ary[0]);
	printf("수학 점수 :%d\n", ary[1]);
	printf("영어 점수 :%d\n", ary[2]);
	printf("사회 점수 :%d\n", ary[3]);
	printf("과학 점수 :%d\n", ary[4]);

	for (i = 0; i < 5; i++) {
		tot += ary[i];
	}
	avr = tot / 5;
	printf("총 점수의 합은:%d\n", tot);
	printf("평균의 값은 %d\n", avr);

	//합산

	return 0;
}