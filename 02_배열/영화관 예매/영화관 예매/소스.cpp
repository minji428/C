#include <stdio.h>
#include <Windows.h>

int main(void) {
	int t[7] = {};
	int c = 0;
	int i = 0;
	while (i == 0) {
		printf("������ �ڸ��� �����ϼ���"); printf("\n");
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
			printf("�̹� ���ŵ� �ڸ��Դϴ�.\n");
		}

		if (c == 7) {
			printf("��� �ڸ��� ���ŵǾ����ϴ�");
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