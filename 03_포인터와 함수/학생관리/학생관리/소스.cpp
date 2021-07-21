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
		printf("학번\t국어\t수학"); printf("\n");
		for (int i = 0; i < count; i++) {
			printf("[%d] > %d점\t%d점", pp[i][0], pp[i][1], pp[i][2]); printf("\n");
		}
		printf("[1]추가"); printf("\n");
		printf("[2]삭제"); printf("\n");

		printf("메뉴 선택: ");
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
			printf("삭제할 학번을 입력하세요 : ");
			int del_hakbun = 0;
			scanf_s("%d", &del_hakbun);

			int del_idx = -1;
			for (int i = 0; i < count; i++) {
				if (pp[i][0] == del_hakbun) {
					del_idx = i;
				}
			}

			if (del_idx == -1) {
				printf("[메세지]해당 학번은 존재하지 않습니다.\n");
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
				delete[] temp[del_idx]; // 키포인트 
				delete[] temp;
			}

			count = count - 1;

		}

	}
	
}