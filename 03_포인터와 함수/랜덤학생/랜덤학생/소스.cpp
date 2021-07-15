#include <stdio.h>
#include <Windows.h>
#include <time.h>

void student(int*p1,int*p2) {
	for (int i = 0; i < 10; i++) {
		int r = rand() % 100 + 1;

		printf("%d번 : %d점 : ", i+1, r);
		if (r >= 60) {
			p1[0] += 1;
			printf("합격");
		}
		if (r < 60) {
			printf("불합격");
		}
		if (p2[0]<r) {
			p2[0] = r;
		} printf("\n");
	}
		
}


void main() {

	srand(time(0));

	int count = 0;
	int max = 0;

	student(&count, &max);

	printf("합격 수 : %d", count); printf("\n");
	printf("1등 점수 : %d", max); printf("\n");
}