//대소문자 변환 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[80];
	int i;
	int count = sizeof(str) / sizeof(str[0]);
	int pos;
	int num = 0;
	
	printf("문자열 입력:");
	gets(str); //DON'T Worry, Be Happy~>>don't worry, be happy>>바뀐 문자가 7개

	for (i = 0; i < 80; i++) {
		if (str[i] == '\0') {
			pos = i;
			break;

		}

	}

	//printf("%d\n", pos);
	for (i = 0; i < pos; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
			num++;
		}
	}
	printf("바뀐문장: ");
	puts(str);

	printf("바뀐 문자 수:%d\n",num);
	return 0;
}





#define _CRT_SECURE_NO WARNINGS
#include <stdio.h>
int main(void){
	int arr[80];
	int i;
	int count;
	int 