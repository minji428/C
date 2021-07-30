#include <stdio.h>
#include <Windows.h>

struct Test {
	int* p;
	int size;
};

struct Array {
	int count;
	int* arr;
	void init() {
		count = 5;
		arr = new int[count];
		for (int i = 0; i < count; i++) {
			arr[i] = (i + 1) * 10;
		}
	}
	void print_arr() {
		printf("[ ");
		for (int i = 0; i < count; i++) {
			printf("%d", arr[i]);
		}
		printf("]\n");
	}

	int test1() {
		int total = 0;
		for (int i = 0; i < count; i++) {
			total += arr[i];
		}
		return total;
	}

	Test test2() {
		int size = 0;
		for (int i = 0; i < count; i++) {
			if (arr[i] % 4 == 0) {
				size += 1;
			}
		}
		Test t = { 0 };
		t.size = size;
		t.p = new int[size];

		int j = 0;
		for (int i = 0; i < count; i++) {
			if (arr[i] % 4 == 0) {
				t.p[j] = arr[i];
				j += 1;
			}
		}
		return t;
	}

	int test3() {
		int total = 0;
		for (int i = 0; i < count; i++) {
			if (arr[i] % 4 == 0) {
				total += arr[i];
			}
		}
		return total;
	}

	//문제 4) (인덱스로)값 교체
	//문제 5) (값으로)값 교체

	void test4(int idx1, int idx2) {
		int tmp = arr[idx1];
		arr[idx1] = arr[idx2];
		arr[idx2] = tmp;
	}

	void test5(int value1, int value2) {
		int idx1 = 0;
		int idx2 = 0;
		for (int i = 0; i < count; i++) {
			if (arr[i] == value1) {
				idx1 = i;
			}
			if (arr[i] == value2) {
				idx2 = i;
			}
		}
		int tmp = arr[idx1];
		arr[idx1] = arr[idx2];
		arr[idx2] = tmp;
	}
};

void main() {
	Array a = { 0 };
	a.init();

	printf(">>문제1"); printf("\n");
	int total = a.test1();
	printf("total = %d", total); printf("\n"); printf("\n");

	printf(">>문제2"); printf("\n");
	Test t = a.test2();
	for (int i = 0; i < t.size; i++) {
		printf("%d", t.p[i]);
	}printf("\n"); printf("\n");

	printf(">>문제3"); printf("\n");
	int total3 = a.test3;
	printf("total = %d", total3); printf("\n"); printf("\n");

	printf(">>문제4"); printf("\n");
	a.test4(1, 4);
	a.print_arr();
	printf("\n");

	printf(">>문제5"); printf("\n");
	a.test5(20, 50);
	a.print_arr();
	printf("\n");

}