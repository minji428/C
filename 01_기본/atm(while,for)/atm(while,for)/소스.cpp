#include <stdio.h>

int main(void)
{
	int db_id1 = 1111, db_id2 = 2222;
	int db_pas1 = 2222, db_pas2 = 1111;
	int db_m1 = 1000, db_m2 = 2000;

	int log = -1;		//로그아웃
	int run = 1;

	while (run == 1) {
		if (log == -1) {
			printf("로그인 하세요"); printf("\n");

		}
		else {
			printf("[%d] 로그인중", log); printf("\n");
		}
		printf("===== mega ATM ====="); printf("\n");
		printf("1.로그인 2.로그아웃 3.잔액조회"); printf("\n");

		int sel;
		scanf_s("%d", &sel);

		if (sel == 1) {
			printf("아이디를 입력하세요: ");
			int id, pas;
			scanf_s("%d", &id);
			printf("비밀번호를 입력하세요: ");
			scanf_s("%d", &pas);
			if (id == db_id1 && pas==db_pas1) {
				log = db_id1;
			}
			else if (id == db_id2 && pas == db_pas2) {
				log = db_id2;
			}
			else {
				log = -1;
			}
		}
		else if (sel == 2) {
			log = -1;
			printf("로그아웃 되었습니다"); printf("\n");
		}
		else if (sel == 3) {
			if (log != -1) {
				if (log == db_id1) {
					printf("잔액: %d", db_m1); printf("\n");
				}
				else if (log == db_id2) {
					printf("잔액: %d", db_m2); printf("\n");
				}
			}
			
		}
		

	}
	return 0;
}