#include <stdio.h>
#include <limits.h>
int main() {
	printf("int의 최댓값 : %d\n", INT_MAX);
	printf("int의 최댓값 : %d\n", INT_MAX);
	printf("int의 최댓값 : %d\n", INT_MAX);


	printf("%d\n", 12);  //10진수 12
	printf("%d\n", 014);  //8진수 (숫자앞에 0) 12
	printf("%d\n", 0xC);  //16진수 (숫자앞에 0) 12

	printf("%d\n", 12); // 10진수
	printf("%d\n", 12); // 12를 8진수 출력
	printf("%d\n", 255); // 12를 16진수로 출력

	// 지수표현
	printf("%.1lf\n",1e6);
	printf("%7lf\n, 3.14e-5");
	//문자, 문자열...
	// c에서는 문자 != 문자열
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%d\n", 'A');
	//문자는 무조건 변환문자 %c를 사용해야된다
	printf("%c는 %s입니다\n", '1',"first");

}