#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int me;
	printf("1.가위 2.바위 3.보"); printf("\n");
	scanf_s("%d", &me);
	int com = rand() % 3 + 1;
	int 가위 = 1, 바위 = 2, 보 = 3;

	if (me == com) {
		printf("비김");
	}
	else if (me == 1 && com == 2) {
		printf("졌다");
	}
	else if (me == 2 && com == 3) {
		printf("졌다");
	}
	else if (me == 3 && com == 1) {
		printf("졌다");
	}
	else {
		printf("이김");
	}
	
	return 0;
}