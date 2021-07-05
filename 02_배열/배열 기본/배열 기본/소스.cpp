#include <stdio.h>

int main() {
	int arr[5] = { 0 };
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	int total = 0;
	for (int i = 0; i < 5; i++) {
		total = total + arr[i];
	}
	printf("배열의 전체 합: %d", total); printf("\n");

	printf("4의 배수만 출력: ");
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 4 == 0) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");

	int total1 = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 4 == 0) {
			total1 = total1 + arr[i];
		}
	}
	printf("4의 배수의 합 출력: %d", total1); printf("\n");

	int count = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i]%4 == 0) {
			count = count + 1;
		}
	}
	printf("4의 배수의 개수: %d", count); printf("\n");

	count = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			count = count + 1;
		}
	}
	printf("짝수의 개수: %d", count); printf("\n");

	return 0;


}