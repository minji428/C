#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int coin = rand() % 10 + 1;
	printf("\n");
	printf("==========µ¿Àü°ÔÀÓ=========="); printf("\n");
	printf("Ä¡Æ®Å°: %d", coin);
	printf("\n");
	printf("1)È¦ 2)Â¦"); printf("\n");

	int sel; scanf_s("%d", &sel);

	if (sel == 1 && coin % 2 + 1) {
		printf("Á¤´ä");
	}
	else if (sel == 2 && coin % 2 == 0) {
		printf("Á¤´ä");
	}
	else {
		printf("¶¯");
	}
	return 0;
}