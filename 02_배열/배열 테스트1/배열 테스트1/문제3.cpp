#include <stdio.h>

int main() {
	//���� ����Ʈ�� �̿��ؼ� a�� ���� Ȧ���� b�� ����(��ġ�� ������ ��ġ�� ����)
	int a[5] = { 10,4,5,3,1 };
	int b[5] = { 0,0,0,0,0 };

	int i = 0;
	while (i < 5) {
		if (a[i] % 2 == 1) {
			b[i] = a[i];
		}
		i += 1;
	}
	i = 0;
	while (i < 5) {
		printf("%d ", b[i]);
		i += 1;
	}
}