#include <stdio.h>

// ���� 1) �Ʒ� �迭 a ���� ���� �Է��� ���� ���� b �� ���� 
int main() {
	int a[5] = { 10,20,30,40,50 };
	int b[5] = { 0,0,0,0,0 };

	int check = -1;
	int idx;
	int k = 0;
	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d", &idx);

	for (int i = 0; i < 5; i++) {
		if (idx == a[i]) {
			check = i;
		}
		else {
			b[k] = a[i];
			k++;
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", b[i]);
	}

}