#include <stdio.h>
#include <Windows.h>

int main(void) {
	int a = 0;
	double f = 0;
	char c = 0;

	printf("sizeof==>%d", sizeof(c));
	printf("\n");

	printf("a의 주소 : %d", &a); printf("\n");

	int* p;
	char* pc;
	double* pf;
	p = &a;

	printf("p의 값 : %d", p); printf("\n");

	return 0;
}