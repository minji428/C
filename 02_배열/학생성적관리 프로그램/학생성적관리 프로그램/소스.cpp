#include <Windows.h>
#include <stdio.h>  

int main(void)
{
	int num[100];
	int score[100];
	int count = 0;

	int k = 0;
	while (1) {
		printf("== 학생 점수 관리 프로그램 =="); printf("\n");
		printf("1.추가 2.출력 3.삭제 "); printf("\n");
		int sel;
		scanf_s("%d", &sel);
		if (sel == 1) {
			printf("[추가]%d번 학생 점수를 입력하세요", 10000 + k); printf("\n");
			int sco;
			scanf_s("%d", &sco);
			score[count] = sco;
			num[count] = 10000 + k;
			k += 1;
			count = count + 1;
		}
		else if (sel == 2) {
			int n = 0;
			while (n < count) {
				printf("%d번, %d점", num[n], score[n]); printf("\n");
				n += 1;
			}
		}
		else if (sel == 3) {
			int n = 0;
			while (n < count) {
				printf("%d번, %d점", num[n], score[n]); printf("\n");
				n += 1;
			}
			printf("[삭제]삭제할 번호를 입력하세요");
			int del_num;
			scanf_s("%d", &del_num);

			n = 0;
			int remove_index = -1;
			while (n < count) {
				if (del_num == num[n]) {
					remove_index = n;
				}
				n += 1;
			}
			count -= 1;
		}


	}
}