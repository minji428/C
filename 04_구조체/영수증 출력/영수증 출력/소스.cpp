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

		printf("---롯데리아---"); printf("\n");
		printf("1.[세트]불고기버거 : %d원", burger.prices[0]); printf("\n");
		printf("2.[단품]불고기버거 : %d원", burger.prices[1]); printf("\n");
		printf("3.콜라 : %d", burger.prices[2]); printf("\n");
		printf("4.종료하기"); printf("\n");

		int choice = 0;
		printf("메뉴 선택 : ");
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
				printf("---영수증---"); printf("\n");
				printf("[세트]불고기버거 : %d개", burger.counts[0]); printf("\n");
				printf("[단품]불고기버거 : %d개", burger.counts[1]); printf("\n");
				printf("콜라 : %d개", burger.counts[2]); printf("\n");
				printf("총금액 : %d원", total); printf("\n");
				printf("잔돈은 %d원 입니다", charge); printf("\n");
			}
			else {
				printf("현금이 부족합니다");
			}
			break;
		}
	}
}