#include <stdio.h>
#include <Windows.h>

int main() {
	int darr[3][4] = { {1,2,3,4},{12,33,14,15},{23,24,25,26}};
	int arr[12] = { 0 };

	int n = 0;
	int size = 0;
	while (n < 3) {
		int k = 0;
		while (k < 4) {
			arr[size] = darr[n][k];
			size += 1;
			k += 1;
		}
		n += 1;
	}
	return 0;
}