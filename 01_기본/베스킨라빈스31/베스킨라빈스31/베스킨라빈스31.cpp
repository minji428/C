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
			printf("[p1] 1~3�� �Է��ϼ���: "); printf("\n");
			scanf_s("%d", &p1);

			if (p1 > 0 && p1 < 4) {		//1~3�� �Է�
				br = br + p1;

				turn = 1;
			}
			else {
				printf("�ٽ� �Է��ϼ���: "); printf("\n");		//1~3�� �ƴ� �ٸ� ���� �Է����� �� �ٽ� �Է��ϼ���
			}
			/*if (p1 > 3) {
				
				scanf_s("%d", &p1);
			}*/
			
		}
		else if (turn == 1) {
			printf("[p2] 1~3�� �Է��ϼ���: "); printf("\n");
			scanf_s("%d", &p2);

			if (p2 > 0 && p2 < 4) {
				br = br + p2;

				turn = 0;
			}
			else {
				printf("�ٽ� �Է��ϼ���: "); printf("\n");
			}
			
		}
		if (br >= 31) {
			if (turn == 0) {
				printf("p1�¸�"); printf("\n");
			}
			else if (turn == 1) {
				printf("p2�¸�"); printf("\n");
			}
			run = 0;
		}
		
	}
	return 0;
}