#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));		//rand();
						//������ ���� ���� ������ �����Է��� ������

	int a = rand() % 8 + 2;
	int b = rand() % 9 + 1;
	int c = a * b;

	printf("%d * %d = ", a, b);
	int d;
	scanf_s("%d", &d);
	if (d == c) {
		printf("����");
	}
	if (d != c) {
		printf("��");
	}


	return 0;
}