#include <stdio.h>
#include <Windows.h>
#include <time.h>

struct Student {
	int hakbun;
	int score;
};
struct Control {
	Student* p;
	int count;
};

void main() {
	srand(time(0));

	Control c = { 0 };

	c.count = 5;
	c.p = new Student[5];

	for (int i = 0; i < c.count; i++) {
		c.p[i].hakbun = 1001 + i;
	}
	printf("---����1"); printf("\n");
	for (int i = 0; i < c.count; i++) {
		c.p[i].score = rand() % 100 + 1;
	}printf("\n");

	printf("---����2"); printf("\n");
	for (int i = 0; i < c.count; i++) {
		printf("%d�й�(%d��)", c.p[i].hakbun, c.p[i].score);
	}printf("\n");

	printf("---����3"); printf("\n");
	int total=0;
	for (int i = 0; i < c.count; i++) {
		total += c.p[i].score;
	}
	printf("���� = %d��", total);
	printf("\n");

	printf("---����4"); printf("\n");
	double avg = total / c.count;
	printf("��� = %lf��", avg); printf("\n");

	printf("---����5"); printf("\n");
	for (int i = 0; i < c.count; i++) {
		if (c.p[i].score >= 75) {
			printf("%d�й�(%d��)", c.p[i].hakbun, c.p[i].score);
		}
	}printf("\n");

	printf("---����6"); printf("\n");
	int max_score = c.p[0].score;
	int max_idx = 0;
	for (int i = 0; i < c.count; i++) {
		if (max_score < c.p[i].score) {
			max_score = c.p[i].score;
			max_idx = i;
		}
	}
	printf("%d�й�(%d��)\n", c.p[max_idx].hakbun, max_score); printf("\n");

	printf("---����7"); printf("\n");
	int my_hakbun = 0;
	printf("�й� �Է� : ");
	scanf_s("%d", &my_hakbun);
	for (int i = 0; i < c.count; i++) {
		if (c.p[i].hakbun == my_hakbun) {
			printf("%d��", c.p[i].score);
		}
	}printf("\n");

	printf("---����8"); printf("\n");
	int my_score = 0;
	printf("���� �Է� : ");
	scanf_s("%d", &my_score);
	for (int i = 0; i < c.count; i++) {
		if (c.p[i].score == my_score) {
			printf("%d�й�", c.p[i].hakbun);
		}
	}printf("\n");
	
	printf("---����9"); printf("\n");
	int del = 0;
	printf("������ �л��� �й� �Է� : ");
	scanf_s("%d", &del);

	int check = -1;
	for (int i = 0; i < c.count; i++) {
		if (c.p[i].hakbun == del) {
			check = i;
		}
	}
	if (check == -1) {
		printf("�й��Է¿���"); printf("\n");
	}
	else {
		for (int i = check; i < c.count - 1; i++) {
			c.p[i].hakbun = c.p[i + 1].hakbun;
			c.p[i].score = c.p[i + 1].score;
		}
		c.count -= 1;
	}
	for (int i = 0; i < c.count; i++) {
		printf("%d�й�(%d����)", c.p[i].hakbun, c.p[i].score);
	}
	printf("\n");

	printf("---����10"); printf("\n");
	for (int i = 0; i<c.count; i++) {
		int max_score = c.p[i].score;
		int max_idx = i;
		for (int j = i; j < c.count; j++) {
			if (max_score < c.p[j].score) {
				max_score = c.p[j].score;
				max_idx = j;
			}
		}
		int tmp = c.p[i].score;
		c.p[i].score = c.p[max_idx].score;
		c.p[max_idx].score = tmp;

		tmp = c.p[i].hakbun;
		c.p[i].hakbun = c.p[max_idx].hakbun;
		c.p[max_idx].hakbun = tmp;
	}
	for (int i = 0; i < c.count; i++) {
		printf("%d�й�(%d��) ", c.p[i].hakbun, c.p[i].score);
	}
	printf("\n");
}