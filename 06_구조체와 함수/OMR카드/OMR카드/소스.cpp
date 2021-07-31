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
	//1~5������ ���� ���� 5�� ����
	void test1() {
		hgd = new int[count];
		for (int i = 0; i < count; i++) {
			hgd[i] = rand() % 5 + 1;
		}
		print_arr(hgd);
	}
	//omr�� hgd�� ���� ������ 1, ������ 0���� �迭�� ������ ���
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
	//����2�� ���� ����� �迭�� ����ǥ ���
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
	//���� ���
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

	printf("--����1"); printf("\n");
	m.test1();
	printf("\n");

	printf("--����2"); printf("\n");
	int*p = m.test2();
	m.print_arr(p);
	printf("\n");

	printf("--����3"); printf("\n");
	m.test3();
	printf("\n");

	printf("--����4"); printf("\n");
	int score = m.test4();
	printf("���� = %d��", score); printf("\n");
}