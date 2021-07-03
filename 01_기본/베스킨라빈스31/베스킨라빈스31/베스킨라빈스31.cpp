#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int p1 = 0, p2 = 0, br = 0;
	int turn = 0;
	int run = 1;
	
	while (run == 1) {
		if (turn == 0) {
			printf("[p1] 1~3을 입력하세요: "); printf("\n");
			scanf_s("%d", &p1);

			if (p1 > 0 && p1 < 4) {		//1~3만 입력
				br = br + p1;

				turn = 1;
			}
			else {
				printf("다시 입력하세요: "); printf("\n");		//1~3이 아닌 다른 수를 입력했을 때 다시 입력하세요
			}
			/*if (p1 > 3) {
				
				scanf_s("%d", &p1);
			}*/
			
		}
		else if (turn == 1) {
			printf("[p2] 1~3을 입력하세요: "); printf("\n");
			scanf_s("%d", &p2);

			if (p2 > 0 && p2 < 4) {
				br = br + p2;

				turn = 0;
			}
			else {
				printf("다시 입력하세요: "); printf("\n");
			}
			
		}
		if (br >= 31) {
			if (turn == 0) {
				printf("p1승리"); printf("\n");
			}
			else if (turn == 1) {
				printf("p2승리"); printf("\n");
			}
			run = 0;
		}
		
	}
	return 0;
}