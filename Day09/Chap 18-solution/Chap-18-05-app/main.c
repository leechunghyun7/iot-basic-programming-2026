#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	FILE* tfp, * bfp;//tfp 텍스트용,bfp바이너리용
	int num = 10;
	int res;

	tfp = fopen("./text.txt","wt");
	fprintf(tfp, "%d", num);

	bfp = fopen("./binary.dat","wb");
	fwrite(&num, sizeof(num), 1, bfp);//배열이면, fwrite(arr,sizeof(arr[0]),배열요소갯수,fp);

	fclose(tfp); fclose(bfp);

	bfp = fopen("./binary.dat", "rb");
	fread(&res, sizeof(res),1, bfp);
	printf("%d", res);
	
	fclose(bfp);

	printf("처리 완료\n");

	return 0;
}