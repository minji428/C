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
		printf("=== ��ȭ�� �¼����� ===\n");
		printf("1.�����ϱ�\n");
		printf("2.�����ϱ�\n");

		int choice = 0;
		printf("�޴� ���� : ");
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
			printf("�¼���ȣ �Է�(1~5) :");
			scanf_s("%d", &idx);

			if (mega.count < idx || idx < 1) {
				printf("�Է¿���\n");
				continue;
			}
			idx -= 1;

			if (mega.seat[idx] == 0) {
				mega.seat[idx] = 1;
			}
			else if (mega.seat[idx] == 1) {
				printf("�ش� �¼��� ������ �� �����ϴ�.\n");
			}
		}
		else if (choice == 2) {
			break;
		}
	}


	system("pause");
}
