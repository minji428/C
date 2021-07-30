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
	//1~100 사이의 랜덤 숫자 5개 저장
	void test1() {
		for (int i = 0; i < count; i++) {
			p[i].score = rand() % 100 + 1;
		}
		
	}
	//전교생의 정보 출력
	void test2() {
		for (int i = 0; i < count; i++) {
			printf("%d학번(%d점) ", p[i].hakbun, p[i].score);
		}
	}
	//전교생의 총점 리턴
	int test3() {
		int total = 0;
		for (int i = 0; i < count; i++) {
			total += p[i].score;
		}
		return total;
	}
	//전교생의 평균 리턴
	float test4() {
		int total = test3();
		float avg = total / float(count);

		return avg;
	}
	//성적 75점 이상의 학번과 성적을 구조체에 저장해 구조체 배열로 리턴
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
	//1등 학생의 학번과 성적을 구조체에 저장해 구조체로 리턴
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
	//학번을 입력받아 성적 리턴
	int test7() {
		int s_hakbun = 0;
		int score = 0;
		printf("학번입력 : ");
		scanf_s("%d", &s_hakbun);
		for (int i = 0; i < count; i++) {
			if (p[i].hakbun == s_hakbun) {
				score = p[i].score;
			}
		}
		return score;
	}
	//성적을 입력받아 학번 리턴
	int test8() {
		int hakbun = 0;
		int s_score = 0;
		printf("성적입력 : ");
		scanf_s("%d", &s_score);
		for (int i = 0; i < count; i++) {
			if (p[i].score == s_score) {
				hakbun = p[i].hakbun;
			}
		}
		return hakbun;
	}
	//학번을 입력받아 학생정보 (학번과 성적) 삭제
	//없는 학번 입력 시, 예외처리
	void test9() {
		int del = 0;
		printf("삭제할 학번 입력 : ");
		scanf_s("%d", &del);
		int check = -1;
		for (int i = 0; i < count; i++) {
			if (p[i].hakbun == del) {
				check = i;
			}
		}
		if (check == -1) {
			printf("학번을 잘못 입력하였습니다.");
		}
		else {
			for (int i = check; i < count - 1; i++) {
				p[i].hakbun = p[i + 1].hakbun;
				p[i].score = p[i + 1].score;
			}
			count -= 1;
		}
	}
	//성적순으로 내림차순 정렬
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

	printf("--문제1"); printf("\n");
	c.test1();
	printf("\n"); printf("\n");

	printf("--문제2"); printf("\n");
	c.test2();
	printf("\n"); printf("\n");

	printf("--문제3"); printf("\n");
	int total = c.test3();
	printf("총점 = %d점", total);
	printf("\n"); printf("\n");

	printf("--문제4"); printf("\n");
	float avg = c.test4();
	printf("평균 = %f점", avg);
	printf("\n"); printf("\n");

	printf("--문제5"); printf("\n");
	int p_size = 0;
	Student* p = c.test5(&p_size);
	for (int i = 0; i < p_size; i++) {
		printf("%d학번(%d점)", p[i].hakbun, p[i].score);
	}printf("\n"); printf("\n");

	printf("--문제6"); printf("\n");
	Student tmp = c.test6();
	printf("%d학번(%d점)", tmp.hakbun, tmp.score);
	printf("\n"); printf("\n");

	printf("--문제7"); printf("\n");
	int score = c.test7();
	printf("점수 = %d점", score);
	printf("\n"); printf("\n");

	printf("--문제8"); printf("\n");
	int hakbun = c.test8();
	printf("학번 = %d번", hakbun);
	printf("\n"); printf("\n");

	printf("--문제9"); printf("\n");
	c.test9();
	c.test2();
	printf("\n"); printf("\n");

	printf("--문제10"); printf("\n");
	c.test10();
	c.test2();
	printf("\n"); printf("\n");
}
