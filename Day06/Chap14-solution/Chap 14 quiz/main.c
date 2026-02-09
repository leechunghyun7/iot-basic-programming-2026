//14장 3번 퀴즈

#include <stdio.h>

int main(void) {

	char mark[5][5] = { 0 };
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			//아래 수식만 수정하면 대각선찍기,별표찍기,테두리찍기, 십자가찍기 가능
			if (i==j) mark[i][j] = 'x';
			if (i + j == 4) mark[i][j] = 'x';
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {

			if (mark[i][j] != 0) {
				printf("[%c]", mark[i][j]);
			}
			else {
				printf("[ ]");
			}
			
		}
		printf("\n");
	}

	return 0;
}