//문자열과 포인터

#include <stdio.h>

int main(void) {
	//문자열 출력
	printf("%s\n", "apple");
	//문자열 주소 확인
	printf("%u\n", "apple");
	printf("두번째문자 주소%u\n", "apple +1");

	return 0;
}