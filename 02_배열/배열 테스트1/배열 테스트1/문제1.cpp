#include <stdio.h>

int main() {
	//�� �迭�� �̿��ؼ� ��ü �� ���

	int a[5] = { 10,4,5,3,1 };

	int total = 0;
	int i = 0;
	while (i < 5) {
		total += a[i];
		i += 1;
	}
	printf("total : %d", total);
}