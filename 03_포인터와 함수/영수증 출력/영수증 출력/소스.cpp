#include <stdio.h>
#include <Windows.h>

void print_menu(int* prices) {
	printf("---�Ե�����---"); printf("\n");
	printf("1.[��Ʈ]�Ұ�����: %d", prices[0]); printf("\n");
	printf("2.[��ǰ]�Ұ�����: %d", prices[1]); printf("\n");
	printf("3.�ݶ�: %d", prices[2]); printf("\n");
	printf("4.�����ϱ�"); printf("\n");
}

int sel_menu(int count) {
	int choice = 0;
	printf("�޴� ����: ");
	scanf_s("%d", &choice);

	if (4 < choice || choice < 1) {
		choice = -1;
	}
	return choice;
}
void choice1(int* counts) {
	counts[0] += 1;
}
void choice2(int* counts) {
	counts[1] += 1;
}
void choice3(int* counts) {
	counts[2] += 1;
}
int choice4(int* prices, int* counts, int count, int money) {
	int total = prices[0] * counts[0] + prices[1] * counts[1] + prices[2] * counts[2];
	int charge = money - total;
	if (charge >= 0) {
		printf("---������---"); printf("\n");
		printf("1.[��Ʈ]�Ұ�����: %d��", counts[0]); printf("\n");
		printf("2.[��ǰ]�Ұ�����: %d��", counts[1]); printf("\n");
		printf("3.�ݶ�: %d��", counts[2]); printf("\n");
		printf("�ѱݾ�: %d��", money); printf("\n");
		printf("�ܵ��� %d�� �Դϴ�", charge); printf("\n");
	}
	else {
		printf("������ �����մϴ�"); printf("\n");
	}
	return charge;
}

int run(int* prices, int* counts, int count, int money) {
	while (1) {
		print_menu(prices);
		int choice = sel_menu(count);
		if (choice == -1) {
			printf("�Է¿���"); printf("\n");
			continue;
		}
		if (choice == 1) {
			choice1(&counts[0]);
		}
		else if (choice == 2) {
			choice2(&counts[0]);
		}
		else if (choice == 3) {
			choice3(&counts[0]);
		}
		else if (choice == 4) {
			money = choice4(prices, counts, count, money);
			break;
		}
	}

	return money;
}




void main() {

	int count = 3;
	int counts[3] = { 0 };
	int prices[3] = { 8700,4200,1500 };

	int money = 20000;

	money = run(&prices[0], &counts[0], count, money);
	printf("%d��", money); printf("\n");
}