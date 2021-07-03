#include <Windows.h>
#include <stdio.h>

int main()
{
	int i = 0;
	while (i < 3) {
		int j = 0;
		while (j < 3) {
			printf("[i:%d, j:%d]\n", i, j);
			j = j + 1;
		}
		i = i + 1;
	}

	//±¸±¸´Ü Ãâ·Â


	i = 1;
	while (i <= 9) {
		printf("=== %d´Ü ===\n", i);
		int j = 1;
		while (j <= 9) {
			printf("%d X %d = %d\n", i, j, i * j);
			j = j + 1;
		}
		i = i + 1;
	}

}
