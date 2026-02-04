#include <stdio.h>

int main() {
	int a = 1;
	int i;

	//for (초기값;조건식;증감식){
		//*실행문;//


	for (i = 0; i < 10; i++) {
		printf("%c", '$');
	}
	printf("\n");
	int j = 0;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}
	return 0;
}