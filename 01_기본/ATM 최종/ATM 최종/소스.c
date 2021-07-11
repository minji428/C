#include <stdio.h>

int main(void)
{
	int db_id1 = 1111, db_id2 = 2222;
	int db_m1 = 1000, db_m2 = 2000;
	int log = -1;		//로그아웃
	int run = 1;

	while (run == 1) {
		if (log == -1) {
			printf("로그인 하세요 "); printf("\n");
		}
		else {
			printf("[%d] 로그인중", log); printf("\n");
		}
		printf("===== MEGA ATM ====="); printf("\n");
		printf("1.로그인 2.종료"); printf("\n");

		int sel;
		scanf_s("%d", &sel);
		if (sel == 1) {
			printf("아이디를 입력하세요: ");
			int id;
			scanf_s("%d", &id);
			if (id == db_id1) {
				log = id;
			}
			if (id == db_id2) {
				log = id;
			}
		}
		while (log != -1) {
			printf("===== %d =====", log); printf("\n");
			printf("3.잔액조회 4.출금 5.입금 0.로그아웃"); printf("\n");

			int sel1;
			scanf_s("%d", &sel1);
			if (sel1 == 3) {
				if (log == db_id1) {
					printf("잔액은 %d 원 입니다", db_m1);
				}
				else if (log == db_id2) {
					printf("잔액은 %d 원 입니다", db_m2); printf("\n");
				
				}
			}

			if (sel1 == 4) {
				if (log == db_id1) {
					printf("출금 할 금액을 입력하세요: ");
					int money;
					scanf_s("%d", &money);
					if (money > db_m1) {
						printf("다시 입력하세요: ");
						scanf_s("%d", &money);
					}
					else if (money <= db_id1) {
						db_m1 = db_m1 - money;
						printf("잔액: %d", db_m1); printf("\n");
					}
				}
				if (log == db_id2) {
					printf("출금 할 금액을 입력하세요: ");
					int money;
					scanf_s("%d", &money);
					if (money > db_m2) {
						printf("다시 입력하세요: ");
						scanf_s("%d", &money);
					}
					else if (money <= db_id2) {
						db_m2 = db_m2 - money;
						printf("잔액: %d", db_m2); printf("\n");
					}
				}
			}
			
			if (sel1 == 5) {
				if (log == db_id1) {
					printf("입금 할 금액을 입력하세요: ");
					int money;
					scanf_s("%d",&money);
					db_m1 = db_m1 + money;
					printf("잔액: %d", db_m1); printf("\n");
				}
				if (log == db_id2) {
					printf("입금 할 금액을 입력하세요: ");
					int money;
					scanf_s("%d", &money);
					db_m2 = db_m2 + money;
					printf("잔액: %d", db_m2); printf("\n");
				}
			}

			if (sel1 == 0) {
				log = -1;
				printf("로그아웃 되었습니다"); printf("\n");
			}
		}
	}

	return 0;
}
