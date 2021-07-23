#include <stdio.h>
#include <Windows.h>
#include <time.h>

struct OMR {
	int count;
	int* answer;
	int* hgd;
};

void main() {
	srand(time(0));

	OMR m = { 0 };
	m.count = 5;

	m.answer = new int[m.count];
	m.answer[0] = 1;
	m.answer[1] = 3;
	m.answer[2] = 4;
	m.answer[3] = 2;
	m.answer[4] = 5;

	m.hgd = new int[m.count];

	printf("---巩力1"); printf("\n");
	printf("[ ");
	for (int i = 0; i < m.count; i++) {
		m.hgd[i] = rand() % 5 + 1;
		printf("%d ", m.hgd[i]);
	}printf("]");
	printf("\n");

	printf("---巩力2"); printf("\n");
	int* tmp = new int[m.count];
	for (int i = 0; i < m.count; i++) {
		if (m.answer[i] == m.hgd[i]) {
			tmp[i] = 1;
		}
		else {
			tmp[i] = 0;
		}
	}
	printf("[ ");
	for (int i = 0; i < m.count; i++) {
		printf("%d ", tmp[i]);
	}
	printf("]"); printf("\n");

	printf("---巩力3"); printf("\n");
	printf("[ ");
	for (int i = 0; i < m.count; i++) {
		if (tmp[i] == 1) {
			printf("O ");
		}
		else if (tmp[i] == 0) {
			printf("X ");
		}
	}
	printf("]");
	printf("\n");

	printf("---巩力4"); printf("\n");
	int cnt = 0;
	for (int i = 0; i < m.count; i++) {
		if (tmp[i] == 1) {
			cnt += 1;
		}
	}
	int score = cnt * 20;
	printf("己利 = %d痢", score); printf("\n");

}