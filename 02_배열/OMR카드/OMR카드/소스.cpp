#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main(void) {
	srand(time(0));

	int omr[] = { 1, 5, 3, 2, 5 };		//��� ���
	int me[5] = { 0 };			//�л� ���

	int score = 0;
	for (int i = 0; i < 5; i++) {
		me[i] = rand() % 5 + 1;
		if (me[i] == omr[i]) {
			printf("o");
			score = score + 20;
		}
		else {
			printf("x");
		}
	}printf("\n");

	printf("����: %d", score);
}