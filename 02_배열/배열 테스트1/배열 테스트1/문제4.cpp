#include <stdio.h>

int main() {
	//���� ����Ʈ�� �̿��ؼ� a �� ���� Ȧ���� c �� ����(��ġ�� �տ��� ����  ����)

	int a[5] = { 10,4,5,3,1 };
	int c[5] = { 0,0,0,0,0 };

	int i = 0;
	int i2 = 0;

	while (i < 5) {
		if (a[i] % 2 == 1) {
			c[i2] = a[i];
			i2 += 1;
		}
		i += 1;
	}
	i = 0;
	while (i < 5) {
		printf("[%d]", c[i]);
		i += 1;
	}
}