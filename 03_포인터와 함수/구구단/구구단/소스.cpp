#include <stdio.h>
#include <Windows.h>
#include <time.h>

void gugudan(int* p) {
	for (int i = 0; i < 3; i++) {
		int x = rand() % 8 + 2;
		int y = rand() % 9 + 1;

		int answer = x * y;

		printf("%d X %d = ", x, y);
		int my_answer = 0;
		scanf_s("%d", &my_answer);

		if (answer == my_answer) {
			printf("정답"); printf("\n");
			p[0] += 1;
		}
		else {
			printf("오답"); printf("\n");
		}
	}
}

void main() {

	srand(time(0));


	int c = 0;
	gugudan(&c);

	printf("정답개수 : %d", c); printf("\n");

}