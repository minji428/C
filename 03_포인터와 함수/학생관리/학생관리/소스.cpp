#include <stdio.h>
#include <Windows.h>
#include <time.h>

void main() {
	srand(time(0));
	

	/*int** pp = new int* [2];
	pp[0] = new int[3];
	pp[1] = new int[2];

	pp[0][0], pp[0][1], pp[0][2];
	pp[1][0], pp[1][1];*/



	int** pp = 0;
	int count = 0;

	int num = 0;

	int run = 1;
	while (run) {
		printf("�й�\t����\t����"); printf("\n");
		for (int i = 0; i < count; i++) {
			printf("[%d] > %d��\t%d��", pp[i][0], pp[i][1], pp[i][2]); printf("\n");
		}
		printf("[1]�߰�"); printf("\n");
		printf("[2]����"); printf("\n");

		printf("�޴� ����: ");
		int choice = 0;
		scanf_s("%d", &choice);
	

		if (choice == 1) {
			if (count == 0) {
				pp = new int* [1];

				pp[0] = new int[3];
			}
			else if (count > 0) {
				int** temp = pp;

				pp = new int* [count + 1];
				for (int i = 0; i < count; i++) {
					pp[i] = temp[i];
				}
				delete[]temp;
				pp[count] = new int[3];
			}

			int hakbun = 1000 + num;
			int kor = rand() % 100 + 1;
			int math = rand() % 100 + 1;

			pp[count][0] = hakbun;
			pp[count][1] = kor;
			pp[count][2] = math;

			count = count + 1;
			num = num + 1;
		}
		else if (choice == 2) {
			printf("������ �й��� �Է��ϼ��� : ");
			int del_hakbun = 0;
			scanf_s("%d", &del_hakbun);

			int del_idx = -1;
			for (int i = 0; i < count; i++) {
				if (pp[i][0] == del_hakbun) {
					del_idx = i;
				}
			}

			if (del_idx == -1) {
				printf("[�޼���]�ش� �й��� �������� �ʽ��ϴ�.\n");
				continue;
			}

			if (count == 1) {
				pp = 0;
				count = 0;
				num = 0;
			}
			else if (count > 1) {
				int** temp = pp;

				pp = new int* [count - 1];

				int j = 0;
				for (int i = 0; i < count; i++) {
					if (i != del_idx) {
						pp[j] = temp[i];
						j = j + 1;
					}
				}
				delete[] temp[del_idx]; // Ű����Ʈ 
				delete[] temp;
			}

			count = count - 1;

		}

	}
	
}