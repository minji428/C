#include <stdio.h>
#include <Windows.h>
#include <string.h>

struct User {
	char* name;
	int score;
};

void main() {
	User* p = 0;
	int count = 0;

	int run = 1;
	while (run) {
		for (int i = 0; i < count; i++) {
			printf("[%d]이름: %s / 성적: %d", (i + 1), p[i].name, p[i].score); printf("\n");
		}

		printf("1.추가 2.삭제 3.출력"); printf("\n");

		printf("메뉴를 선택하세요: ");
		int sel = 0;
		scanf_s("%d", &sel);

		if (sel == 1) {
			if (count == 0) {
				p = new User[count + 1];
			}
			else if (count > 0) {
				User* temp = p;

				p = new User[count + 1];
				for (int i = 0; i < count; i++) {
					p[i].name = temp[i].name;
					p[i].score = temp[i].score;
				}
				delete[] temp;
			}
			printf("이름을 입력하세요: ");
			char name[100] = { 0 };
			scanf_s("%s", name, 100);

			int len = strlen(name);
			p[count].name = new char[len + 1];
			strcpy_s(p[count].name, len + 1, name);

			printf("성적을 입력하세요: ");
			scanf_s("%d", &p[count].score);

			count += 1;
		}

		else if (sel == 2) {
			printf("삭제할 번호를 선택하세요: ");
			int del_idx = 0;
			scanf_s("%d", &del_idx);

			if (count == 1) {
				p = 0;
			}
			else if (count > 1) {
				User* temp = p;
				p = new User[count - 1];

				int j = 0;
				for (int i = 0; i < count; i++) {
					if (i != del_idx) {
						p[j].name = temp[i].name;
						p[j].score = temp[i].score;

						j += 1;
					}
					delete[]temp[del_idx].name;
					delete[]temp;
				}
				count -= 1;
			}
			
		}
		else if (sel == 3) {
			for (int i = 0; i < count; i++) {
				printf("이름: %s / 성적: %d", p[i].name, p[i].score); printf("\n");
			}
		}
	}

}