//주소록 프로그램 step1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
//함수선언
static void print_menu(void);// 이 소스내에서만 쓰겠다
static int read_menu(void);


int main(void) {
	int choice=0;

	while (1) {//무한루프
		print_menu(); //메뉴를 출력
		choice = read_menu();
		//메뉴를 출력
		//choice 값에 입력 받음

		switch (choice) {
		case1:
			printf("%s\n","[ADD]연락처 추가(기능 구현요)");
				break;
			
		case2:
			puts("[LIST]연락처 목록");
				break;
		case3:
			printf("[SEARCH]연락처 검색");
				break;
		case4:
			printf("[EDIT]연락처 수정");
				break;
		case5:
			printf("[DELETE]연락처 삭제");
				break;
		case6:
				printf("프로그램 종료");
				return 0;



		}


	}
	return 0;
}

static void print_menu(void) {
	puts("========================================");
	puts("              주소록 프로그램(step 1)");
	puts("========================================");
	puts("1.추가");
	puts("2.목록");
	puts("3.검색");
	puts("4.수정");
	puts("5.삭제");
	puts("6.종료");
	puts("========================================");
}

static int read_menu(void) {
	int choice,ch;

	printf("선택>");
	if (scanf("%d", &choice) != 1) {
		while ((ch= getchar())!='\n' && ch!=EOF){}
		return -1;
	}
	// scanf 뒤에 있는 버퍼를 제거 시킴
	while ((ch = getchar()) != '\n' && ch!= EOF) {}

	return choice;


}