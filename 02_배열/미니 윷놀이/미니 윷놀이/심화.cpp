#include <Windows.h> // system("cls") �ܼ�ȭ�� �����
#include <stdio.h>

int main(void) {
	int p1arr[15] = { 0 };
	int p2arr[15] = { 0 };
	int p1 = 0;
	int p2 = 0;
	int turn = 0;

	p1arr[p1] = 1;
	p2arr[p2] = 2;

	int p1win = 0;
	int p2win = 0;

	while (1) {
		int i = 0;
		i = 0;
		while (i < 15) {
			printf("%d", p1arr[i]);
			i += 1;
		}
		printf("\n");
		i = 0;
		while (i < 15) {			
			printf("%d", p2arr[i]);
			i += 1;
		}
		printf("\n");
		int sel;
		scanf_s("%d", &sel);

		system("cls");

		if (turn == 0) {
			p1arr[p1] = 0;
			p1 += sel;
			if (p1 > 14) {				//������ �������� �� ó������ �ٽ�
				p1win += 1;
				p1 = 0;	
			}
			p1arr[p1] = 1;
			
			if (p1win == 3) {				//p1�� 3���� �������� 'p1�¸�' ���
				printf("p1�¸�");
				break;
			}

			if (p1 == p2) {				//p1�� p2������ p2�� ó������ 
			p2arr[p2] = 0;
			p2 = 0;

			p2arr[p2] = 2;

			}
			turn = 1;
		}
		else if (turn == 1) {
			p2arr[p2] = 0;
			p2 += sel;
			if (p2 > 14) {
				p2win += 1;
				p2 = 0;			
			}
			p2arr[p2] = 2;

			if (p2win == 3) {
				printf("p2�¸�");
				break;
			}

			if (p2 == p1) {			//p2�� p1������ p1�� ó������
				p1arr[p1] = 0;
				p1 = 0;

				p1arr[p1] = 1;

			}

			
			turn = 0;

		}
		
	}

	return 0;
}

