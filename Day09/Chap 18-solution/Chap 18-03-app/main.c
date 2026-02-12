//파일 입출력 추가내용
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	FILE* fp;
	char str[30];

	// w,a 는 파일이 없으면 파일 생성
	fp = fopen("./fruits.txt", "a+"); //기존 텍스트에추가, +읽고 쓰기
	if (fp == NULL) {
		printf("파일 오픈 실패\n");
		exit(1);
	}

	while (1) {
		printf("과일 이름 입력");
		scanf("%s", str); //키보드 입력

		if (strcmp(str, "end") == 0) {
			break;
		}
		else if (strcmp(str, "list") == 0) {//list를 입력하면 이전에 입력한 과일 이름들이 나열됨
			fseek(fp, 0, SEEK_SET);//버퍼의 맨 처음으로 이동한다는 뜻
			while (1)
			{
				fgets(str, sizeof(str), fp);
				if (feof(fp)) {
					break;
				}
				printf("%s,", str);
			}
		}
		else {
			fprintf(fp, "%s\n", str);//fruits.txt파일에 쓰기
		}
	}

	fclose(fp);
	printf("파일 처리 완료");

	return 0;
}