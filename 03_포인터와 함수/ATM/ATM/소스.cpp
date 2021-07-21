#include <stdio.h>
#include <Windows.h>

void print_info(int* accs, int* moneys, int count) {
	printf("--- ȸ������[%d��]---", count); printf("\n");
	for (int i = 0; i < count; i++) {
		printf("%d. %d : %d��", (i + 1), accs[i], moneys[i]); printf("\n");
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
	printf("--- ȸ������ ---"); printf("\n");
	
	int acc = 0;
	printf("���¹�ȣ�� �Է��ϼ���: ");
	scanf_s("%d", &acc);

	int check = check_acc(accs, acc, count);

	if (check == -1) {
		printf("���¹�ȣ�� �ߺ��˴ϴ�."); printf("\n");
	}
	else {
		accs[count] = acc;
		moneys[count] = 1000;
		printf("ȸ�������� �����մϴ�."); printf("\n");
		count += 1;
	}
	return count;
}
int login_check(int* accs, int login, int count) {
	printf("--- �α��� ---"); printf("\n");
	int acc = 0;
	printf("���¹�ȣ�� �Է��ϼ���: ");
	scanf_s("%d", &acc);

	for (int i = 0; i < count; i++) {
		if (accs[i] == acc) {
			login = i;
		}
	}
	return login;
}
int income() {
	printf("--- �Ա� ---"); printf("\n");
	int money = 0;
	printf("�Ա� �� �ݾ��� �Է��ϼ���: ");
	scanf_s("%d", &money);

	return money;
}
int check_acc(int* accs, int count) {
	int acc = 0;
	printf("��ü�� ���¹�ȣ�� �Է��ϼ���: ");
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
	printf("--- ��ü ---"); printf("\n");

	int check = check_acc(accs, count);

	if (check == -1) {
		printf("���¹�ȣ�� Ȯ�����ּ���."); printf("\n");
	}
	else {
		int money = 0;
		printf("��ü�� �ݾ��� �Է��ϼ���: ");
		scanf_s("%d", &money);

		if (moneys[login] >= money) {
			moneys[check] += money;
			moneys[login] -= money;

			printf("��ü�� �Ϸ��Ͽ����ϴ�.");
		}
		else {
			printf("�����ܾ��� �����մϴ�."); printf("\n");
		}
	}
}
void outcome(int* moneys, int login) {
	printf("--- ��� ---"); printf("\n");
	int money = 0;
	printf("����� �ݾ��� �Է��ϼ���: ");
	scanf_s("%d", &money);

	if (moneys[login] >= money) {
		moneys[login] -= money;
		printf("����� �Ϸ��Ͽ����ϴ�."); printf("\n");
	}
	else {
		printf("�����ܾ��� �����մϴ�."); printf("\n");
	}
}
int del(int* accs, int* moneys, int login, int count) {
	for (int i = login; i < count - 1; i++) {
		accs[i] = accs[i + 1];
		moneys[i] = moneys[i + 1];
	}
	printf("Ż��Ǿ����ϴ�."); printf("\n");

	count -= 1;
	return count;
}
int run(int* accs, int* moneys, int count) {
	while (1) {
		print_info(accs, moneys, count);

		printf("1.ȸ������"); printf("\n");
		printf("2.�α���"); printf("\n");
		printf("3.����"); printf("\n");

		int login = -1;
		int sel = 0;
		printf("�޴�����: ");
		scanf_s("%d", &sel);

		if (sel == 1) {
			count = member(accs, moneys, count);
		}
		else if (sel == 2) {
			login = login_check(accs, login, count);
			if (login == -1) {
				printf("���¹�ȣ�� Ȯ�����ּ���."); printf("\n");
			}
			else {
				while (1) {
					print_info(accs, moneys, count);

					printf("1.�Ա�"); printf("\n");
					printf("2.���"); printf("\n");
					printf("3.��ü"); printf("\n");
					printf("4.Ż��"); printf("\n");
					printf("5.�α׾ƿ�"); printf("\n");

					int choice = 0;
					printf("�޴�����: ");
					scanf_s("%d", &choice);

					if (choice == 1) {
						moneys[login] += income();
						printf("�Ա��� �Ϸ��Ͽ����ϴ�.");
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