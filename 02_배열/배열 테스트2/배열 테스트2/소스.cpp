#include <stdio.h>

int main() {
	//����1) �ε���(���ȣ)�� �Է��ϸ� �� ���
	int a[5] = { 10,20,30,40,50 };
	int index;
	printf("���ȣ(index)�� �Է��ϼ��� : ");
	scanf_s("%d", &index);

	printf("%d", a[index]);
	printf("\n"); printf("\n");

	//����2) �Ʒ� �迭 �� ���� ū �� ���
	int b[5] = { 12,54,23,87,1 };
	int max = b[0];
	int i = 0;
	while (i < 5) {
		if (b[i] > max) {
			max = b[i];
		}i += 1;
	}
	printf("%d", max);
	printf("\n"); printf("\n");

	//����3) �Ʒ� �迭 �� Ȧ���� ���� ���
	int c[5] = { 12,54,23,87,1 };
	int count = 0;
	int j = 0;
	while (j < 5) {
		if (c[j] % 2 == 1) {
			count += 1;
		}j += 1;
	}
	printf("Ȧ���� ���� : %d��", count);
	printf("\n"); printf("\n");

	//����4) �Ʒ��迭�� �Ųٷ� ����
	int d[5] = { 1,2,3,4,5 };
	int e[5] = { 0,0,0,0,0 };

	int k = 0;
	int back = 4;
	while (k < 5) {
		e[k] = d[back];
		back -= 1;
		k += 1;
	}
	k = 0;
	while (k < 5) {
		printf("[%d]", e[k]);
		k += 1;
	}
	printf("\n");
}