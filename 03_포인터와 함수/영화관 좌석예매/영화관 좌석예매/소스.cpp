#include <stdio.h>
#include <Windows.h>

void print_menu() {
	printf("--- ��ȭ�� �¼�����---"); printf("\n");
	printf("1.�����ϱ�"); printf("\n");
	printf("2.�����ϱ�"); printf("\n");
}
int sel_menu() {
	int choice = 0;
	printf("�޴� ����: ");
	scanf_s("%d", &choice);
	if (2 < choice || choice < 0) {
		printf("�Է¿���"); printf("\n");
	}
	return choice;
}
void print_seat(int* p, int count) {
	for (int i = 0; i < count; i++) {
		if (p[i] == 0) {
			printf("[X]");
		}
		else {
			printf("[O]");
		}
	}
	printf("\n");
}
int sel_seat(int* p, int count) {
	int idx = 0;
	printf("�¼�����(1~5) : ");
	scanf_s("%d", &idx);
	idx -= 1;

	int check = idx;
	if (count - 1 < idx || idx < 0) {
		check = -1;
	}
	return check;
}
void run(int* p, int count) {
	while (1) {
		print_menu();

		int choice = sel_menu();
		if (choice == 1) {
			print_seat(p, count);
			int idx = sel_seat(p, count);

			if (idx == -1) {
				printf("�Է¿���"); printf("\n");
				continue;
			}
			if (p[idx] == 0) {
				p[idx] = 1;
			}
			else if (p[idx] == 1) {
				printf("�ش� ��ġ�� ������ �� �����ϴ�."); printf("\n");
			}
			else {
				printf("�Է¿���"); printf("\n");
			}
		}
		else if (choice == 2) {
			break;
		}

	}
}

void main() {
	int count = 5;
	int seat[5] = { 0 };

	run(&seat[0], count);
}