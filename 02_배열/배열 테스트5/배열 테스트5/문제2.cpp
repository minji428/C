#include <stdio.h>

// ���� 2) �Ʒ� �迭���� ���� �Է��� ��ȣ �� ���� d �� ���� 
int main() {
	int c[6] = { 1001,40,1002,65,1003,70 };
	int d[6] = { 0,0,0,0,0,0 };

	//int check = -1;
	int idx;
	int k = 0;
	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d", &idx);

	
	for (int i = 0; i < 6; i+=2) {
		if (idx != c[i]) {
			d[k] = c[i];
			d[k + 1] = c[i + 1];
			k += 2;
		}
	}
	for (int i = 0; i < 6; i++) {
		printf("%d ", d[i]);
	}
}