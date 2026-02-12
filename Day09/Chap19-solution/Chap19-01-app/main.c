//헤더파일 사용

#include <stdio.h>   //빌트인 라이브러리 (헤더파일)
//하위 폴더에 있는 파일을 추가할때는 printf와 다르게 \\ 사용하지 않음
#include "student.h" //사용자 헤더파일은""로 추가//include 내가 파일을 포함 시키겠다는 뜻

#define PI 3.141592653859
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN ("허용범위 초과!!");
void func(void);
//조건부 컴파일 지시자
#define VER7
#define BIT16


int main(void) {
	student st1={ 315,"홍길동" };
	double radius ,area;

	int max;

#if VER >=6
	printf("버전%d입니다\n", VER7);
#else
#
	printf("버전을 확인하세요\n");
#endif

#ifdef BIT16
		max = 32767;
#else
		max = 2147483647;
#endif
		printf("학번%d,이름:%s\n", st1.num, st1.name);

	printf("학번:%d,이름:%s\n", st1.num, st1.name);

	radius = 9;
	area = radius * radius * PI;

	if (area < LIMIT) {//계산된 면적이 100.0넘으면}
		ERR_PRN;
	}
	else {
		printf("원 면적:%.2lf(%s)\n", area, MSG);
	}

	printf("컴파일(빌드) 날짜와 시간:%s,%s\n",__DATE__, __TIME__);
	printf("파일명: % s\n", __FILE__);
	printf("함수명: % s\n", __FUNCTION__);
	printf("행번호: % d\n", __LINE__);

#line 100"macro.c" //행번호를 100으로 변경, 파일명도 macro.c로 표시

	func();
	return 0;
}

void func(void) {
	printf("\n");
	printf("파일명: % s\n", __FILE__);
	printf("함수명: % s\n", __FUNCTION__);
	printf("행번호: % d\n", __LINE__);
}