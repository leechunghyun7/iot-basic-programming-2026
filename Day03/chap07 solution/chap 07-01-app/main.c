#include<stdio.h>

int sum(int x, int y);
	int main() {
		int a = 10, b = 20;
		int result;

		//return이 있는 함수를 호출하면 반드시 lvalue(변수)가 있어야한다
		result = sum(a, b); // 두 정수를 더한 값을 저장할 변수
		printf("result:%d\n", result);

		return 0;
	}
	int sum(int x, int y) { //gkatnwjddml
		int temp;

		temp = x + y;
		return temp;
	}


	
