#include <Windows.h>
#include <stdio.h>

struct Store {
	int count;
	int* counts;
	int* prices;
	int money;

	void init() {
		money = 20000;
		count = 3;
		counts = new int[count];
		for (int i = 0; i < count; i++) {
			counts[i] = 0;
		}
		prices = new int[count];
		prices[0] = 8700;
		prices[1] = 4200;
		prices[2] = 1500;
	}

	void print_menu() {
		printf("--�Ե�����--"); printf("\n");
		printf("1.[��Ʈ]�Ұ����� : %d��", prices[0]); printf("\n");
		printf("2.[��ǰ]�Ұ����� : %d��", prices[1]); printf("\n");
		printf("3.�ݶ� : %d��", prices[2]); printf("\n");
		printf("4.�����ϱ�"); printf("\n");
	}

	int sel_menu() {
		int choice = 0;
		printf("�޴� ���� : ");
		scanf_s("%d", &choice);
		if (4 < choice || choice < 1) {
			choice = -1;
		}
		return choice;
	}
	void choice1() {
		counts[0] += 1;
	}
	void choice2() {
		counts[1] += 1;
	}
	void choice3() {
		counts[2] += 1;
	}
	void choice4() {
		int total = prices[0] * counts[0] + prices[1] * counts[1] + prices[2] * counts[2];
		int charge = money - total;

		if (charge >= 0) {
			printf("--������--"); printf("\n");
			printf("1.[��Ʈ]�Ұ����� : %d��", counts[0]); printf("\n");
			printf("2.[��ǰ]�Ұ����� : %d��", counts[1]); printf("\n");
			printf("3.�ݶ� : %d��", counts[2]); printf("\n");
			printf("�ѱݾ� : %d��", total); printf("\n");
			printf("�ܵ��� %d�� �Դϴ�.", charge); printf("\n");
		}
		else {
			printf("������ �����մϴ�."); printf("\n");
		}
		
	}
	void run() {
		init();
		while (1) {
			print_menu();
			int choice = sel_menu();
			if (choice == -1) {
				printf("�Է¿���\n");
				continue;
			}
			if (choice == 1) { choice1(); }
			else if (choice == 2) { choice2(); }
			else if (choice == 3) { choice3(); }
			else if (choice == 4) {
				choice4();
				break;
			}
		}
	}
	
};

void main() {
	Store burger = { 0 };
	burger.run();


}