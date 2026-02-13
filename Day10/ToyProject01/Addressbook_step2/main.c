//주소록 프로그램 step1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 사람은 숫자보다 이름에 익숙. 유지 보수를 위해서
#define MAX_CONTRACTS 100//100명 주소록
#define NAME_LEN 31//이름 최대길이
#define PHONE_LEN 20
#define EMAIL_LEN 65
#define ADDR_LEN 129
#define MEMO_LEN 129

typedef struct _contact {
	char name[NAME_LEN];
	char phone[PHONE_LEN];
	char address[ADDR_LEN];
	char email[EMAIL_LEN];
	char memo[MEMO_LEN];


} Contact; //이후 Contact 이름으로 사용


//변수 선언

static Contact contacts[MAX_CONTRACTS];
static int count = 0;

#pragma region
//함수선언
static void print_menu(void);// 이 소스내에서만 쓰겠다
static int read_menu(void);
static void read_line(char* buf, int size);

static void add_contact(void);
static void list_contacts(void);

static void search_contact(void);
static void print_contact(int index);

#pragma endregion


#pragma region 사용자함수 정의 영역

int main(void) {
	int choice=0;

	while (1) {//무한루프
		print_menu(); //메뉴를 출력
		choice = read_menu();
		//메뉴를 출력
		//choice 값에 입력 받음

		switch (choice) {
		case 1:
			//printf("%s\n"	"[ADD] 연락처 추가 (기능 구현요)";
			add_contact();
			printf("%s\n","[ADD]연락처 추가(기능 구현요)");
				break;
			
		case 2:
			list_contacts();
			puts("[LIST]연락처 목록");
				break;
		case 3:
			//printf("[SEARCH]연락처 검색(다음 스텝에서)");
				search_contact();
				break;
		case 4:
			printf("[EDIT]연락처 수정(다음 스텝에서)");
				break;
		case 5:
			printf("[DELETE]연락처 삭제(다음 스텝에서)");
				break;
		case 6:
				printf("프로그램 종료");
				return 0;

		}
		puts("");


	}
	return 0;
}

static void print_menu(void) {
	puts("========================================");
	puts("              주소록 프로그램(step 1)");
	puts("========================================");
	puts("1.추가");
	puts("2.목록");
	puts("3.검색(미구현)");
	puts("4.수정(미구현)");
	puts("5.삭제(미구현)");
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

//fgets로 입력할때 문제가 발생하지 않도록,문자열 끝에 '\n' 제거
static void read_line(char* buf, int size) {
	if (fgets(buf, size, stdin) == NULL) {
		buf[0] = '\0';
		return;
	}
	//strcspn(buf,"\n") = buf 문자열 내에서 \n을 찾아서 그 위치 값을 리턴하는 함수다
	//buf "Hello World!\0\n" -> "Hello World\0"
	//buf[12] = '\0'
	buf[strcspn(buf, "\n")] = '\0';//문자열 끝 \n을 \0으로 변경
}

	static void add_contact(void) {
		if (count >= MAX_CONTRACTS) {
			puts("주소록 최대인원 100명에 도달했습니다");
			return;
		}
		puts("[ADD] 새 연락처 입력");

			printf("이름: ");
		read_line(contacts[count].name, NAME_LEN);

		printf("전화: ");
		read_line(contacts[count].address, PHONE_LEN);

		printf("주소: ");
		read_line(contacts[count].email, ADDR_LEN);

		printf("이메일: ");
		read_line(contacts[count].memo, EMAIL_LEN);

		printf("메모: ");
		read_line(contacts[count].phone, MEMO_LEN);


		count++;
		puts("추가 완료!");

}

	//메뉴 2. 주소록 목록
	static void list_contacts(void) {
		int i;

		if (count == 0) {
			puts("[리스트] 저장된 연락처 없음.");
			return;
		}

		puts("[LIST] 연락처 목록");
		puts("-------------------------------------");
		printf("%4s | %15s | %15s | %20s | %20s", "NO", "Name", "Phone", "Address", "Email");
		printf("연락처 갯수%d\n", count);
		puts("-------------------------------------");


		//contacts 배열에 들어있는 주소록 출력
		for (i = 0; i < count; i++) {
			printf("%4d| %-11s |%-15s |%-36s|%-25s\n", i, contacts[i].name, contacts[i].phone, contacts[i].address, contacts[i].email);
		}

		puts("-------------------------------------");
		//TOD0
	}

	static void search_contact(void){
		char keyword[NAME_LEN];
		int found = 0;
		int i;

		if (count == 0) {
			puts("검색할 연락처가 없습니다");
			return;
		}

		printf("검색할 이름 입력:");
		read_line(keyword, NAME_LEN);

		if (strlen(keyword) == 0) {
			puts("검색할 이름이 없습니다.");
			return ;
		}

		puts("검색 결과:");
		puts("---------------------------");

		for (i = 0; i < count; i++) {
			//strcmp와 유사한 기능,strstr(찾을 문자열, 찾는 문자열)
			if (strstr(contacts[i].name, keyword) != NULL) {
				printf("순번:%d\n", i + 1);
				//상세출력
				print_contact(i); //상세출력
				puts("---------------------------");
				found = 1;
			}
		}
		if (found, 1) {
			puts("일치하는 연락처가 없습니다");
		}
	}

	// 메뉴 3-1. 주소록 1건 상세출력 함수
	static void print_contact(int index) {
		printf("이름 : %s\n", contacts[index].name);
		printf("전화 : %s\n", contacts[index].phone);
		printf("주소 : %s\n", contacts[index].address);
		printf("이메일 : %s\n", contacts[index].email);
		printf("메모장 : %s\n", contacts[index].memo);
	}