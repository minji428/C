#include <stdio.h>

int main() {
	//9�� ����� ���� �ڸ��� 6�� ù��° ��� ���
	int i = 0;
	while (i < 1000) {
		if (i % 9 == 0) {
			if (i / 10 == 6) {
				printf("%d", i);
				i = 1000;
			}
		}
		i += 1;
	}
}