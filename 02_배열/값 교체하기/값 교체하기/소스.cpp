#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };

	int i1 = 0;
	int i2 = 0;

	printf("�ε���1�� �Է��ϼ���: ");
	scanf_s("%d", &i1);
	printf("�ε���2�� �Է��ϼ���: ");
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