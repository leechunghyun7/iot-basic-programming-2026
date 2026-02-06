#include <stdio.h>

int main(void) {
    int a = 10; int b = 15; int total;
    double avg;

    //포인터 변수
    int* pa, * pb;
    int* pt = &total;//선언일때는 별을 붙이고 주소값을 넣어야됨 밑에서는 pt가 &total이된다
    double* pg = &avg;

    pa = &a;
    //*pa=*&a
    pb = &b;

    //원래는 total = a+b; avg = total/2.0;
    //대신 포인터변수로 위의 작업을 대체
    //*pa >> a변수의 주소가 가지고있는 값을 의미
    //pa >> a변수의 주소
    *pt = *pa + *pb;
    *pg = *pt / 2.0;



    printf("a=%d,b=%d,total=%d,avg=%.2f\n", a, b, total, avg);

    printf("*pa=%d,*pb=%d,*pt=%d,*pg=%.2f\n", *pa, *pb, *pt, *pg);




    return 0;



}
