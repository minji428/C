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
		printf("1.�α���"); printf("\n");
		printf("2.��ü"); printf("\n");
		printf("3.�ܾ�"); printf("\n");
		printf("4.���"); printf("\n");
		printf("5.�α׾ƿ�"); printf("\n");

		printf("�޴��� �����ϼ���: ");
		int sel = 0;
		scanf_s("%d", &sel);

		if (sel == 1) {
			if (login == -1) {
				printf("[�α���]���¹�ȣ�� �Է��ϼ���: ");
				int acc1;
				scanf_s("%d", &acc1);

				printf("[�α���]��й�ȣ�� �Է��ϼ���: ");
				int pas1;
				scanf_s("%d", &pas1);

				for (int i = 0; i < 4; i++) {
					if (acc1 == account[i] && pas1 == password[i]) {
						login = i;
					}
				}
				if (login == -1) {
					printf("[�޼���]���¹�ȣ�� Ȯ�����ּ���"); printf("\n");
				}
				else {
					printf("[�޼���]%d�� ȯ���մϴ�", account[login]); printf("\n");
				}
			}
			else {
				printf("[�޼���]�α׾ƿ� �� �̿����ּ���"); printf("\n");
			}

		}

		else if (sel == 2) {
			if (login != -1) {
				printf("[�޼���]��ü ���� �ݾ��� %d�Դϴ�", balance[login]); printf("\n");
				printf("[��ü]���¹�ȣ�� �Է��ϼ���: ");
				int toss = 0;
				scanf_s("%d", &toss);

				int index = -1;
				for (int i = 0; i < 4; i++) {
					if (account[i] == toss) {
						index = i;
					}
				}
				if (index == -1) {
					printf("[�޼���]���¹�ȣ�� Ȯ�����ּ���"); printf("\n");
				}
				else {
					printf("[��ü]�ݾ��� �Է��ϼ���: "); printf("\n");
					int money = 0;
					scanf_s("%d", &money);

					if (money <= balance[login]) {
						balance[login] -= money;
						balance[index] += money;

						printf("[�޼���]��ü�� �Ϸ�Ǿ����ϴ�"); printf("\n");
						printf("�ܾ�:%d", balance[login]); printf("\n");
					}
					else {
						printf("[�޼���]���� �ܾ��� �����մϴ�"); printf("\n");
					}
				}

			}
			else {
				printf("[�޼���]�α��� �� �̿밡���մϴ�"); printf("\n");
			}
		}

		else if (sel == 3) {
			if (login != -1) {
				printf("[�޼���]%d�� �Դϴ�", balance[login]); printf("\n");
			}
			else {
				printf("[�޼���]�α��� �� �̿� �����մϴ�"); printf("\n");
			}
		}

		else if (sel == 4) {
			if (login != -1) {
				printf("[�޼���]����� �ݾ��� �Է��ϼ���: ");
				int money1 = 0;
				scanf_s("%d", &money1);

				if (money1 <= balance[login]) {
					balance[login] = balance[login] - money1;

					printf("[�޼���]����� �Ϸ�Ǿ����ϴ�"); printf("\n");
					printf("[�޼���]�ܾ�: %d�� �Դϴ�", balance[login]); printf("\n");
				}
				else {
					printf("[�޼���]��� �� �ݾ��� �ܾ׺��� Ů�ϴ�"); printf("\n");
				}
			}
			else {
				printf("[�޼���]�α��� �� �̿� �����մϴ�"); printf("\n");
			}
		}



		else if (sel == 5) {
			if (login != -1) {
				login = -1;
				printf("[�޼���]�α׾ƿ� �Ǿ����ϴ�"); printf("\n");
			}
			else {
				printf("[�޼���]�α��� �� �̿� �����մϴ�"); printf("\n");
			}
		}
	}


}