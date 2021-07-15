#include <stdio.h>
#include <Windows.h>

int main(void) {

	int a = 10;
	int* p = &a;

	printf("%d", a); printf("\n");
	printf("%d", &a); printf("\n");
	printf("%d", p); printf("\n");
	printf("%d", &p); printf("\n");

	p[0] = 200;
	printf("%d", a); printf("\n");

	return 0;
}