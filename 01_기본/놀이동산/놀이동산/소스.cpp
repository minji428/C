#include <stdio.h>

int main(void)
{
	int money;
	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &money);

	printf("=====�Ե�����====="); printf("\n");
	printf("1. �ܹ��� 500��"); printf("\n");
	printf("2. �ݶ� 700��"); printf("\n");
	printf("3. ���� 1300��"); printf("\n"); printf("\n");

	int sel;
	printf("��ȣ�� �Է��ϼ���: "); printf("\n");
	scanf_s("%d", &sel);

	if (sel == 1) {
		if (money < 500) {
			printf("���� �����մϴ�"); printf("\n");
		}
		if (money >= 500) {
			money = money - 500;
			printf("�ܹ��Ÿ� �ֹ��߽��ϴ�."); printf("\n");
			printf("�Ž�����: %d", &money); printf("\n");
		}
	}

}