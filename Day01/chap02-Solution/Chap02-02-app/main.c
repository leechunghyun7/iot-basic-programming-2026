// Chap02-02-app 탈출문자(Escape Charater) 학습
#include <stdio.h>

int main() {
	printf("Hello world\n"); // 콘솔에 문자열을 format에 맞추어 출력
	// 
	printf("12345\n");
	printf("6789\n");
	printf("wow\n");

	// \t -> 콘솔에 탭 추가
	printf("My friend, puka\n");
	printf("My friend, \tpuka\n");

	// \b -> 백스페이스
	printf("Goot\bd Morning/n");
	// \a -> 알람소리
	printf("Bark!!\a\n");
	// \r-> 글짜쓰는 맨 앞으로 이동
	printf("Department\rlotte\n");
	//%d decimal 정수를 문자로 출력
		printf("%d\n", 10);
		printf("%f\n", 3.141592);
		printf("%1f\n", 3.14);
		printf("%2f\n", 3.141592);

		printf("%5d x %5d = %5d", 6, 7, 6 * 7);

		return 0;

	return 0;
}