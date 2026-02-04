//구구단 프로그램

#include <stdio.h>

int main() {
	int i, j;
	int mul = 0;
	for (j = 1; j <= 9; j++) {
		printf("%d단 시작\n",j);
		for (i = 1; i <= 9; i++) {
			mul = i * j;
			printf("%dx%d=%2d\t", j,i,mul);

		}
		printf("\n");
	}
}

