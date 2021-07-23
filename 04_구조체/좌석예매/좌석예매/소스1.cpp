#include <Windows.h>
#include <stdio.h>

struct Movie {
	int* seat;
	int count;
};

void main() {

	Movie mega = { 0 };
	mega.count = 5;
	mega.seat = new int[mega.count];
	for (int i = 0; i < mega.count; i++) {
		mega.seat[i] = 0;
	}

	while (1) {
		printf("=== 영화관 좌석예매 ===\n");
		printf("1.예매하기\n");
		printf("2.종료하기\n");

		int choice = 0;
		printf("메뉴 선택 : ");
		scanf_s("%d", &choice);

		if (choice == 1) {
			for (int i = 0; i < mega.count; i++) {
				if (mega.seat[i] == 0) {
					printf("[X]");
				}
				else if (mega.seat[i] == 1) {
					printf("[O]");
				}
			}
			printf("\n");

			int idx = 0;
			printf("좌석번호 입력(1~5) :");
			scanf_s("%d", &idx);

			if (mega.count < idx || idx < 1) {
				printf("입력오류\n");
				continue;
			}
			idx -= 1;

			if (mega.seat[idx] == 0) {
				mega.seat[idx] = 1;
			}
			else if (mega.seat[idx] == 1) {
				printf("해당 좌석은 예매할 수 없습니다.\n");
			}
		}
		else if (choice == 2) {
			break;
		}
	}


	system("pause");
}
