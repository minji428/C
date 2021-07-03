#include <stdio.h>

int main(void)
{
	int p1, p2, 가위 = 1, 바위 = 2, 보 = 3;

	printf("p1==> 1.가위 2.바위 3.보"); printf("\n");
	scanf_s("%d", &p1);

	printf("p2==> 1.가위 2.바위 3.보"); printf("\n");
	scanf_s("%d", &p2);

	if (p1 == p2) {
		printf("비겼다");
	}

	if (p1 == 1 && p2 == 3) {
		printf("p1 승리");
	}

	if (p1 == 2 && p2 == 1) {
		printf("p1 승리");
	}
	
	if (p1 == 3 && p2 == 2) {
		printf("p1 승리");
	}

	return 0;
}