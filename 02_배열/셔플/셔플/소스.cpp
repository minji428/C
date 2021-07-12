#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));

	int arr[5] = { 10,20,30,40,50 };
	int n = 0;
	while (n < 100) {
		int r = rand() % 4 + 1;
		int temp = arr[0];
		arr[0] = arr[r];
		arr[r] = temp;
		n+=1;
	}
	n = 0;
	while (n < 5) {
		printf("%d", arr[n]); printf("\n");
		n+=1;
	}
	
	return 0;
}