#include <stdio.h>

int main() {
	//50���� 100���� �ڿ����߿��� 9�� ����� ��� ��Դϱ�?
	int i = 50;
	int count = 0;
	while (i < 100) {
		if (i % 9 == 0) {
			count += 1;
			printf("%d ", i);
		}
		i += 1;
	}
	printf("\n");
	printf("%d��", count);
}