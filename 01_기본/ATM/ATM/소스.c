#include <stdio.h>

int main(void)
{
	int cash = 8000;
	int atm = 5000;
	printf("==== ATM ===="); printf("\n");
	printf("1.�Ա� 2.���"); printf("\n");

	int sel;
	scanf_s("%d", &sel);
	if (sel == 1){
		printf("�Ա� �� �ݾ��� �Է��ϼ���: ");
		int money;
		scanf_s("%d", &money);
		if (money > cash) {
			printf("�ݾ��� �ٽ� �Է��ϼ���");
		}
		if (money <= cash) {
			cash = cash - money;
			atm = atm + money;

		}
	}

	if (sel == 2) {
		printf("��� �� �ݾ��� �Է��ϼ���: ");
		int money;
		scanf_s("%d", &money);
		if (money > atm) {
			printf("�ݾ��� �ٽ� �Է��ϼ���");
		}
		if (money <= atm) {
			cash = cash + money;
			atm = atm - money;
		}
	}

	printf("cash:%d, atm:%d", cash, atm);

	return 0;
}