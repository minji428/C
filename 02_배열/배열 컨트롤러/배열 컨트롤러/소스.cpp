#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int score[5] = { 0 };
	int max = 5;
	int count = 0;

	int i = 0;
	while (i == 0) {
		printf("1.추가 2.삭제[번호] 3.삭제[값] 4.출력"); printf("\n");
		int sel = 0;
		scanf_s("%d", &sel);
		if (sel == 1) {
			if (count < max) {
				printf("[추가] 값을 입력하세요: ");
				int value = 0;
				scanf_s("%d", &value);

				score[count] = value;
				count = count + 1;
			}
			else {
				printf("[메세지]더 이상 추가할 수 없습니다");  printf("\n");
			}

		}

		else if (sel == 2) {
			printf("[삭제]인덱스를 입력하세요: ");
			int del_idx = 0;
			scanf_s("%d", &del_idx);

			if (0 <= del_idx && del_idx < count) {
				for (int i = del_idx; i < count - 1; i++) {
					score[i] = score[i + 1];
				}
				count = count - 1;
			}
		}

		else if (sel == 3) {
			printf("[삭제]값을 입력하세요 : ");
			int del_val = 0;
			scanf_s("%d", &del_val);

			int check = -1;
			for (int i = 0; i < count; i++) {
				if (score[i] == del_val) {
					check = i;
				}
			}

			if (check == -1) {
				printf("[메세지]해당 값은 존재하지 않습니다.\n");
			}
			else {
				for (int i = check; i < count - 1; i++) {
					score[i] = score[i + 1];
				}
				count = count - 1;
			}
			



		}


		else if (sel == 4) {
			for (int i = 0; i < count; i++) {
				printf("%d", score[i]);  printf("\n");
			}
		}
	}
}

