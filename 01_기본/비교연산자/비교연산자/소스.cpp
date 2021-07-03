#include <stdio.h>

int main(void)
{
	printf("%d\n", 10 == 10);
	printf("%d\n", 11 != 10);
	printf("%d\n", 11 > 10);
	printf("%d\n", 9 < 10);
	printf("%d\n", 10 >= 10);
	printf("%d\n\n", 10 <= 10);

	// a나 b를 변경
	int a = 10;
	int b = 10;

	printf("=========\n");
	b = 1;
	printf("%d\n", a == b);
	b = 10;
	printf("%d\n", a != b);
	b = 11;
	printf("%d\n", a > b);
	b = 9;
	printf("%d\n", a < b);
	b = 11;
	printf("%d\n", a >= b);
	b = 9;
	printf("%d\n", a <= b);



	return 0;
}