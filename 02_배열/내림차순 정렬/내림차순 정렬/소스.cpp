#include <stdio.h>
#include <Windows.h>

int main(void) {
	int arr[5] = { 620,1130,425,443,144 };

	int n = 0;
	while (n < 5) {
		int k = n;
		int max = arr[n];
		int index = n;
		while (k < 5) {
			if (max < arr[k]) {
				max = arr[k];
				index = k;
			}
			k += 1;
		}
		int temp = arr[n];
		arr[n] = arr[index];
		arr[index] = temp;
		n += 1;
	}
	n = 0;
	while (n < 5) {
		printf("%d", arr[n]); printf("\n");
		n += 1;
	}
	printf("\n");

	return 0;
}