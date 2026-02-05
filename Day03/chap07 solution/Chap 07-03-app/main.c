
#include <stdio.h>

void fruit(void); // 함수 원형 선언
void fruit2(int); // 함수 원형 선언

int main(void) {

	fruit2(1); // 함수 호출
	return 0;
}

void fruit2(int count) {
	printf("apple\n");
	if (count == 3) {
	return;//함수 호출한 곳으로 되돌아가지만 반환값은 없음 반환의 정의 값을 돌려보내고 다시 원래 함수로 돌아가는 것을 의미한다
	}// 함수 호출하고 함수 내부에서 또 함수를 호출한다
	fruit2(count + 1);
}

void fruit(void) {
	static i=1;
	printf("banana,%d\n",i++);// 함수 원형 선언
	fruit(); // 함수 호출하고 함수 내부에서 또 함수를 호출한다 
}
