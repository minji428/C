#include <stdio.h>
#include <Windows.h>

int main(void) {

	int score[5] = { 10,20,60,40,3 };
	int num[5] = { 1001,1002,1003,1004,1005 };

	int count = 0;		//60�� �̻��� �л��� ���
	for (int i = 0; i < 5; i++) {
		if (score[i] >= 60) {
			count = count + 1;
			printf("%d��", count);
		}
	}
	printf("\n");

	printf("�й��� �Է��ϼ���: ");
	int hakbun = 0;
	scanf_s("%d", &hakbun);

	for (int i = 0; i < 5; i++) {
		if (hakbun == num[i]) {
			printf("����: %d", score[i]);
		}
	}printf("\n");

	

	printf("������ �Է��ϼ���: ");
	int my_score = 0;
	scanf_s("%d", &my_score);

	for (int i = 0; i < 5; i++) {
		if (my_score == score[i]) {
			printf("�й�: %d", num[i]);
		}
	}printf("\n");

	printf("�й��� �Է��ϼ���: ");			//���� �й� = ����
	hakbun = 0;
	scanf_s("%d", &hakbun);

	int check = -1;
	for (int i = 0; i < 5; i++) {
		if (hakbun == num[i]) {
			check = i;
		}
	}
	if (check == -1) {
		printf("����"); printf("\n");
	}
	else {
		printf("����: %d", score[check]);
	}

	int max_score = 0;
	int max_idx = 0;

	for (int i = 0; i < 5; i++) {
		if (max_score < score[i]) {
			max_score = score[i];
			max_idx = i;
		}
	}
	printf("%d�й�(%d��)", num[max_idx], max_score);




}