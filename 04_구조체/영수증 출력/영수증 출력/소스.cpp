#include <stdio.h>
#include <Windows.h>

struct Store {
	int count;
	int* counts;
	int* prices;
	int money;
};

void main() {

	Store burger = { 0 };

	burger.money = 20000;
	burger.count = 3;

	burger.counts = new int[burger.count];
	for (int i = 0; i < burger.count; i++) {
		burger.counts[i] = 0;
	}

	burger.prices = new int[burger.count];
	burger.prices[0] = 8700;
	burger.prices[1] = 4200;
	burger.prices[2] = 1500;

	while (1) {

		printf("---�Ե�����---"); printf("\n");
		printf("1.[��Ʈ]�Ұ����� : %d��", burger.prices[0]); printf("\n");
		printf("2.[��ǰ]�Ұ����� : %d��", burger.prices[1]); printf("\n");
		printf("3.�ݶ� : %d", burger.prices[2]); printf("\n");
		printf("4.�����ϱ�"); printf("\n");

		int choice = 0;
		printf("�޴� ���� : ");
		scanf_s("%d", &choice);

		if (choice == 1) {
			burger.counts[0] += 1;
		}
		else if (choice == 2) {
			burger.counts[1] += 1;
		}
		else if (choice == 3) {
			burger.counts[2] += 1;
		}
		else if (choice == 4) {
			int total = burger.prices[0] * burger.counts[0] + burger.prices[1] * burger.counts[1] + burger.counts[2] * burger.prices[2];
			printf("total = %d", total); printf("\n");
			int charge = burger.money - total;
			if (charge >= 0) {
				printf("---������---"); printf("\n");
				printf("[��Ʈ]�Ұ����� : %d��", burger.counts[0]); printf("\n");
				printf("[��ǰ]�Ұ����� : %d��", burger.counts[1]); printf("\n");
				printf("�ݶ� : %d��", burger.counts[2]); printf("\n");
				printf("�ѱݾ� : %d��", total); printf("\n");
				printf("�ܵ��� %d�� �Դϴ�", charge); printf("\n");
			}
			else {
				printf("������ �����մϴ�");
			}
			break;
		}
	}
}