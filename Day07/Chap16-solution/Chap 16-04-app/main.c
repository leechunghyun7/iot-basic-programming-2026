//동적할당 예제

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("문자열 입력:");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}
	for (i = 0; i<3; i++) {
		printf("%s\n", str[i]);
	}
	for (i = 0; i<3; i++) {
		free(str[i]);
	}

	return 0;

}
