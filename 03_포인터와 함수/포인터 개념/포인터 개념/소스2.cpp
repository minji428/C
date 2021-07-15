#include <stdio.h>
#include <Windows.h>

int main(void) {
	int arr[3] = { 10,20,30 };
	int* p2 = &arr[0];
	p2[1] = 200;
	printf("%d %d %d", arr[0], arr[1], arr[2]); printf("\n");

	return 0;
}