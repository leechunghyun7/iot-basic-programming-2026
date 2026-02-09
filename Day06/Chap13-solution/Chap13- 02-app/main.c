//정적 변수 static

#include <stdio.h>
void auto_func(void);//일반 지역변수
void static_func(void);//정적 지역변수 사용

int main(void) {
	int i;

	printf("일반 지역변수 사용 함수 호출\n");
	for (i = 0; i < 3; i++){
		auto_func();
	}
	printf("일반 지역변수 사용 함수 호출\n");
	for (i = 0; i < 3; i++) {
		static_func();
	}

	return 0;
}
void auto_func(void) {
	//일반 지역변수는 auto func함수가 호출될때 생성되고 함수가 종료될때 메모리에서 사라짐
	auto int a = 0;

	a++;
	printf("%d\n", a);
}

void static_func(void) {
	//main,c가 처음 시작될때 메모리 올라갔다가, main.가 종료될때 메모리에서 사라짐

	static int a;//static, 0으로 자동 초기화 //static이라는뜻 프로그램이 시작될때 부터 끝날때 까지 살아있어라

	a++;
	printf("%d\n", a);
}