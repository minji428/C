#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };

	int i1 = 0;
	int i2 = 0;

	printf("인덱스1을 입력하세요: ");
	scanf_s("%d", &i1);
	printf("인덱스2를 입력하세요: ");
	scanf_s("%d", &i2);


	int temp = arr[i1];
	arr[i1] = arr[i2];
	arr[i2] = temp;

	int i = 0;
	while (i < 5) {
		printf("%d ", arr[i]);
		i += 1;
	}
}