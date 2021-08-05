#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr_1[5];
	int* arr_2;
	int i;
	for (i = 0; i < 5; i++) {
		arr_1[i] = i + 1;
	}
	//메모리 할당, 배열의 크기만큼 할당하기 위해 5를 곱함
	arr_2 = (int*)malloc(sizeof(int) * 5);

	//sizoe(int)크기의 변수를 5개 저장할 수 있는 공간 할당
	for (i = 0; i < 5; i++) {
		arr_2[i] = arr_1[i];
		printf("%d", arr_2[i]);
	}
	free(arr_2);

	return 0;
}