#include <stdio.h>
#include <Windows.h>

int main(void) {
	int t[7] = {};
	int c = 0;
	int i = 0;
	while (i == 0) {
		printf("예매할 자리를 선택하세요"); printf("\n");
		int j = 0;
		while (j < 7) {
			if (t[j] == 1) {
				printf("x ");
			}
			else {
				printf("o ");
			}
			j = j + 1;
		}
		printf("\n");
		int sel = 0;
		scanf_s("%d", &sel);
		if (t[sel] == 0) {
			t[sel] = 1;
			c = c + 1;
		}
		else {
			printf("이미 예매된 자리입니다.\n");
		}

		if (c == 7) {
			printf("모든 자리가 예매되었습니다");
			i = 1;
		}

		
	}printf("\n");
	int j = 0;
	while (j < 7) {
		if (t[j] == 1) {
			printf("x ");
		}
		else {
			printf("o ");
		}
		j = j + 1;
	}



	return 0;
}