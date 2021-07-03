#include <stdio.h>

int main(void)
{
	int n = 1;
	int total = 0;
	while (n < 6) {
		total = total + n;
		n = n + 1;
	}
	printf("ÇÕ: %d", total); printf("\n");

	n = 1;
	total = 0;
	while (n < 6) {
		if (n % 2 == 1) {
			total = total + n;
		}
		n = n + 1;
	}
	printf("È¦¼öÀÇ ÇÕ: %d", total); printf("\n");


	n = 1;
	total = 0;
	while (n < 6) {
		if (n % 2 == 1) {
			total = total + 1;
		}
		n = n + 1;
	}
	printf("È¦¼öÀÇ °¹¼ö: %d", total);
}