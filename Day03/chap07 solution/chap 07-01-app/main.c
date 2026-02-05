#include<stdio.h>
//c에서만 거의 필수! c최신표준에서는 에러가 아님
int sum(int x, int y); // int sum (int,int); //함수 원형의 매개변수는 x,y를 생략 가능하다.
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


	
