#include <stdio.h>

int main() {
	//8�� ������ 5�� ���� �� �� 150�� ���� ����� ���� ���Ͻÿ�
	int i = 0;
	int j = 0;
	while (i < 150) {
		if (i % 8 == 5) {
			j = i;
		}
		i += 1;
	}
	printf("%d", j);
}