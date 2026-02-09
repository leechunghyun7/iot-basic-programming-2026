//값 복사 전달
//포인터변수로 리턴

#include <stdio.h>
//void add_ten(int);

int add_ten(int);

void plus_ten(int*);  //매개변수로 포인터 선언

int* sum(int, int);//매개변수는 일반변수, 리턴은 포인터변수

int main (void) {
	int a = 100;
	int* result;

	a = add_ten(a);
	printf("a=%d\n", a);

	plus_ten(&a); //포인터 변수는 변수의 주소를 받는다
	printf("a=%d\n", a);//포인터는 굳이 주소를 바꿀 필요가 없구나

	result = sum(40, 60);
	printf("*result=:%d\n",*result);

	return 0;
}

int* sum(int a, int b) {
	static int res; //정적 지역변수. static을 써서 sum함수가 끝나도 볕ㄴ수가 살아있도록 하겠다는 의미

	res = a + b;

	return &res;//정적변수의 주소를 반환
}

void plus_ten(int* pa) {
	*pa = *pa + 10;
}
// 값 복사후 리턴없으면 값 사라짐
//void add_ten(int num){
//num = num + 10;
//}

int add_ten(int num) {
	num = num + 10;

	return num;
	
}