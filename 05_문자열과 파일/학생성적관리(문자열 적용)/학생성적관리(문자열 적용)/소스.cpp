#include <stdio.h>
#include <string.h>

struct Student {
	char* name;
	int* score;
	int score_count;
};

void main() {
	Student* p = 0;
	int st_count = 0;

	int run = 1;
	while (run) {
		printf("[1]추가"); printf("\n");
		printf("[2]삭제"); printf("\n");
		printf("[3]정렬"); printf("\n");
		printf("[4]출력"); printf("\n");

		printf("메뉴 선택 : ");
		int sel = 0;
		scanf_s("%d", &sel);

		if (sel == 1) {
			if (st_count == 0) {
				p = new Student[1];
			}
			else if (st_count > 0) {
				Student* temp = p;

				p = new Student[st_count + 1];
				for (int i = 0; i < st_count; i++) {
					p[i] = temp[i];
				}
				delete[]temp;
			}
			printf("과목 수를 입력하세요 : ");
			scanf_s("%d", &p[st_count].score_count);

			p[st_count].score = new int[p[st_count].score_count];
			for (int i = 0; i < p[st_count].score_count; i++) {
				printf("%d번 과목 점수를 입력하세요 : ", (i + 1));
				scanf_s("%d", &p[st_count].score[i]);
			}
			printf("이름을 입력하세요 : ");
			char temp[100] = { 0 };
			scanf_s("%s", temp, 100);

			int len = strlen(temp);
			p[st_count].name = new char[len + 1];
			strcpy_s(p[st_count].name, len + 1, temp);

			st_count += 1;
		}
		else if (sel == 2) {
			printf("삭제할 이름을 입력하세요 : ");
			char temp[100] = { 0 };
			scanf_s("%s", temp, 100);

			int remove = -1;
			for (int i = 0; i < st_count; i++) {
				if (strcmp(temp, p[i].name) == 0) {
					remove = i;
				}
			}

			if (remove == -1) {
				printf("이름을 잘못입력했습니다.\n");
			}
			else {
				Student* temp = p;

				p = new Student[st_count - 1];
				for (int i = 0; i < remove; i++) {
					p[i] = temp[i];
				}
				for (int i = remove; i < st_count - 1; i++) {
					p[i] = temp[i + 1];
				}

				delete[] temp[remove].name;
				delete[] temp[remove].score;
				delete[] temp;

				st_count -= 1;
			}
		}
		else if (sel == 3) {
			for (int i = 0; i < st_count; i++) {
				int idx = i;
				char max[100] = { 0 };
				strcpy_s(max, 100, p[i].name);

				for (int j = i; j < st_count; j++) {
					if (strcmp(max, p[j].name) == 1) {
						strcpy_s(max, 100, p[j].name);
						idx = j;
					}
				}

				Student temp = p[i];
				p[i] = p[idx];
				p[idx] = temp;
			}
		}
		else if (sel == 4) {
			for (int i = 0; i < st_count; i++) {
				printf("%s : ", p[i].name);
				for (int j = 0; j < p[i].score_count; j++) {
					printf("%d ", p[i].score[j]);
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	
}