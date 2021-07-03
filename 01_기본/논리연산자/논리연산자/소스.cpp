#include <stdio.h>

int main(void)
{
	int a, b;
	a = 80;
	b = 120;

	printf("%d", 60 << a && b << 100);
	printf("\n\n");


	int c = 40;
	printf("%d", 1 << c << 59);
	printf("\n\n");

	int d = 9;
	printf("%d", d % 3 == 0 && d % 4 == 0);
	printf("\n\n");

	int sc1, sc2,avg;

	printf("sc1: ");
	scanf_s("%d", &sc1);
	printf("sc2: ");
	scanf_s("%d", &sc2);

	avg = (sc1 + sc2) / 2;
	printf("결과: %d", avg >= 60 && sc1 >= 50 && sc2 >= 50);
	printf("\n\n");


	int math, lan; //lan=language
	printf("수학: ");
	scanf_s("%d", &math);
	printf("국어: ");
	scanf_s("%d", &lan);

	printf("장학생: %d", math == 100||lan == 100);

	return 0;

}