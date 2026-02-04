#include <stdio.h>

int main() {
	int i = 0;

while (1) {
	printf("BE HAPPY!\n");
	i++;
	if(i==20) {
		break;
	}
}
//continue문
for(i=1; i<=100; i++) {
	if(i%3 !=0) { 3의 배수일때는 반복문 아래를 실행하지 않고 다음 반복으로 넘어감.
		continue;
	}
	printf("%d ", i);
}

printf("\n");
return 0;
}