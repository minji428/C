#include <stdio.h>
#include <Windows.h>

int main(void) {

	int lotto[] = { 3,0,3,3,3,3,0 };

	int win = 0;
	for (int i = 0; i < 5; i++) {
		if (lotto[i] == 3 && lotto[i + 1] == 3 && lotto[i + 2] == 3) {
			win = 1;
		}
	}

	if (win == 1) {
		printf("´çÃ·");
	}
	else {
		printf("Å»¶ô");
	}
}