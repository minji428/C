#include <stdio.h>

int main() {
	//28�� ��� �߿��� ���� ū ���ڸ� ���� ���Ͻÿ�
	int i = 0;
	int j = 0;
	while (i < 1000) {
		if (i % 28 == 0) {
			j = i;
		}
		i += 1;
	}
	printf("%d", j);
}