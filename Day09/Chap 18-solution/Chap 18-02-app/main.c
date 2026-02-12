//파일 입출력

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<windows.h>	//	OS관련 또는 코드페이지 인코딩 해결

int main (void){
	//콘솔출력,입력을 UTF-8(65001)로 고정설정

	FILE* ifp, *ofp;

	//텍스트내 포맷에 맞춰서 변수 선언
	char name[20];
	int kor, eng, math;
	int total;
	double avg;
	int res;

	ifp = fopen("./original.txt", "r");//r 모드는 파일 없으면 실패
	if (ifp == NULL) {
		printf("입력파일 오픈 실패!\N");
		exit(1);
	}

	ofp = fopen("./copy.txt", "w");//w쓰기모드는 파일이 없으면 파일 생성
	if (ofp == NULL) {
		printf("출력파일 생성 실패!\n");
		exit(1);
	}

	while (1) {
		//입력 파일포인터에서 읽어서 한줄씩 각 변수에 할당
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);//배열만 적으면 그 배열의 주소
		if (res == EOF) {
			break;
		}
		total = kor + eng + math;
		avg = total / 3.0;

		printf("%s%5d%7.1lf\n", name, total, avg);//좀 많이 띄워서 출력

	}
	printf("파일 복사 완료\n");
	//파일 포인터 해제
	fclose(ifp); fclose(ofp);

	return 0;


}