// 파일 입출력+프로그램 실행경로
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <direct.h>

int main(void) {
	char cwd[256]; //경로 입력 변수
	char str[80];
	char* res;
	_getcwd(cwd, sizeof(cwd));
	printf("현재 작업 폴더:%s\n", cwd);
	printf("현재 작업(프로젝트) 폴더:%s\n", cwd);
	

	FILE* fp, *ofp;

	fp = fopen("./data/sample.txt", "r");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return 1; // exit(1)과 동일한 기능
	}
	else {
		printf("파일 오픈 성공\n");
	}

	//파일 복사용 오픈
	ofp = fopen("./data/copy.txt", "w");
	if (ofp == NULL) {
		printf("파일 열기 실패\n");
		return 1; // exit(1)과 동일한 기능
	}
	while (1) {
		res = fgets(str, sizeof(str), fp);//sample.tx읽은 파일포인터에서 한줄을 read
		if (res == NULL) {//실페 방지 옵션
			break;
		}
		printf("한줄쓰기->%s\n", str);
		str[strlen(str) - 1] = '\n0';
		fputs(str, ofp);
		fputs(" ", ofp);//한줄 끝난뒤 스페이스 추가
	}
	printf("텍스트 파일 복사 성공!\n");
	fclose(fp); fclose(ofp);

	

	return 0;
}
