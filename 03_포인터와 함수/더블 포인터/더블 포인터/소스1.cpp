#include <stdio.h>
#include <Windows.h>

void main() {

	int a = 10;
	printf("a=%d", a); printf("\n");
	
	int* p = &a;
	printf("a=%d", p[0]); printf("\n");
	printf("a=%d", *(p + 0)); printf("\n");

	int** pp = &p;
	printf("a=%d", pp[0][0]); printf("\n");
	printf("a=%d", *(*(pp + 0) + 0)); printf("\n");
	printf("a=%d", *(pp[0] + 0)); printf("\n");

	printf("a�� �ּ� = %d", &a); printf("\n");
	printf("a�� �ּ� = %d", p); printf("\n");
	printf("a�� �ּ� = %d", pp[0]); printf("\n");
	printf("a�� �ּ� = %d", *pp); printf("\n");

	printf("p�� �ּ� = %d", &p); printf("\n");
	printf("p�� �ּ� = %d", pp); printf("\n");

}