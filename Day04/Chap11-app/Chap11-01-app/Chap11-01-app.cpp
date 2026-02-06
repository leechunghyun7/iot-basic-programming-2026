//문자

#include<stdio.h>

int main(void) {
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z')) { //65~90이면
		small = cap + 32;

	}
	printf("대문자: %c\n", cap);
	printf("소문자: %c\n", small);
	
	
	return 0;
}