//문자열 예제
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h> //문자열 복사 함수를 사용위해 추가 라이브러리

int main(void) {
	char str[80] = "applejam";//str[8]부터는 \0(null문자)가 초기화 됨
	char str2[80];//str[8]부터는 \0(null문자)가 초기화 됨

	printf("최초 문자열:%s\n", str);
	//printf("문자열 입력:");
	//scanf("%s", str);
	//첨자[i]를 사용하지 않으면
	//배열의 이름은 배열의 주소를 나타냄
	//배열 한건을 입력할 때 &score[i] 필요
	//printf("입력후 문자열%s\n", str);

	strcpy(str, "grape");
	printf("입력후 문자열:%s\n", str);

	strcpy(str2, str); //뒤에있는 값을 앞에있는 배열에  복사하라
	printf("입력후 문자열:%s\n", str2);


	return 0;
}