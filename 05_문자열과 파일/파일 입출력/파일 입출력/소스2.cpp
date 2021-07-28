#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>

struct User {
	int num; char id[100]; char pw[100];
};

void main() {
	User* p = 0;
	int userCount = 0;
	int run = 1;

	while (1) {
		printf("1.회원가입 2.탈퇴 3.저장 4.출력");
		int sel;
		scanf_s("%d", &sel);
		if (sel == 1) {
			if (userCount == 0) {
				p = new User[1];
			}
			else {
				User* temp = p;
				p = new User[userCount + 1];
				for (int i = 0; i < userCount; i++) {
					p[i] = temp[i];
				}
				delete[]temp;
			}
			p[userCount].num = 1000 + userCount + 1;
			printf("아이디를 입력하세요: ");
			scanf_s("%s", p[userCount].id, 100);
			printf("비밀번호를 입력하세요: ");
			scanf_s("%s", p[userCount].pw, 100);
			userCount += 1;
		}
		if (sel == 2) {
			printf("탈퇴할 아이디를 입력하세요: ");
			char temp[10000] = { 0 };
			scanf_s("%s", temp, 10000);

			int remove = -1;
			for (int i = 0; i < userCount; i++) {
				if (strcmp(temp, p[i].id) == 0) {
					remove = i;
				}
			}
			if (remove == -1) {
				printf("아이디를 잘못입력했습니다");
			}
			else{
				User* temp = p;
				p = new User[userCount - 1];
				for (int i = 0; i < remove; i++) {
					p[i] = temp[i];
				}
				for (int i = remove; i < userCount - 1; i++) {
					p[i] = temp[i + 1];
				}
			//	delete[]temp[remove].id;
			//	delete[]temp[remove].pw;
				delete[]temp;

				userCount -= 1;
			}
		}
		if (sel == 3){
			if (userCount <= 0)
				continue;
			char data[10000] = { 0 };
			char itoatemp[1000] = { 0 };
			_itoa_s(userCount, itoatemp, 10);
			strcat_s(data, itoatemp);
			strcat_s(data, "\n");
			for (int i = 0; i < userCount; i++) {
				_itoa_s(p[i].num, itoatemp, 10);
				strcat_s(data, itoatemp);
				strcat_s(data, "/");
				strcat_s(data, p[i].id);
				strcat_s(data, "/");
				strcat_s(data, p[i].pw);
				if (i < userCount - 1) {
					strcat_s(data, "\n");
				}
			}
			printf("%s", data); printf("\n");
			FILE* file = 0;
			fopen_s(&file, "test02.txt", "wt");
			fputs(data, file);
			fclose(file);
		}
		if (sel == 4) {
			for (int i = 0; i < userCount; i++) {
				printf("[%d] [%s] [%s]", p[i].num, p[i].id, p[i].pw);
				printf("\n");
			}
		}




	}
}