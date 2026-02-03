#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input_val=0;
	printf("수를 입력하세요");
	scanf("%d", &input_val);//&주소 입력에서는 &이게 굉장히 중요함 키보드로 입력 받은 값을 input_val 주소로 가져가서 집어넣는 다는 의미
	printf("입력된 값 :%d\n", input_val);

	int age;
	double height;

	printf("나이와 키를 입력하세요 :");
	scanf("%d%lf", &age, &height);
	printf("나이는 %d살, 키는 %.1fcm입니다\n",age,height);

	char grade;
	char name[20];

	printf("학점 입력 :\n");
	scanf(" %c", &grade);
	printf("이름 입력 :\n");
	scanf("%s", name);//배열의 이름만 적으면, 배열의 주소를 나타낸다(그래서 &를 생략)
	printf("%s의 학점은 %c입니다\n", name, grade);


	return 0;
}
