#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	printf("==========����=========="); printf("\n");
	printf("1.�ܱ� 2.����"); printf("\n");
	int sel;
	scanf_s("%d", &sel);

	int lotto = rand() % 10;
	printf("ġƮŰ: %d", lotto); printf("\n");
	if (sel == 1) {
		if (lotto >= 3) {
			printf("��");  printf("\n");
		}
		else {
			printf("��÷");
		}
	}

	return 0;
}