//구조체 포인터 ->연산자

#include <stdio.h>

struct score {
	int kor;	//한국어 점수
	int eng;	//영어점수
	int math;	//수학점수

};

struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void print_list(struct address*);//구조체 배열을 받아서 도는 함수

int main(void) {
	//struct score yuni = { 90,80,71 } 일반적인 방법
	struct score yuni = { .kor = 90,.eng = 80,.math = 71 };
	struct score* ps = &yuni;//구조체 포인터에 주소를 저장

	printf("국어 : %d\n",(* ps).kor);//ps가 가리키는 곳의 변수
	//(*ps).연산이 복잡함, 이를 단순화 시키는게->
	printf("영어:%d\n", ps->eng);
	printf("수학:%d\n", ps->math);

	//struct address 구조체 배열
	struct address list[5] = {
		{"홍길동",23,"111-1111","울릉도 독도"},
		{"이순신",23,"222-2222","서울 건천동"},
		{"장보고",23,"333-3333","완도 청해진"},
		{"유관순",23,"444-4444","충남 천안"},
		{"안중근",23,"555-5555","황해도 해주"},
	};
	int i;
	//출력을 메인함수에서 하면 쉽다!
	printf("main 함수 출력\n");
	for (i = 0; i < 5; i++) {
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
		
	}
	printf("print_list 함수출력\n");
	print_list(list);

	return 0;
}
//구조체 배열 포인터를 사용하면
//*(포인터) 연산자로 작업하면 연산이 복잡해짐
// 그래서, 대신->를 사용하는 것
void print_list(struct address* lp) {
	int i;

	for (i = 0; i < 5; i++) {
		printf("%10s%5d%15s%20s\n", (*(lp +i)).name,(lp+i)->age,(lp+i)->tel,(lp+i)->addr);

	}

}

