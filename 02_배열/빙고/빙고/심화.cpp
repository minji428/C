#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

	srand(time(NULL));
	int number[50];
	int dest, sour, temp;

	int inputNum1, inputNum2;
	int bingoCount1 = 0, bingoCount2 = 0;
	int player1=0, player2=0;

	int turn1 = 0, turn2 = 0;

	for (int i=0; i < 50; i++) {
		number[i] = i;
	}

	for (int i = 0; i < 1000; i++) {
		int dest = rand() % 50;
		int sour = rand() % 50;

		int temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}

	while (true) {
		if (turn1 == player1) {
			system("cls");
			printf("빙고게임"); printf("\n");
			printf("빙고 카운트 : %d", bingoCount1); printf("\n");

			for (int i = 0; i < 50; i++) {
				if (number[i] == 500) {
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
			printf("숫자를 입력하세요: ");
			scanf_s("%d", &inputNum1);

			for (int i = 0; i < 50; i++) {
				if (number[i] == inputNum1) {
					number[i] = 500;
				}
			}
			bingoCount1 = 0;

			//가로
			for (int i = 0; i < 5; i++) {
				if (number[i * 5] == 500 &&
					number[i * 5 + 1] == 500 &&
					number[i * 5 + 2] == 500 &&
					number[i * 5 + 3] == 500 &&
					number[i * 5 + 4] == 500) {
					bingoCount1++;
				}
			}

			//세로
			for (int i = 0; i < 5; i++) {
				if (number[i + 5 * 1] == 500 &&
					number[i + 5 * 2] == 500 &&
					number[i + 5 * 3] == 500 &&
					number[i + 5 * 4] == 500) {
					bingoCount1++;
				}
			}

			//왼쪽대각
			if (number[0] == 500 &&
				number[6] == 500 &&
				number[12] == 500 &&
				number[16] == 500 &&
				number[20] == 500) {
				bingoCount1++;
			}

			//오른쪽 대각
			if (number[4] == 500 &&
				number[8] == 500 &&
				number[12] == 500 &&
				number[16] == 500 &&
				number[20] == 500) {
				bingoCount1++;
			}

			if (bingoCount1 == 3) {
				break;
			}



		}
	}

}