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

//문제1 1~5 사이의 랜덤 숫자 5개 저장
void test1(int* hgd, int count) {
	for (int i = 0; i < count; i++) {
		hgd[i] = rand() % 5 + 1;
	}
}

//문제2 omr과 hgd을 비교해 정답은 1, 오답은 0으로 저장해 배열 리턴
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

//문제3 문제2를 통해 리턴받은 배열로 정오표 출력
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

//문제4 성적 리턴
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

	printf("--문제1"); printf("\n");
	test1(&hgd[0], count);
	print_arr(&hgd[0], 5);

	printf("--문제2"); printf("\n");
	int *p = test2(&omr[0], &hgd[0], count);
	print_arr(p, count);

	printf("--문제3"); printf("\n");
	test3(&omr[0], &hgd[0], count);
	printf("\n");

	printf("--문제4"); printf("\n");
	int score = test4(&omr[0], &hgd[0], count);
	printf("%d점", score);




}