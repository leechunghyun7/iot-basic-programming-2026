//이중포인터 활용 1

#include <stdio.h>

void swap_ptr(char**, char**);

int main(void) {
	char* pa = "success";
	char* pb = "failure";

	printf("pa>>%s,pb>>%s\n", pa, pb);
	swap_ptr(&pa, &pb);//값변경 함수 호출
	printf("pa>>%s,pb>>%s\n", pa, pb);
	return 0;
}

void swap_ptr(char** ppa, char** ppb) {
	char* ptemp;

	ptemp=*ppa;//ppa의 주소를 ptemp에 전달"success"의 주소.
	*ppa = *ppb;//ppb의 주소를 ppa에 전달
	*ppb = ptemp;
}