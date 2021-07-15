#include <stdio.h>
#include <Windows.h>

int main(void) {

	int rrr[3] = { 10,20,30 };
	int* p3 = &rrr[2];
	p3[-2] = 1000;
	printf("%d %d %d", rrr[0], rrr[1], rrr[2]); printf("\n");

	return 0;
}