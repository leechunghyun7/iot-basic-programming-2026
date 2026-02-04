#include <stdio.h>
int main() {

	for (int i = 0; i < 10; i++) {

		for (int k = 0; k<i/2; k++) {
				printf(" ");
				
				}
		

		for (int j = 10; j/2 > 0; j--) {
			printf("*");
			if (j == i) {
				break;
			}
		}

		printf("\n");
	}
	return 0;
}