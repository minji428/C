#include <stdio.h>

int main() {
	//8�� ����� ���������� 5�� ���
	int i = 0;
	int count = 0;
	while (i < 100) {
		if (i % 8 == 0) {
			printf("%d ", i);
			count += 1;

			if (count == 5) {
				break;
			}
		}
		i += 1;
	}
}