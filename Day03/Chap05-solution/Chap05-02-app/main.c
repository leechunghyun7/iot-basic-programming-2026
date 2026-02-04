//switch~case 문
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int rank = 0; int money = 0;
	printf("switch문 예제\n");
	printf("등수를 입력하세요\n");
	scanf("%d", &rank);
	if (rank = 1) {
		money = 1000;
	}
	else if (rank = 2) {
		money = 500;
	}
	else {
		money = 100;
	}
	printf("%d등이고%d원\n", rank, money);
	return 0;
}

