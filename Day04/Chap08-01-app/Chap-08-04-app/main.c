//문자열 입력
//공백허용하는 문열 입력
//문자열 전용 입ㅁ출력 함수:GETS,PUTS


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str2[5];
	char str[80];

	str2[0] = 'p';
	str2[1] = 'k';
	str2[2] = '\0';//배열요소로 문자열을 넣을때는 마지막 요소에 반드시 \0를 입력

	printf("%s\n",str2);

	printf("문자열 입력:");
	gets(str);
	//scanf("%s", str);

	printf("입력한 문자열:%s\n",str);
	puts(str);

	return 0;
}