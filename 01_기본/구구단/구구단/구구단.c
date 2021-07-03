#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));		//rand();
						//구구단 문제 랜덤 출제후 정답입력후 결과출력

	int a = rand() % 8 + 2;
	int b = rand() % 9 + 1;
	int c = a * b;

	printf("%d * %d = ", a, b);
	int d;
	scanf_s("%d", &d);
	if (d == c) {
		printf("정답");
	}
	if (d != c) {
		printf("땡");
	}


	return 0;
}