//성적처리 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score[5];
	int i;
	int total = 0;
	double avg;
	//printf("배열총바이트 %zu\n", sizeof(score));
	//printf("배열요소하나크기 %zu\n", sizeof(score[0]));
	//printf("배열의 사이즈 %zu\n", sizeof(score)/ sizeof(score[0]));

	//키보드로 성적 입력
	printf("배열크기%zu\n", sizeof(score));

	for (i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
	}

	//합산
	for (i = 0; i < 5; i++) {
		total = total + score[i];
	}
	avg = total / 5.0;
	for (i = 0; i < 5; i++) {
		printf("%5d", score[i]);
	}
	printf("총점:%d\n", total);
	printf("\n");
	printf("평균:%.1f\n", avg);
	return 0;
}
