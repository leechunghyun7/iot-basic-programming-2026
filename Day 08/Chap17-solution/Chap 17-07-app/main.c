//구조체, 공용체 재정의

#include <stdio.h>

struct student {

	int num;
	double grade;
};

typedef struct student student;
void print_data(student*);

int main(void) {
	student st1 = {
		.num = 315,
		.grade = 4.3
	};
	print_data(&st1);
		return 0;
}

void print_data(student* ps) {
	printf("학번:%d\n", ps->num);
	printf("한점:%.1f\n", (*ps).grade);

}