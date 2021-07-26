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
			printf("%d : %d��", atm.c[i].accs, atm.c[i].moneys); printf("\n");
		}printf("\n");

		printf("1.�α���"); printf("\n");
		printf("2.�α׾ƿ�"); printf("\n");
		printf("3.��ü�ϱ�"); printf("\n");
		printf("4.ȸ������"); printf("\n");
		printf("5.Ż���ϱ�"); printf("\n");
		printf("6.�����ϱ�"); printf("\n");

		int choice = 0;
		printf("�޴� ���� : ");
		scanf_s("%d", &choice);

		if (choice == 1) {
			int acc = 0;
			printf("���¹�ȣ�� �Է��ϼ���: ");
			scanf_s("%d", &acc);

			int check = -1;
			for (int i = 0; i < atm.count; i++) {
				if (atm.c[i].accs == acc) {
					check = i;
				}
			}
			if (check == -1) {
				printf("���¹�ȣ�� Ȯ�����ּ���"); printf("\n");
			}
			else {
				atm.login = check;
				printf("%d��, ȯ���մϴ�",atm.c[atm.login].accs); printf("\n");
			}
		}

		else if (choice == 2) {
			if (atm.login == -1) {
				printf("�α��� ��, �̿밡���մϴ�"); printf("\n");
			}
			else {
				atm.login = -1;
				printf("�α׾ƿ� �Ǿ����ϴ�"); printf("\n");
			}
		}

		else if (choice == 3) {
			if (atm.login == -1) {
				printf("�α��� ��, �̿밡���մϴ�"); printf("\n");
			}
			else {
				int acc = 0;
				printf("��ü�� ���¹�ȣ�� �Է��ϼ��� : ");
				scanf_s("%d", &acc);

				int check = -1;
				for (int i = 0; i < atm.count; i++) {
					if (atm.c[i].accs == acc) {
						check = i;
					}
				}
				if (check == -1) {
					printf("���¹�ȣ�� Ȯ�����ּ���");
				}
				else {
					int money = 0;
					printf("��ü�� �ݾ��� �Է��ϼ���: ");
					scanf_s("%d", &money);

					if (atm.c[atm.login].moneys >= money) {
						atm.c[atm.login].moneys -= money;
						atm.c[check].moneys += money;
						printf("��ü�� �Ϸ��Ͽ����ϴ�"); printf("\n");
					}
					else {
						printf("�����ܾ��� �����մϴ�"); printf("\n");
					}
				}
			}
		}
		
		else if (choice == 4) {
			int acc = 0;
			printf("������ ���¹�ȣ�� �Է��ϼ���: ");
			scanf_s("%d", &acc);

			int check = 1;
			for (int i = 0; i < atm.count; i++) {
				if (atm.c[i].accs == acc) {
					check = -1;
				}
			}
			if (check == -1) {
				printf("���¹�ȣ�� �ߺ��˴ϴ�"); printf("\n");
			}
			else {
				atm.c[atm.count].accs = acc;
				atm.c[atm.count].moneys = 1000;
				printf("ȸ�������� �����մϴ�"); printf("\n");

				atm.count += 1;
			}
		}
		
		else if (choice == 5) {
			if (atm.login == -1) {
				printf("�α��� ��, �̿밡���մϴ�"); printf("\n");
			}
			else {
				for (int i = atm.login; i < atm.count - 1; i++) {
					atm.c[i] = atm.c[i + 1];
				}
				atm.count -= 1;
				atm.login = -1;
				printf("Ż��Ǿ����ϴ�"); printf("\n");
			}
		}

		else if (choice == 6) {
			printf("���α׷� ����"); printf("\n");
			break;
		}
	}
}