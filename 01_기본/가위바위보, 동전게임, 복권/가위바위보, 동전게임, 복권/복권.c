#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	printf("==========∫π±«=========="); printf("\n");
	printf("1.±‹±‚ 2.¡æ∑·"); printf("\n");
	int sel;
	scanf_s("%d", &sel);

	int lotto = rand() % 10;
	printf("ƒ°∆Æ≈∞: %d", lotto); printf("\n");
	if (sel == 1) {
		if (lotto >= 3) {
			printf("≤Œ");  printf("\n");
		}
		else {
			printf("¥Á√∑");
		}
	}

	return 0;
}