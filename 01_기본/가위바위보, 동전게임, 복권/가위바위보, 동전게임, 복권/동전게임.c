#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int coin = rand() % 10 + 1;
	printf("\n");
	printf("==========��������=========="); printf("\n");
	printf("ġƮŰ: %d", coin);
	printf("\n");
	printf("1)Ȧ 2)¦"); printf("\n");

	int sel; scanf_s("%d", &sel);

	if (sel == 1 && coin % 2 + 1) {
		printf("����");
	}
	else if (sel == 2 && coin % 2 == 0) {
		printf("����");
	}
	else {
		printf("��");
	}
	return 0;
}