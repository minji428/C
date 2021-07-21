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

	printf("a狼 林家 = %d", &a); printf("\n");
	printf("a狼 林家 = %d", p); printf("\n");
	printf("a狼 林家 = %d", pp[0]); printf("\n");
	printf("a狼 林家 = %d", *pp); printf("\n");

	printf("p狼 林家 = %d", &p); printf("\n");
	printf("p狼 林家 = %d", pp); printf("\n");

}