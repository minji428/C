#include <stdio.h>
#include <Windows.h>

void print_info(int* accs, int* moneys, int count) {
	printf("--- 회원정보[%d명]---", count); printf("\n");
	for (int i = 0; i < count; i++) {
		printf("%d. %d : %d원", (i + 1), accs[i], moneys[i]); printf("\n");
	}
	printf("\n");
}
int check_acc(int* accs, int acc, int count) {
	int check = 1;
	for (int i = 0; i < count; i++) {
		if (accs[i] == acc) {
			check = -1;
		}
	}
	return check;
}
int member(int* accs, int* moneys, int count) {
	printf("--- 회원가입 ---"); printf("\n");
	
	int acc = 0;
	printf("계좌번호를 입력하세요: ");
	scanf_s("%d", &acc);

	int check = check_acc(accs, acc, count);

	if (check == -1) {
		printf("계좌번호가 중복됩니다."); printf("\n");
	}
	else {
		accs[count] = acc;
		moneys[count] = 1000;
		printf("회원가입을 축하합니다."); printf("\n");
		count += 1;
	}
	return count;
}
int login_check(int* accs, int login, int count) {
	printf("--- 로그인 ---"); printf("\n");
	int acc = 0;
	printf("계좌번호를 입력하세요: ");
	scanf_s("%d", &acc);

	for (int i = 0; i < count; i++) {
		if (accs[i] == acc) {
			login = i;
		}
	}
	return login;
}
int income() {
	printf("--- 입금 ---"); printf("\n");
	int money = 0;
	printf("입금 할 금액을 입력하세요: ");
	scanf_s("%d", &money);

	return money;
}
int check_acc(int* accs, int count) {
	int acc = 0;
	printf("이체할 계좌번호를 입력하세요: ");
	scanf_s("%d", &acc);

	int check = -1;
	for (int i = 0; i < count; i++) {
		if (accs[i] == acc) {
			check = i;
		}
	}
	return check;
}
void withdraw(int* accs, int* moneys, int login, int count) {
	printf("--- 이체 ---"); printf("\n");

	int check = check_acc(accs, count);

	if (check == -1) {
		printf("계좌번호를 확인해주세요."); printf("\n");
	}
	else {
		int money = 0;
		printf("이체할 금액을 입력하세요: ");
		scanf_s("%d", &money);

		if (moneys[login] >= money) {
			moneys[check] += money;
			moneys[login] -= money;

			printf("이체를 완료하였습니다.");
		}
		else {
			printf("계좌잔액이 부족합니다."); printf("\n");
		}
	}
}
void outcome(int* moneys, int login) {
	printf("--- 출금 ---"); printf("\n");
	int money = 0;
	printf("출금할 금액을 입력하세요: ");
	scanf_s("%d", &money);

	if (moneys[login] >= money) {
		moneys[login] -= money;
		printf("출금을 완료하였습니다."); printf("\n");
	}
	else {
		printf("계좌잔액이 부족합니다."); printf("\n");
	}
}
int del(int* accs, int* moneys, int login, int count) {
	for (int i = login; i < count - 1; i++) {
		accs[i] = accs[i + 1];
		moneys[i] = moneys[i + 1];
	}
	printf("탈퇴되었습니다."); printf("\n");

	count -= 1;
	return count;
}
int run(int* accs, int* moneys, int count) {
	while (1) {
		print_info(accs, moneys, count);

		printf("1.회원가입"); printf("\n");
		printf("2.로그인"); printf("\n");
		printf("3.종료"); printf("\n");

		int login = -1;
		int sel = 0;
		printf("메뉴선택: ");
		scanf_s("%d", &sel);

		if (sel == 1) {
			count = member(accs, moneys, count);
		}
		else if (sel == 2) {
			login = login_check(accs, login, count);
			if (login == -1) {
				printf("계좌번호를 확인해주세요."); printf("\n");
			}
			else {
				while (1) {
					print_info(accs, moneys, count);

					printf("1.입금"); printf("\n");
					printf("2.출금"); printf("\n");
					printf("3.이체"); printf("\n");
					printf("4.탈퇴"); printf("\n");
					printf("5.로그아웃"); printf("\n");

					int choice = 0;
					printf("메뉴선택: ");
					scanf_s("%d", &choice);

					if (choice == 1) {
						moneys[login] += income();
						printf("입금을 완료하였습니다.");
					}
					else if (choice == 2) {
						outcome(moneys, login);
					}
					else if (choice == 3) {
						withdraw(accs, moneys, login, count);
					}
					else if (choice == 4) {
						count = del(accs, moneys, login, count);
						login = -1;
						break;
					}
					else if (choice == 5) {
						login = -1;
						break;
					}
				}
			}
		}

		else if (sel == 3) {
			break;
		}

		
	}
	return count;
}

void main() {

	int count = 3;
	int accs[5] = { 1111,2222,3333,0,0 };
	int moneys[5] = { 1000,2000,3000,0,0 };

	count = run(&accs[0], &moneys[0], count);


}