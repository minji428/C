#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	for (int i = 0; i < 3; i++) {
		for (int n = 0; n < 4; n++) {
			printf("[i:%d]", i);
			printf("[n:%d]", n);
		}
		printf("\n");
	}
	int darr[3][4] = {
		{101,102,103,104},
		{201,202,203,204},
		{301,302,303,304}
	};

	int total1[3] = { 0 };
	int total2[4] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int n = 0; n < 4; n++) {
			total1[i] = total1[i] + darr[i][n];
			total2[n] = total2[n] + darr[i][n];
		}
	}
	printf("가로합: %d %d %d", total1[0], total1[1], total1[2]); printf("\n");
	printf("세로합: %d %d %d %d", total2[0], total2[1], total2[2], total2[3]); printf("\n");

	for (int i = 0; i < 100; i++) {
		int r1 = rand() % 3;
		int r2 = rand() % 4;
		int temp = darr[r1][r2];
		darr[r1][r2] = darr[0][0];
		darr[0][0] = temp;
	}

	printf("셔플 후"); printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int n = 0; n < 4; n++) {
			printf("%d ", darr[i][n]);
		}
		printf("\n");
	}
	
	int sort[12] = { 0 };
	int k = 0;
	for (int i = 0; i < 3; i++) {
		for (int n = 0; n < 4; n++) {
			sort[k] = darr[i][n];
			k += 1;
		}
	}
	for (int i = 0; i < 12; i++) {
		for (int n = 0; n < 12; n++) {
			if (sort[i] < sort[n]) {
				int temp = sort[i];
				sort[i] = sort[n];
				sort[n] = temp;
			}
		}
	}

	printf("정렬 후"); printf("\n");
	for (int i = 0; i < 12; i++) {
		printf("%d ", sort[i]);
	}
	printf("\n");
	k = 0;
	for (int i = 0; i < 3; i++) {
		for (int n = 0; n < 4; n++) {
			darr[i][n] = sort[k];
			k += 1;
		}
	}

	printf("정렬 후"); printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int n = 0; n < 4; n++) {
			printf("%d ", darr[i][n]);
		}
		printf("\n");
	}
}