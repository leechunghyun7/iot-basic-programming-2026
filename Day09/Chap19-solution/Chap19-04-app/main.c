//헤더파일.h

#include <stdio.h>
#include "line.h"//라인에서 부르기 때문에 point를 굳이 안불러도 된다.

int main (void){

	Line line1 = { .first = {10,20},.second = {100,300} };
	Point p1;

	p1.x = (line1.first.x + line1.second.x) / 2; //선 사이의 x축의 가운데 점이 나온다
	p1.y = (line1.first.y + line1.second.y) / 2; //line1선의 y축 가운데 점

	printf("선의 가운데점 좌표:(%d,%d)\n", p1.x, p1.y);

	return 0;
}