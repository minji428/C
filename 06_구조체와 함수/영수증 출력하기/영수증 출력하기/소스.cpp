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
		printf("--롯데리아--"); printf("\n");
		printf("1.[세트]불고기버거 : %d원", prices[0]); printf("\n");
		printf("2.[단품]불고기버거 : %d원", prices[1]); printf("\n");
		printf("3.콜라 : %d원", prices[2]); printf("\n");
		printf("4.종료하기"); printf("\n");
	}

	int sel_menu() {
		int choice = 0;
		printf("메뉴 선택 : ");
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
			printf("--영수증--"); printf("\n");
			printf("1.[셋트]불고기버거 : %d개", counts[0]); printf("\n");
			printf("2.[단품]불고기버거 : %d개", counts[1]); printf("\n");
			printf("3.콜라 : %d개", counts[2]); printf("\n");
			printf("총금액 : %d원", total); printf("\n");
			printf("잔돈은 %d원 입니다.", charge); printf("\n");
		}
		else {
			printf("현금이 부족합니다."); printf("\n");
		}
		
	}
	void run() {
		init();
		while (1) {
			print_menu();
			int choice = sel_menu();
			if (choice == -1) {
				printf("입력오류\n");
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