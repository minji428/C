#include <Windows.h> // system("cls") 콘솔화면 지우기
#include <stdio.h>

int main(void) {
	int p1arr[15] = { 0 };
	int p2arr[15] = { 0 };
	int p1 = 0;
	int p2 = 0;
	int turn = 0;

	p1arr[p1] = 1;
	p2arr[p2] = 2;
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
			p1arr[p1] = 1;
			turn = 1;

		}
		else if (turn == 1) {
			p2arr[p2] = 0;
			p2 += sel;
			p2arr[p2] = 2;
			turn=0;

		}
	}

	return 0;
}

