#include <stdio.h>

int main(void)
{  // �簢�� ���� ���
	float garo, sero, rect;
	garo = 7;
	sero = 3;
	rect = garo * sero;

	printf("����: %f, ����:%f, ����: %f\n", garo, sero, rect);

	// ���� ��� ���
	float sc1, sc2, sc3, total, avg;
	sc1 = 20;
	sc2 = 43;
	sc3 = 71;
	total = sc1 + sc2 + sc3;
	avg = total / 3;

	printf("��������: %.2f,%.2f,%.2f\n��: %.2f\n���: %.2f\n", sc1, sc2, sc3, total, avg);

	//ȭ��ż� ���
	int money=186800;
	int n1 = money / 50000;
	int n2 = money % 50000 / 10000;
	int n3 = money % 50000 % 10000 / 5000;
	int n4 = money % 50000 % 10000 % 5000 / 500;
	int n5 = money % 50000 % 10000 % 5000 % 500 / 100;

	printf("5����:%d\n1����:%d\n5õ��:%d\n500��:%d\n100��:%d\n",n1,n2,n3,n4,n5);

	//x,y�� �� ��ȯ
	int x, y, z;
	x = 10;
	y = 20;

	z = x;
	x = y;
	y = z;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	//�������
	float salary;
	salary = 100;

	printf("����:%f\n����:%f", salary, salary*0.9*12);

	return 0;
}