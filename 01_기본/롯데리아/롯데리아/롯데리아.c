#include <stdio.h>

int main(void)
{
	int money ;
	printf("돈을 입력하세요: ");
	scanf_s("%d", &money);

	printf("=====롯데리아====="); printf("\n");
	printf("1. 햄버거 500원"); printf("\n");
	printf("2. 콜라 700원"); printf("\n");
	printf("3. 감자 1300원"); printf("\n"); printf("\n");

	int sel;
	printf("번호를 입력하세요: "); printf("\n");
	scanf_s("%d", &sel);
	
	if (sel == 1) {
		if (money < 500) {
			printf("돈이 부족합니다"); printf("\n");
		}
		if (money >= 500) {
			money = money - 500;
			printf("햄버거를 주문했습니다."); printf("\n");
			printf("거스름돈: %d", money); printf("\n");
		}
	}


	if (sel == 2) {
		if (money < 700) {
			printf("돈이 부족합니다");  printf("\n");
		}
		if (money >= 700) {
			printf("콜라를 주문했습니다.");  printf("\n");
			money = money - 700;
			printf("거스름돈: %d", money); printf("\n");
		}
	}

	if (sel == 3) {
		if (money < 1300) {
			printf("돈이 부족합니다.");  printf("\n");
		}
		if (money >= 1300) {
			printf("감자를 주문했습니다.");  printf("\n");
			money = money - 1300;
			printf("거스름돈: %d", money); printf("\n");
		}
	}
	return 0;
}