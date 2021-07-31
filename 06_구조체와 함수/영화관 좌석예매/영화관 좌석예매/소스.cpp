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
		printf("---��ȭ�� �ڸ�����---"); printf("\n");
		printf("1.�����ϱ�"); printf("\n");
		printf("2.�����ϱ�"); printf("\n");
	}
	int sel_menu() {
		int choice = 0;
		printf("�޴� ���� : ");
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
		printf("�¼���ȣ ����(1~5) : ");
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
					printf("�Է¿���");
					continue;
				}
				if (seat[idx] == 0) {
					seat[idx] = 1;
				}
				else {
					printf("�ش� �¼��� ������ �� �����ϴ�."); printf("\n");
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