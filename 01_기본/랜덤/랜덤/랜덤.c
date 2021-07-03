#include <stdio.h>		//printf, scanf_s
#include <stdlib.h>		//rand
#include <time.h>		//time

int main(void)
{
	srand(time(0));		//랜덤함수의 기준변경 //1~4만정도 사이의 숫자가 나온다

	int a = 10;
	printf("%d", a); printf("\n");

	int b = rand();
	printf("%d", b); printf("\n");

	int c = rand();
	printf("%d", c); printf("\n");

	//0,1,2,3,4
	int d = rand() % 5;	
	printf("%d", &d); printf("\n");

	//3,4,5,6,7
	int e = rand() % 5 + 3;
	printf("%d", e); printf("\n");

	//-4,-3,-2,-1,0,1,2,3
	int f = rand() % 8 -4;
	printf("%d", f); printf("\n");

	return 0;
}