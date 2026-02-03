#include <stdio.h>
int main(void)
{
	int res;
	res = sizeof(short) > sizeof(long) ? 1 : 0;
	if (res == 1)
	
		printf("short");
	
	else 
		printf("long");
	return 0;
}