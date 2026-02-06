#include <stdio.h>

// 포인터 사용 이유: 값이 아닌 실제 변수에 접근해서 변경 가능



int main(void) {
    int a = 10, b = 20;

    printf("원본 a,b=%d,%d\n", a, b);
    swap(&a, &b);
    printf("변경후 a,b=%d,%d\n", a, b);

    return 0;
}
