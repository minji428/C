#include <stdio.h>
#include <Windows.h>

void main() {
	int* p = 0;
	int count = 0;

	int run = 1;
	while (run == 1) {
		for (int i = 0; i < count; i++) {
			printf("%d ", p[i]);
		}
		printf("\n");

		printf("[1]�߰�"); printf("\n");
		printf("[2]����"); printf("\n");
		printf("[3]����"); printf("\n");
		printf("[0]����"); printf("\n");

		int sel = 0;
		scanf_s("%d", &sel);

		if (sel == 0) {
			run = 0;
		}
		else if (sel == 1) {
			if (count == 0) {
				p = new int[1];
			}
			else if (count > 0) {
				int* temp = p;
				p = new int[count + 1];
				for (int i = 0; i < count; i++) {
					p[i] = temp[i];
				}
				delete[]temp;
			}
			// ���߰� 
			printf("[�߰�]���� �Է��ϼ���: ");
			int value = 0;
			scanf_s("%d", &value);

			p[count] = value;
			count = count + 1;
		}
		else if (sel == 2) {
			printf("[����]���� �Է��ϼ���: ");
			int value = 0;
			scanf_s("%d", &value);

			// ������ ���� ���� ��ȿ�� �˻�
			int del_idx = -1;
			for (int i = 0; i < count; i++) {
				if (p[i] == value) {
					del_idx = i;
				}
			}
			if (del_idx == -1) {
				printf("[�޼���]�Է��Ͻ� ���� �������� �ʽ��ϴ�"); printf("\n");
				continue;
			}
			if (count == 1) {
				p = 0;
			}
			else if (count > 1) {
				int* temp = p;

				p = new int[count - 1];
				int j = 0;
				for (int i = 0; i < count; i++) {
					if (i != del_idx) {
						p[j] = temp[i];
						j = j + 1;
					}
				}
				delete[]temp;
			}
			count = count - 1;
		}
		else if (sel == 3) {
			printf("[����]��ġ�� �Է��ϼ���: ");
			int add_index = 0;
			scanf_s("%d", &add_index);

			if (count < add_index || add_index < 0) {
				printf("[�޼���]�ش� ��ġ���� ������ �� �����ϴ�"); printf("\n");
				continue;
			}
			printf("[����]���� �Է��ϼ���: ");
			int add_value = 0;
			scanf_s("%d", &add_value);

			if (count == 0) {
				p = new int[1];
			}
			else if (count > 0) {
				int* temp = p;

				p = new int[count + 1];

				int j = 0;
				for (int i = 0; i < count; i++) {
					if (i != add_index) {
						p[i] = temp[j];
						j = j + 1;
					}
				}
				delete[] temp;
			}
		p[add_index] = add_value;
		count = count + 1;
		}

	}

}
