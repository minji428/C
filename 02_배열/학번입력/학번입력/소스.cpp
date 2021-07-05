#include <stdio.h>
#include <Windows.h>

int main(void) {

	int score[5] = { 10,20,60,40,3 };
	int num[5] = { 1001,1002,1003,1004,1005 };

	int count = 0;		//60점 이상인 학생수 출력
	for (int i = 0; i < 5; i++) {
		if (score[i] >= 60) {
			count = count + 1;
			printf("%d명", count);
		}
	}
	printf("\n");

	printf("학번을 입력하세요: ");
	int hakbun = 0;
	scanf_s("%d", &hakbun);

	for (int i = 0; i < 5; i++) {
		if (hakbun == num[i]) {
			printf("성적: %d", score[i]);
		}
	}printf("\n");

	

	printf("성적을 입력하세요: ");
	int my_score = 0;
	scanf_s("%d", &my_score);

	for (int i = 0; i < 5; i++) {
		if (my_score == score[i]) {
			printf("학번: %d", num[i]);
		}
	}printf("\n");

	printf("학번을 입력하세요: ");			//없는 학번 = 없다
	hakbun = 0;
	scanf_s("%d", &hakbun);

	int check = -1;
	for (int i = 0; i < 5; i++) {
		if (hakbun == num[i]) {
			check = i;
		}
	}
	if (check == -1) {
		printf("없다"); printf("\n");
	}
	else {
		printf("성적: %d", score[check]);
	}

	int max_score = 0;
	int max_idx = 0;

	for (int i = 0; i < 5; i++) {
		if (max_score < score[i]) {
			max_score = score[i];
			max_idx = i;
		}
	}
	printf("%d학번(%d점)", num[max_idx], max_score);




}