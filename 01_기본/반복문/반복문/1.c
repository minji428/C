#include <stdio.h>

int main(void)
{
	int n = 10;
	while (n < 16) {
		printf("문제1) %d", n); printf("\n");
		n = n + 1;
	}

	n = 5;
	while (n > -6) {
		printf("문제2)%d", n); printf("\n");
		n = n - 1;
	}

	n = 1;
	while (n < 11) {
		if (n % 2 == 0) {
			printf("문제3)%d", n); printf("\n");
		}
		n = n + 1;
	}
}

