#include <stdio.h>

int main(void)
{
	int money = 10000;
	int n = 0;
	int c1 = 0, c2 = 0, c3 = 0;
	while (n < 5) {
		printf("=====�Ե�����====="); printf("\n");
		printf("1.�ܹ��� 200��"); printf("\n");
		printf("2.�ݶ� 300��"); printf("\n");
		printf("3.���� 400��"); printf("\n"); printf("\n");
		printf("��ȣ�� �Է��ϼ���: ");
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

	printf("�ܹ��� %d��, �ݶ� %d��, ���� %d��, �Ž�����: %d��", c1, c2, c3, money);
	printf("\n");
	
	return 0;
}