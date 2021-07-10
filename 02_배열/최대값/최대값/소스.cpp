#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int score[5] = { 10,140,60,220,15 };
	int max_val;
	max_val = score[0];

	int n = 0;
	int max_index = 0;
	while (n < 5) {
		if (max_val < score[n]) {
			max_val = score[n];
			max_index = n;
		}
		n += 1;
	}
	printf("max==> %d", max_val);
	printf("\n");
	int num[5] = { 1001,1002,1003,1004,1005 };
	printf("1µî==>%d", max_index[num]);

	return 0;
}