#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int score[3][4] = { 0 };
    int total;
    double avg;

    char animal[5][20];
    int count;

    int i, j;

    count = sizeof(animal) / sizeof(animal[0]);
    printf("동물 수: %d\n", count);

    for (i = 0; i < 3; i++) {
        printf("%d번 학생, 4과목 점수 입력: ", i + 1);
        for (j = 0; j < 4; j++) {
            scanf("%d", &score[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        total = 0;
        for (j = 0; j < 4; j++) {
            total += score[i][j];
        }
        avg = total / 4.0;
        printf("%d번 학생, 총점:%d, 평균: %.2lf\n", i + 1, total, avg);
    }

    return 0;
}
