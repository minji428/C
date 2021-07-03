#include <stdio.h>

int main(void)
{
	int cash = 8000;
	int atm = 5000;
	printf("==== ATM ===="); printf("\n");
	printf("1.입금 2.출금"); printf("\n");

	int sel;
	scanf_s("%d", &sel);
	if (sel == 1){
		printf("입금 할 금액을 입력하세요: ");
		int money;
		scanf_s("%d", &money);
		if (money > cash) {
			printf("금액을 다시 입력하세요");
		}
		if (money <= cash) {
			cash = cash - money;
			atm = atm + money;

		}
	}

	if (sel == 2) {
		printf("출금 할 금액을 입력하세요: ");
		int money;
		scanf_s("%d", &money);
		if (money > atm) {
			printf("금액을 다시 입력하세요");
		}
		if (money <= atm) {
			cash = cash + money;
			atm = atm - money;
		}
	}

	printf("cash:%d, atm:%d", cash, atm);

	return 0;
}