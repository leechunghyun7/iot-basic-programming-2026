//구조체
#pragma pack(1)//패딩바이트를 사용안함
#include <stdio.h>


	struct student {
		char ch1;  //1byte
		short num;  //2
		char ch2; //4
		int score; //8byte
		double grade; //1
	};

	int main(void) {
		
		struct student st1;

		//실제 사용되는 바이트는 12byte 하지만, 패딩바이트로 16byte로 구성
		// student 총 17byte->실제 32byte사용

		printf("구조체의 크기 :%zu\n", sizeof(st1));
		//구조체에 선언하는 맴버변수의 위치만 조정해도 패딩바이트가 사라짐->24byte



	return 0;
}