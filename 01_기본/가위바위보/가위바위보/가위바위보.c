#include <stdio.h>

int main(void)
{
	int p1, p2, ���� = 1, ���� = 2, �� = 3;

	printf("p1==> 1.���� 2.���� 3.��"); printf("\n");
	scanf_s("%d", &p1);

	printf("p2==> 1.���� 2.���� 3.��"); printf("\n");
	scanf_s("%d", &p2);

	if (p1 == p2) {
		printf("����");
	}

	if (p1 == 1 && p2 == 3) {
		printf("p1 �¸�");
	}

	if (p1 == 2 && p2 == 1) {
		printf("p1 �¸�");
	}
	
	if (p1 == 3 && p2 == 2) {
		printf("p1 �¸�");
	}

	return 0;
}