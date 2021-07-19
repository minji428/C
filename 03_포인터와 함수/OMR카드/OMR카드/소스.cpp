#include <stdio.h>
#include <Windows.h>
#include <time.h>

void print_arr(int* p, int count) {
	printf("[");
	for (int i = 0; i < count; i++) {
		printf(" %d ", p[i]);
	}
	printf("]"); printf("\n");
}

//����1 1~5 ������ ���� ���� 5�� ����
void test1(int* hgd, int count) {
	for (int i = 0; i < count; i++) {
		hgd[i] = rand() % 5 + 1;
	}
}

//����2 omr�� hgd�� ���� ������ 1, ������ 0���� ������ �迭 ����
int* test2(int* omr, int* hgd, int count) {
	int* answer = new int[count];
	for (int i = 0; i < count; i++) {
		if (omr[i] == hgd[i]) {
			answer[i] = 1;
		}
		if (omr[i] != hgd[i]) {
			answer[i] = 0;
		}
	}
	return answer;
}

//����3 ����2�� ���� ���Ϲ��� �迭�� ����ǥ ���
void test3(int* omr, int* hgd, int count) {
	int* answer = test2(omr, hgd, count);
	printf("[ ");
	for (int i = 0; i < count; i++) {
		if (omr[i] == hgd[i]) {
			printf("O ");
		}
		else {
			printf("X ");
		}
	}
	printf("]");
}

//����4 ���� ����
int test4(int* omr, int* hgd, int count) {
	int* answer = test2(omr, hgd, count);
	int cnt = 0;
	for (int i = 0; i < count; i++) {
		if (answer[i] == 1) {
			cnt += 1;
		}
	}
	return cnt * 20;
}

void main() {

	srand(time(0));

	int count = 5;
	
	int omr[5] = { 1,3,4,2,5 };
	int hgd[5] = { 0 };

	printf("OMR = 1, 3, 4, 2, 5"); printf("\n"); printf("\n");

	printf("--����1"); printf("\n");
	test1(&hgd[0], count);
	print_arr(&hgd[0], 5);

	printf("--����2"); printf("\n");
	int *p = test2(&omr[0], &hgd[0], count);
	print_arr(p, count);

	printf("--����3"); printf("\n");
	test3(&omr[0], &hgd[0], count);
	printf("\n");

	printf("--����4"); printf("\n");
	int score = test4(&omr[0], &hgd[0], count);
	printf("%d��", score);




}