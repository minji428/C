#include <stdio.h>
#include <Windows.h>

void test(int** pp) {
	pp[0] = new int[3];
}
void main() {
	int* p = new int[3];

	int* p1 = 0;
	int** pp = &p1;

	pp[0] = new int[3];
	pp[0][0] = 10;
	p1[0] = 200;
	printf("%d\n", pp[0][0]);	//200Ãâ·Â

	int* p2 = 0;
	test(&p2);

	delete[] p2;
}