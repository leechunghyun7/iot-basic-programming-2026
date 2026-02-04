//break를 사용한 반복문 종료

#include <stdio.h>

int main() {
	int i;
	int sum = 0;

	for (i = 1; i <= 100; i++ ) {
		sum = sum + i;
		if (sum >= 30) {
			break;
		}

	}

	printf("누적합: %d\n", sum);
	printf("마지막으로 더한값:%d\n", i);
	return 0;
}