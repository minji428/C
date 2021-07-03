#include <stdio.h>

int main(void)
{
	int a;
	printf("숫자: ");
	scanf_s("%d", &a);
	printf("결과: %d\n\n", a >= 60);

	int b;
	printf("초: ");
	scanf_s("%d", &b);
	printf("%d분 %d초\n\n", b / 60, b & 60);

	int c, d;
	printf("숫자1: ");
	scanf_s("%d", &c);
	printf("숫자2: ");
	scanf_s("%d", &d);

	printf("결과: %d\n\n", c < d);

	int e;
	printf("숫자3: ");
	scanf_s("%d", &e);
	printf("결과: %d", e % 2 == 0);
	return 0;
}