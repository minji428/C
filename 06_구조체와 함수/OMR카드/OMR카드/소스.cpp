#include <Windows.h>
#include <stdio.h>
#include <time.h>

struct OMR {
	int count;
	int* answer;
	int* hgd;

	void init() {
		count = 5;
		answer = new int[count];
		answer[0] = 1;
		answer[1] = 3;
		answer[2] = 4;
		answer[3] = 2;
		answer[4] = 5;
	}
	void print_arr(int* p) {
		printf("[ ");
		for (int i = 0; i < count; i++) {
			printf("%d ", p[i]);
		}
		printf("]"); printf("\n");
	}
	//1~5사이의 랜덤 숫자 5개 저장
	void test1() {
		hgd = new int[count];
		for (int i = 0; i < count; i++) {
			hgd[i] = rand() % 5 + 1;
		}
		print_arr(hgd);
	}
	//omr과 hgd을 비교해 정답은 1, 오답은 0으로 배열에 저장해 출력
	int* test2() {
		int* tmp = new int[count];
		for (int i = 0; i < count; i++) {
			if (answer[i] == hgd[i]) {
				tmp[i] = 1;
			}
			else {
				tmp[i] = 0;
			}
		}
		return tmp;
	}
	//문제2를 통해 저장된 배열로 정오표 출력
	void test3() {
		int* tmp = test2();
		printf("[ ");
		for (int i = 0; i < count; i++) {
			if (tmp[i] == 1) {
				printf("O ");
			}
			else if (tmp[i] == 0) {
				printf("X ");
			}
		}printf("]");
	}
	//성적 출력
	int test4() {
		int* tmp = test2();
		int cnt = 0;
		for (int i = 0; i < count; i++) {
			if (tmp[i] == 1) {
				cnt += 1;
			}
		}
		int score = cnt * 20;
		return score;
	}
};

void main() {
	srand(time(0));

	OMR m = { 0 };
	m.init();

	printf("--문제1"); printf("\n");
	m.test1();
	printf("\n");

	printf("--문제2"); printf("\n");
	int*p = m.test2();
	m.print_arr(p);
	printf("\n");

	printf("--문제3"); printf("\n");
	m.test3();
	printf("\n");

	printf("--문제4"); printf("\n");
	int score = m.test4();
	printf("성적 = %d점", score); printf("\n");
}