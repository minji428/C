#include <stdio.h>
#include <Windows.h>
#include <time.h>

void student(int*p1,int*p2) {
	for (int i = 0; i < 10; i++) {
		int r = rand() % 100 + 1;

		printf("%d�� : %d�� : ", i+1, r);
		if (r >= 60) {
			p1[0] += 1;
			printf("�հ�");
		}
		if (r < 60) {
			printf("���հ�");
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

	printf("�հ� �� : %d", count); printf("\n");
	printf("1�� ���� : %d", max); printf("\n");
}