#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

	srand(time(NULL));

	int number[25] = { 0 };
	int dest, sour, temp;
	int inputNum;
	int bingoCount = 0;
	

	for (int i = 0; i < 25; i++) {
		number[i] = i;
	}
	for (int i = 0; i < 1000; i++) {
		int dest = rand() % 25;
		int sour = rand() % 25;

		int temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}

	while (true) {
		system("cls");
		printf("�������"); printf("\n");
		printf("���� ī��Ʈ : %d", bingoCount); printf("\n");

			for (int i = 0; i < 25; i++) {
				if (number[i] == 35) {
					printf("#"); printf("\t");
				}
				else {
					printf("%d", number[i]); printf("\t");
				}
				if ((i + 1) % 5 == 0) {
					printf("\n");
					printf("\n");
				}
			}
			printf("���ڸ� �Է��ϼ���: ");
			scanf_s("%d", &inputNum);

			for (int i = 0; i < 25; i++) {
				if (number[i] == inputNum) {
					number[i] = 35;
				}
			}
			bingoCount = 0;

			//����
			for (int i = 0; i < 5; i++) {
				if (number[i * 5] == 35 &&
					number[i * 5 + 1] == 35 &&
					number[i * 5 + 2] == 35 &&
					number[i * 5 + 3] == 35 &&
					number[i * 5 + 4] == 35) {
					bingoCount++;
				}
			}

			//����
			for (int i = 0; i < 5; i++) {
				if (number[i + 5 * 1] == 35 &&
					number[i + 5 * 2] == 35 &&
					number[i + 5 * 3] == 35 &&
					number[i + 5 * 4] == 35) {
					bingoCount++;
				}
			}

			//���ʴ밢
			if (number[0] == 35 &&
				number[6] == 35 &&
				number[12] == 35 &&
				number[16] == 35 &&
				number[20] == 35) {
				bingoCount++;
			}

			//������ �밢
			if (number[4] == 35 &&
				number[8] == 35 &&
				number[12] == 35 &&
				number[16] == 35 &&
				number[20] == 35) {
				bingoCount++;
			}

			if (bingoCount == 3) {
				break;
			}
		}
	return 0;
}


