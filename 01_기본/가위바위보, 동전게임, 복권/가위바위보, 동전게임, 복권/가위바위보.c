#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int me;
	printf("1.���� 2.���� 3.��"); printf("\n");
	scanf_s("%d", &me);
	int com = rand() % 3 + 1;
	int ���� = 1, ���� = 2, �� = 3;

	if (me == com) {
		printf("���");
	}
	else if (me == 1 && com == 2) {
		printf("����");
	}
	else if (me == 2 && com == 3) {
		printf("����");
	}
	else if (me == 3 && com == 1) {
		printf("����");
	}
	else {
		printf("�̱�");
	}
	
	return 0;
}