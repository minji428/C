#include <Windows.h>
#include <stdio.h>

struct Client {
	int accs;
	int moneys;
};
struct ATM {
	int count;
	int login;
	Client* c;
};

void main() {
	ATM atm = { 0 };
	atm.count = 3;
	atm.login = -1;
	atm.c = new Client[atm.count];

	atm.c[0].accs = 1111; atm.c[0].moneys = 1000; 
	atm.c[1].accs = 2222; atm.c[1].moneys = 2000; 
	atm.c[2].accs = 3333; atm.c[2].moneys = 3000; 

	while (1) {
		for (int i = 0; i < atm.count; i++) {
			printf("%d : %d원", atm.c[i].accs, atm.c[i].moneys); printf("\n");
		}printf("\n");

		printf("1.로그인"); printf("\n");
		printf("2.로그아웃"); printf("\n");
		printf("3.이체하기"); printf("\n");
		printf("4.회원가입"); printf("\n");
		printf("5.탈퇴하기"); printf("\n");
		printf("6.종료하기"); printf("\n");

		int choice = 0;
		printf("메뉴 선택 : ");
		scanf_s("%d", &choice);

		if (choice == 1) {
			int acc = 0;
			printf("계좌번호를 입력하세요: ");
			scanf_s("%d", &acc);

			int check = -1;
			for (int i = 0; i < atm.count; i++) {
				if (atm.c[i].accs == acc) {
					check = i;
				}
			}
			if (check == -1) {
				printf("계좌번호를 확인해주세요"); printf("\n");
			}
			else {
				atm.login = check;
				printf("%d님, 환영합니다",atm.c[atm.login].accs); printf("\n");
			}
		}

		else if (choice == 2) {
			if (atm.login == -1) {
				printf("로그인 후, 이용가능합니다"); printf("\n");
			}
			else {
				atm.login = -1;
				printf("로그아웃 되었습니다"); printf("\n");
			}
		}

		else if (choice == 3) {
			if (atm.login == -1) {
				printf("로그인 후, 이용가능합니다"); printf("\n");
			}
			else {
				int acc = 0;
				printf("이체할 계좌번호를 입력하세요 : ");
				scanf_s("%d", &acc);

				int check = -1;
				for (int i = 0; i < atm.count; i++) {
					if (atm.c[i].accs == acc) {
						check = i;
					}
				}
				if (check == -1) {
					printf("계좌번호를 확인해주세요");
				}
				else {
					int money = 0;
					printf("이체할 금액을 입력하세요: ");
					scanf_s("%d", &money);

					if (atm.c[atm.login].moneys >= money) {
						atm.c[atm.login].moneys -= money;
						atm.c[check].moneys += money;
						printf("이체를 완료하였습니다"); printf("\n");
					}
					else {
						printf("계좌잔액이 부족합니다"); printf("\n");
					}
				}
			}
		}
		
		else if (choice == 4) {
			int acc = 0;
			printf("가입할 계좌번호를 입력하세요: ");
			scanf_s("%d", &acc);

			int check = 1;
			for (int i = 0; i < atm.count; i++) {
				if (atm.c[i].accs == acc) {
					check = -1;
				}
			}
			if (check == -1) {
				printf("계좌번호가 중복됩니다"); printf("\n");
			}
			else {
				atm.c[atm.count].accs = acc;
				atm.c[atm.count].moneys = 1000;
				printf("회원가입을 축하합니다"); printf("\n");

				atm.count += 1;
			}
		}
		
		else if (choice == 5) {
			if (atm.login == -1) {
				printf("로그인 후, 이용가능합니다"); printf("\n");
			}
			else {
				for (int i = atm.login; i < atm.count - 1; i++) {
					atm.c[i] = atm.c[i + 1];
				}
				atm.count -= 1;
				atm.login = -1;
				printf("탈퇴되었습니다"); printf("\n");
			}
		}

		else if (choice == 6) {
			printf("프로그램 종료"); printf("\n");
			break;
		}
	}
}