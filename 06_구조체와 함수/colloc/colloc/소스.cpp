#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr_1[5];
	int* arr_2;
	int i;
	for (i = 0; i < 5; i++) {
		arr_1[i] = i + 1;
	}
	//�޸� �Ҵ�, �迭�� ũ�⸸ŭ �Ҵ��ϱ� ���� 5�� ����
	arr_2 = (int*)malloc(sizeof(int) * 5);

	//sizoe(int)ũ���� ������ 5�� ������ �� �ִ� ���� �Ҵ�
	for (i = 0; i < 5; i++) {
		arr_2[i] = arr_1[i];
		printf("%d", arr_2[i]);
	}
	free(arr_2);

	return 0;
}