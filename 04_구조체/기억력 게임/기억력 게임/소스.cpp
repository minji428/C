#include <stdio.h>
#include <Windows.h>
#include <time.h>

struct Memory {
	int count;
	int* front;
	int* back;

};

void main() {

	srand(time(0));

	Memory m = { 0 };
	m.count = 10;
	m.front = new int[m.count];
	m.back = new int[m.count];

	int j = 1;
	for (int i = 0; i < m.count; i++) {
		if (i % 2 == 0 && i != 0) {
			j += 1;
		}
		m.front[i] = j;
	}

	for (int i = 0; i < m.count; i++) {
		m.back[i] = 0;
	}
	for (int i = 0; i < 1000; i++) {
		int r = rand() % m.count;
		int tmp = m.front[0];
		m.front[0] = m.front[r];
		m.front[r] = tmp;
	}
	int cnt = 0;
	while (1) {
		printf("front = [ ");
		for (int i = 0; i < m.count; i++) {
			printf("%d ", m.front[i]);
		}
		printf("]"); printf("\n");
		printf("back = [ ");
		for (int i = 0; i < m.count; i++) {
			printf("%d ", m.back[i]);
		}
		printf("]"); printf("\n");

		int idx1 = 0;
		printf("ÀÎµ¦½º1 ÀÔ·Â[1~`0]: ");
		scanf_s("%d", &idx1);
		idx1 -= 1;

		int idx2 = 0;
		printf("ÀÎµ¦½º2 ÀÔ·Â[1~10]: ");
		scanf_s("%d", &idx2);
		idx2 -= 1;

		if (m.front[idx1] == m.front[idx2]) {
			m.back[idx1] = m.front[idx1];
			m.back[idx2] = m.front[idx2];
		}
		if (cnt == 5) {
			break;
		}
	}

}