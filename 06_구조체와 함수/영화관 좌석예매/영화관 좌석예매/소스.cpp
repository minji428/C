#include <Windows.h>
#include <stdio.h>

struct Movie {
	int* seat;
	int count;

	void init() {
		count = 5;
		seat = new int[count];
		for (int i = 0; i < count; i++) {
			seat[i] = 0;
		}
	}
	void print_menu() {
		printf("---영화관 자리예매---"); printf("\n");
		printf("1.예매하기"); printf("\n");
		printf("2.종료하기"); printf("\n");
	}
	int sel_menu() {
		int choice = 0;
		printf("메뉴 선택 : ");
		scanf_s("%d", &choice);

		if (choice != 1 && choice != 2) {
			choice = -1;
		}
		return choice;
	}
	void print_seat() {
		for (int i = 0; i < count; i++) {
			if (seat[i] == 0) {
				printf("[X]");
			}
			else if (seat[i] == 1) {
				printf("[O]");
			}
		}printf("\n");
	}
	int sel_seat() {
		int idx = 0;
		printf("좌석번호 선택(1~5) : ");
		scanf_s("%d", &idx);

		idx -= 1;

		if (count - 1 < idx || idx < 0) {
			idx = -1;
		}
		return idx;
	}

	void run() {
		init();

		while (1) {
			print_menu();
			int choice = sel_menu();
			if (choice == 1) {
				print_seat();
				int idx = sel_seat();

				if (idx == -1) {
					printf("입력오류");
					continue;
				}
				if (seat[idx] == 0) {
					seat[idx] = 1;
				}
				else {
					printf("해당 좌석은 예매할 수 없습니다."); printf("\n");
				}
			}
			else if (choice == 2) {
				break;
			}
		}
	}
};



void main() {
	Movie mega = { 0 };
	mega.run();
}