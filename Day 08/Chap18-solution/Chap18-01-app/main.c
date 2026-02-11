//파일 입출력
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	FILE* fp;//파일 포인터

	fp = fopen("C:\\test.txt", "r");//r읽기,w쓰기,a내용추가
	if (fp = NULL) {
		printf("파일이 열리지 않았습니다\n");
		exit(1);
	}
	printf("파일이 열렸습니다\n");
	//닫아야함
	fclose(fp);//free와 동일

	return 0;
}