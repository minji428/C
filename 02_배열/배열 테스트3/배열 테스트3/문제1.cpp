#include <stdio.h>

int main() {
	//���ڸ� �ϳ� �Է¹ް� �Ʒ� �迭�� ������ �ϳ��� �о �� �� �ڿ� ����
	int a[5] = { 10,20,30,40,50 };
	int x;
	int idx = 0;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &x);
	
	/* a[0] = a[1];
	a[1] = a[2];
	a[2] = a[3];
	a[3] = a[4];
	a[4] = x; */

	for (int i = 0; i < 4; i++) {
		a[i] = a[i + 1];
	}
	a[4] = x;


	int i = 0;
	while (i < 5) {
		printf("%d ", a[i]);
		i += 1;
	}
}