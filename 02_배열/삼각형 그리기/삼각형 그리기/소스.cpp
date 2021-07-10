#include <stdio.h>
#include <Windows.h>

int main(void)
{
	int n = 0;
	int k = 0;
	while (n < 3) {
		k = n + 1;
		int y = 0;
		while (y < k) {
			printf("*");
			y = y + 1;
		}
		n = n + 1;
		printf("\n");
	}
	printf("\n");




	n = 0;	
	while (n < 3) {
		k = 0;
		while (k < 3 - n) {
			printf("*");
			k = k + 1;
		}
		printf("\n");
		n = n + 1;
	}
	printf("\n");


	n = 0;
	int kk = 2;
	while (n < 3) {
		k = n + 1;
		int y = 0;
		while (y < k) {
			printf("*");
			y = y + 1;
		}
		int z = 0;
		while(z<kk){
			printf("#");
			z = z + 1;
		}
		printf("\n");
		kk = kk - 1;

		n = n + 1;
	}
	printf("\n");

	n = 0;
	kk = 4;
	while (n < 5) {
		int k = 0;
		while (k < kk) {
			printf("");
			k += 1;
		}
		kk = kk - 1;
		k = 0;
		while (k < n + 1) {
			printf("@");
			k += 1;
		}
		printf("\n");
		n += 1;
	}
	printf("\n");




}