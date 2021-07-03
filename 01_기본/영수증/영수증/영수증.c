#include <stdio.h>

int main(void)
{
	int money = 10000;
	int n = 0;
	int c1 = 0, c2 = 0, c3 = 0;
	while (n < 5) {
		printf("=====롯데리아====="); printf("\n");
		printf("1.햄버거 200원"); printf("\n");
		printf("2.콜라 300원"); printf("\n");
		printf("3.감자 400원"); printf("\n"); printf("\n");
		printf("번호를 입력하세요: ");
		int sel;
		scanf_s("%d", &sel);

		if (sel == 1) {
			c1 = c1 + 1;
			money = money - 200;
		}
		else if (sel == 2) {
			c2 = c2 + 1;
			money = money - 300;
		}
		else if (sel == 3) {
			c3 = c3 + 1;
			money = money - 400;
		}
	
		n = n + 1;
	}

	printf("햄버거 %d개, 콜라 %d개, 감자 %d개, 거스름돈: %d원", c1, c2, c3, money);
	printf("\n");
	
	return 0;
}