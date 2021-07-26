#include <Windows.h>
#include <stdio.h>
#include <time.h>

struct Number {
	int count;
	int* p;
};

void main() {

	srand(time(0));

	Number n = { 0 };
	n.count = 5;
	n.p = new int[n.count];

	for (int i = 0; i < n.count; i++) {
		int r = rand() % 10 + 1;
		n.p[i] = r;

		int check = 1;

		for (int j = 0; j < i; j++) {
			if (n.p[i] == n.p[j]) {
				check = -1;
			}
		}
		if (check == -1) {
			i -= 1;
		}
	}
	for (int i = 0; i < n.count; i++) {
		printf("%d ", n.p[i]);
	}
	printf("\n");

}