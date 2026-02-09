//문자열과 포인터, 문자열 함수
//strcpy,strcat,strlen,strcmp
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	const char* ps1 = "banana";
	const char* ps2 = str2;

#pragma region strcpy()함수영역
	printf("최초 문자열:%s\n", str1);
	strcpy(str1, str2);//str1에str2 문자열을 복사하라
	printf("바뀐 문자열:%s\n", str1);

	strcpy(str1, ps1);
	printf("바뀐 문자열:%s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열:%s\n", str1);

	strcpy(str1, "applemango");
	printf("바뀐 문자열:%s\n", str1);
	
	//str2="apple";//문자배열은 값 변경불가, strcpy
	ps2 = "apple";//문자포인터는 값 변경가능

#pragma endregion strcpy()함수영역

#pragma region strncpy()함수
	//원하는 개수의 문자 복사하는 함수
	char str3[20] = "mango tree";
	
	strncpy(str3, "apple-pie", 5); //apple pie에서 5글자만 복사

	printf("바뀐 문자열 :%s\n", str3);

	

#pragma region strcat, strncat() 함수
	

char str4[80] = "straw";

strcat(str4, "berry");
printf("바뀐 문자열%s\n",str4);

strncat(str4, "piece",3);
printf("바뀐 문자열%s\n",str4);
#pragma endregion

#pragma region strlen()함수   //strlen 글자의 갯수를 알려준다

printf("strlen() 함수 \n");

printf("str1:%s,글자길이%zu\n", str1, strlen(str1));
strcpy(str1, "애플 망고");
//c에서 한글 글자 길이는 한 글자당 2로 지정
printf("str1:%s,글자길이%zu\n", str1, strlen(str1));

#pragma endregion

#pragma region strcmp(), strncmp() 함수

printf("strcmp(),strncmp() 함수\n");

char str5[80] = "pear";
char str6[80] = "peach";

printf("사전에 나중에 나오는 과일:");
printf("%d",strcmp(str5, str6));

if (strcmp(str5, str6)) {
	printf("%s\n", str5);
}
else if (strcmp(str5,str6)==0){
	printf("%s 같은단어\n",str5);
}
else {
	printf("%s\n",str6);
}

int result = strncmp(str5, str6, 3);//pear랑 peach를 비교하는데 3글자만 비교한다

if (result == 0) {
	printf("앞 3글자가 동일합니다.\n");
}
else if (result < 0) {
	printf("%s<%s\n", str5, str6);
}
else {
	printf("%s>%s\n", str5, str6); //str6이 먼저나옴
}

#pragma endregion

	return 0;

}