#include <stdio.h>

int main(void)
{
	int a;
	printf("����: ");
	scanf_s("%d", &a);
	printf("���: %d\n\n", a >= 60);

	int b;
	printf("��: ");
	scanf_s("%d", &b);
	printf("%d�� %d��\n\n", b / 60, b & 60);

	int c, d;
	printf("����1: ");
	scanf_s("%d", &c);
	printf("����2: ");
	scanf_s("%d", &d);

	printf("���: %d\n\n", c < d);

	int e;
	printf("����3: ");
	scanf_s("%d", &e);
	printf("���: %d", e % 2 == 0);
	return 0;
}