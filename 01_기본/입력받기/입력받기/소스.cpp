#include <stdio.h>

int main(void)
{
	//���� ���
	float salary,annual;

	printf("����:");
	scanf_s("%f", &salary);
	
	annual = salary * 12 * 0.9;
	printf("����: %.2f\n\n", annual);

	//�ﰢ�� ���� ���

	float num1, num2;
	
	printf("����: ");
	scanf_s("%f", &num1);
	printf("����: ");
	scanf_s("%f", &num2);

	printf("�ﰢ���� ����: %.2f\n\n", num1 * num2);

	//���� 2�� �Է¹ް� ���� ��ȯ

	int x,y,z;

	

	printf("����1: ");
	scanf_s("%d", &x);
	printf("����2: ");
	scanf_s("%d", &y);

	z = x;
	x = y;
	y = z;

	printf("����1:%d ,����2:%d ", x, y);


	return 0;
}