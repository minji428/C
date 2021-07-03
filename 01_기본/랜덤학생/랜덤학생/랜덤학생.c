#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));

	int max = 0;
	int max_num = 0;
	for (int i = 1000; i < 1003; i++) {
		int ran = rand() % 101;
		printf("%d : %d", i, ran); printf("\n");
		
		if (max < ran) {
			max = ran;
			max_num = i;
		}
	}
	printf("1µî : %d : %d", max_num, max); printf("\n");

	return 0;
}