//여러가지 함수 유형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_num(void);//void 비어있다는 뜻 창세기 1장 비어있고 매개변수가 없다는 뜻

void print_line(void);

int main() {
	print_line();//함수 호출
	printf("학번 이름 전공 학점\n");
	print_line();//함수 호출
	int result;
	result = get_num();
	printf("반환값%d\n", result);
	return 0;//int자리에 void가 들어오면 return값이 없다는 뜻
}
//이하 함수 정의 부분
void print_line(void) {
	int i;

	for(i=0;i<50;i++){
	}//함수를 호출한 곳으로 점프백

}

int get_num(void){

	int num;
	printf("양수입력:");
	scanf("%d",&num);//키보드 입력으로 값을 대입

	return num;
}