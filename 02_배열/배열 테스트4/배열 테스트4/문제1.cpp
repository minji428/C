#include <stdio.h>

// ���� 1) �Ʒ� �迭 a �� b �� ���ؼ� ���� ���� ¦�� �϶��� c�� ���� 
int main() {
	int a[5] = { 10,20,30,40,50 };
	int b[5] = { 13,54,17,42,1 };
	int c[5] = { 0,0,0,0,0 };

	int k = 0;
	for (int i = 0; i < 5; i++) {
		if ((a[i] + b[i]) % 2 == 0) {
			c[k] = a[i] + b[i];
			k += 1;
		}
	}

	for (int i = 0; i < 5; i++) {
		/*if ((a[i] + b[i]) % 2 == 0) {
			c[i] = a[i] + b[i];
		}
		else {
			continue;
		}*/
		printf("%d ", c[i]);
	}
	return 0;
}
