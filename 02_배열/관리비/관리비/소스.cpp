#include <stdio.h>
#include <Windows.h>

int main() {
	int apt[3][4] = {
		{101,102,103,104},
		{201,202,203,204},
		{301,302,303,304}
	};
	int pay[3][4] = {
		{1000,1100,1200,1300},
		{2000,2100,12200,2300},
		{3000,3100,3200,3300}
	};

	//�� ���� ������ �հ�
	int n = 0;
	int total[3] = { 0 };
	while (n < 3) {
		int k = 0;
		while (k < 4) {
			total[n] = total[n] + pay[n][k];
			k += 1;
		}
		n += 1;
	}


	//�ּҸ� �Է��ϸ� ������ ���
	printf("�ּҸ� �Է��ϼ���: ");
	int _dong;
	scanf_s("%d", &_dong);
	n = 0;
	while (n < 3) {
		int k = 0;
		while (k < 4) {
			if (_dong == apt[n][k]) {
				printf("%d", pay[n][k]);
			}
			k += 1;
		}
		n += 1;
	}printf("\n"); printf("\n");

	//�ּҸ� 2�� �Է��ϸ� ������ ��ȯ
	int _dong1 = 0;
	int _dong2 = 0;
	int in1 = 0;
	int in2 = 0;
	int in3 = 0;
	int in4 = 0;
	printf("�ּ�1�� �Է��ϼ���: ");
	scanf_s("%d", &_dong1);
	printf("�ּ�2�� �Է��ϼ���: ");
	scanf_s("%d", &_dong2);

	n = 0;
	while (n < 3) {
		int k = 0;
		while (k < 4) {
			if (_dong1 == apt[n][k]) {
				in1 = n;
				in2 = k;
				
			}
			if (_dong2 == apt[n][k]) {
				in3 = n;
				in4 = k;
				
			}
			k += 1;
		}
		n += 1;
	}
	int temp = pay[in1][in2];
	pay[in1][in2] = pay[in3][in4];
	pay[in3][in4] = temp;
	printf("%d", pay[in1][in2]); printf("\n");
	printf("%d", pay[in3][in4]);
	printf("\n"); printf("\n");

	//������ ���� ���� ���� �� ���

	int max_num = pay[0][0];
	in1 = 0;
	in2 = 0;

	n = 0;
	while (n < 3) {
		int k = 0;
		while (k < 4) {
			if (max_num < pay[n][k]) {
				max_num = pay[n][k];
				in1 = n;
				in2 = k;
			}
			k = k + 1;
		}
		n = n + 1;
	}
	printf("������ ���� ���� ���� ���� %dȣ %d�� �Դϴ�", apt[in1][in2], pay[in1][in2]);





}