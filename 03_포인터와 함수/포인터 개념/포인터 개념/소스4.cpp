#include <stdio.h>
#include <Windows.h>

int main(void) {
	int hhh[4] = { 10,20,40,50 };

	int* p4 = &hhh[0];
	int* p5 = p4;
	p5[1] = 1000;

	printf("%d %d %d %d", hhh[0], hhh[1], hhh[2], hhh[3]);

	return 0;
}