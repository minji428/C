#include <Windows.h>
#include <stdio.h> 

int main(void)
{
	int account[4] = { 1111,2222,3333,4444 };
	int password[4] = { 1234,2345,3456,4567 };
	int balance[4] = { 5000,6000,7000,8000 };

	int login = -1;

	int run = 1;
	while (run == 1) {
		printf("1.로그인"); printf("\n");
		printf("2.이체"); printf("\n");
		printf("3.잔액"); printf("\n");
		printf("4.출금"); printf("\n");
		printf("5.로그아웃"); printf("\n");

		printf("메뉴를 선택하세요: ");
		int sel = 0;
		scanf_s("%d", &sel);

		if (sel == 1) {
			if (login == -1) {
				printf("[로그인]계좌번호를 입력하세요: ");
				int acc1;
				scanf_s("%d", &acc1);

				printf("[로그인]비밀번호를 입력하세요: ");
				int pas1;
				scanf_s("%d", &pas1);

				for (int i = 0; i < 4; i++) {
					if (acc1 == account[i] && pas1 == password[i]) {
						login = i;
					}
				}
				if (login == -1) {
					printf("[메세지]계좌번호를 확인해주세요"); printf("\n");
				}
				else {
					printf("[메세지]%d님 환영합니다", account[login]); printf("\n");
				}
			}
			else {
				printf("[메세지]로그아웃 후 이용해주세요"); printf("\n");
			}

		}

		else if (sel == 2) {
			if (login != -1) {
				printf("[메세지]이체 가능 금액은 %d입니다", balance[login]); printf("\n");
				printf("[이체]계좌번호를 입력하세요: ");
				int toss = 0;
				scanf_s("%d", &toss);

				int index = -1;
				for (int i = 0; i < 4; i++) {
					if (account[i] == toss) {
						index = i;
					}
				}
				if (index == -1) {
					printf("[메세지]계좌번호를 확인해주세요"); printf("\n");
				}
				else {
					printf("[이체]금액을 입력하세요: "); printf("\n");
					int money = 0;
					scanf_s("%d", &money);

					if (money <= balance[login]) {
						balance[login] -= money;
						balance[index] += money;

						printf("[메세지]이체가 완료되었습니다"); printf("\n");
						printf("잔액:%d", balance[login]); printf("\n");
					}
					else {
						printf("[메세지]계좌 잔액이 부족합니다"); printf("\n");
					}
				}

			}
			else {
				printf("[메세지]로그인 후 이용가능합니다"); printf("\n");
			}
		}

		else if (sel == 3) {
			if (login != -1) {
				printf("[메세지]%d원 입니다", balance[login]); printf("\n");
			}
			else {
				printf("[메세지]로그인 후 이용 가능합니다"); printf("\n");
			}
		}

		else if (sel == 4) {
			if (login != -1) {
				printf("[메세지]출금할 금액을 입력하세요: ");
				int money1 = 0;
				scanf_s("%d", &money1);

				if (money1 <= balance[login]) {
					balance[login] = balance[login] - money1;

					printf("[메세지]출금이 완료되었습니다"); printf("\n");
					printf("[메세지]잔액: %d원 입니다", balance[login]); printf("\n");
				}
				else {
					printf("[메세지]출금 할 금액이 잔액보다 큽니다"); printf("\n");
				}
			}
			else {
				printf("[메세지]로그인 후 이용 가능합니다"); printf("\n");
			}
		}



		else if (sel == 5) {
			if (login != -1) {
				login = -1;
				printf("[메세지]로그아웃 되었습니다"); printf("\n");
			}
			else {
				printf("[메세지]로그인 후 이용 가능합니다"); printf("\n");
			}
		}
	}


}