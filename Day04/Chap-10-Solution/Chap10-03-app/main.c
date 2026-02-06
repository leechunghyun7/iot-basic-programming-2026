//배열값을 출력하는 함수

#include <stdio.h>

void print_ary(int arr[], int size);
void print_ary2(int* pa, int size);

int main(void) {
	int ary[10] = { 0,1,2,3,4,5,6,7,8,9 };
	printf("배열로처리\n");
	print_ary(ary, 10);

	printf("포인터로 처리\n");
	print_ary2(ary, 10);

	return 0;

}
void print_ary2(int* pa, int size) {
	int i;

	for (i = 0; i < size; i++) {
		printf("%5d", *(pa + i));
	}
}
void print_ary(int arr[], int size) {
	int i;

	for (i = 0; i < size; i++) {
		printf("%5d", arr[i]);
	}
	}
