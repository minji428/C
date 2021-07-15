#include <stdio.h>
#include <Windows.h>

void swap(int* p1, int* p2) {
	int temp = p1[0];
	p1[0] = p2[0];
	p2[0] = temp;

}
void main() {
	int a = 10;
	int b = 20;

	printf("%d %d", a, b); printf("\n");

	swap(&a, &b);

	printf("%d %d", a, b); printf("\n");

}