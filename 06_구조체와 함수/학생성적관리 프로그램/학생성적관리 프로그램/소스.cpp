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

	void init() {
		count = 5;
		p = new Student[count];

		for (int i = 0; i < count; i++) {
			p[i].hakbun = 1001 + i;
		}
	}
	//1~100 ������ ���� ���� 5�� ����
	void test1() {
		for (int i = 0; i < count; i++) {
			p[i].score = rand() % 100 + 1;
		}
		
	}
	//�������� ���� ���
	void test2() {
		for (int i = 0; i < count; i++) {
			printf("%d�й�(%d��) ", p[i].hakbun, p[i].score);
		}
	}
	//�������� ���� ����
	int test3() {
		int total = 0;
		for (int i = 0; i < count; i++) {
			total += p[i].score;
		}
		return total;
	}
	//�������� ��� ����
	float test4() {
		int total = test3();
		float avg = total / float(count);

		return avg;
	}
	//���� 75�� �̻��� �й��� ������ ����ü�� ������ ����ü �迭�� ����
	Student* test5(int* p_size) {
		int size = 0;
		for (int i = 0; i < count; i++) {
			if (p[i].score >= 75) {
				size += 1;
			}
		}
		p_size[0] = size;
		
		Student* tmp = new Student[size];
		int j = 0;
		for (int i = 0; i < count; i++) {
			if (p[i].score >= 75) {
				tmp[j].hakbun = p[i].hakbun;
				tmp[j].score = p[i].score;
				j += 1;
			}
		}
		return tmp;
	}
	//1�� �л��� �й��� ������ ����ü�� ������ ����ü�� ����
	Student test6() {
		int max_score = p[0].score;
		int max_idx = 0;
		for (int i = 0; i < count; i++) {
			if (max_score < p[i].score) {
				max_score = p[i].score;
				max_idx = i;
			}
		}
		Student tmp = { 0 };
		tmp.hakbun = p[max_idx].hakbun;
		tmp.score = max_score;
		return tmp;
	}
	//�й��� �Է¹޾� ���� ����
	int test7() {
		int s_hakbun = 0;
		int score = 0;
		printf("�й��Է� : ");
		scanf_s("%d", &s_hakbun);
		for (int i = 0; i < count; i++) {
			if (p[i].hakbun == s_hakbun) {
				score = p[i].score;
			}
		}
		return score;
	}
	//������ �Է¹޾� �й� ����
	int test8() {
		int hakbun = 0;
		int s_score = 0;
		printf("�����Է� : ");
		scanf_s("%d", &s_score);
		for (int i = 0; i < count; i++) {
			if (p[i].score == s_score) {
				hakbun = p[i].hakbun;
			}
		}
		return hakbun;
	}
	//�й��� �Է¹޾� �л����� (�й��� ����) ����
	//���� �й� �Է� ��, ����ó��
	void test9() {
		int del = 0;
		printf("������ �й� �Է� : ");
		scanf_s("%d", &del);
		int check = -1;
		for (int i = 0; i < count; i++) {
			if (p[i].hakbun == del) {
				check = i;
			}
		}
		if (check == -1) {
			printf("�й��� �߸� �Է��Ͽ����ϴ�.");
		}
		else {
			for (int i = check; i < count - 1; i++) {
				p[i].hakbun = p[i + 1].hakbun;
				p[i].score = p[i + 1].score;
			}
			count -= 1;
		}
	}
	//���������� �������� ����
	void test10() {
		for (int i = 0; i < count; i++) {
			int max_score = p[i].score;
			int max_idx = i;
			for (int j = i; j < count; j++) {
				if (max_score < p[j].score) {
					max_score = p[j].score;
					max_idx = j;
				}
			}
			Student tmp = p[i];
			p[i] = p[max_idx];
			p[max_idx] = tmp;
		}
	}
};

int main() {
	srand(time(0));

	Control c = { 0 };
	c.init();

	printf("--����1"); printf("\n");
	c.test1();
	printf("\n"); printf("\n");

	printf("--����2"); printf("\n");
	c.test2();
	printf("\n"); printf("\n");

	printf("--����3"); printf("\n");
	int total = c.test3();
	printf("���� = %d��", total);
	printf("\n"); printf("\n");

	printf("--����4"); printf("\n");
	float avg = c.test4();
	printf("��� = %f��", avg);
	printf("\n"); printf("\n");

	printf("--����5"); printf("\n");
	int p_size = 0;
	Student* p = c.test5(&p_size);
	for (int i = 0; i < p_size; i++) {
		printf("%d�й�(%d��)", p[i].hakbun, p[i].score);
	}printf("\n"); printf("\n");

	printf("--����6"); printf("\n");
	Student tmp = c.test6();
	printf("%d�й�(%d��)", tmp.hakbun, tmp.score);
	printf("\n"); printf("\n");

	printf("--����7"); printf("\n");
	int score = c.test7();
	printf("���� = %d��", score);
	printf("\n"); printf("\n");

	printf("--����8"); printf("\n");
	int hakbun = c.test8();
	printf("�й� = %d��", hakbun);
	printf("\n"); printf("\n");

	printf("--����9"); printf("\n");
	c.test9();
	c.test2();
	printf("\n"); printf("\n");

	printf("--����10"); printf("\n");
	c.test10();
	c.test2();
	printf("\n"); printf("\n");
}
