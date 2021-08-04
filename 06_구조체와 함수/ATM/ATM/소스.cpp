#include <stdio.h>
#include <Windows.h>

struct Client {
	int accs;
	int moneys;
};
struct ATM {
	int count;
	int login;
	Client* c;

	void show_info() {
		for (int i = 0; i < count; i++) {
			printf("%d : %d��", c[i].accs, c[i].moneys); printf("\n");
		}printf("\n");
	}
	void print_menu() {
		printf("1.�α���"); printf("\n");
		printf("2.�α׾ƿ�"); printf("\n");
		printf("3.��ü�ϱ�"); printf("\n");
		printf("4.ȸ������"); printf("\n");
		printf("5.Ż���ϱ�"); printf("\n");
		printf("6.�����ϱ�"); printf("\n");
	}
	void init() {
		count = 3;
		login = -1;
		c = new Client[count];

		c[0].accs = 1111; c[0].moneys = 1000;
		c[1].accs = 2222; c[1].moneys = 2000;
		c[2].accs = 3333; c[2].moneys = 3000;
	}
	int login_check() {
		int acc = 0;
		printf("���¹�ȣ�� �Է��ϼ��� : ");
		scanf_s("%d", &acc);

		int check = -1;
		for (int i = 0; i < count; i++) {
			if (c[i].accs == acc) {
				check = i;
			}
		}
		return check;
	}
	void login_member() {
		login = login_check();
		if (login == -1) {
			printf("���¹�ȣ�� Ȯ�����ּ���");
		}
		else {
			printf("%d��, ȯ���մϴ�", c[login].accs); 
		}printf("\n");
	}
	void logout() {
		if (login == -1) {
			printf("�α��� ��, �̿� �����մϴ�."); printf("\n");
		}
		else {
			login = -1;
			printf("�α׾ƿ� �Ǿ����ϴ�."); printf("\n");
		}
	}
	int check_acc() {
		int acc = 0;
		printf("��ü�� ���¹�ȣ�� �Է��ϼ��� : ");
		scanf_s("%d", &acc);

		int check = -1;
		for (int i = 0; i < count; i++) {
			if (c[i].accs == acc) {
				check = i;
			}
		}
		return check;
	}
	int check_money(int money) {
		int check = -1;
		if (c[login].moneys >= money) {
			check = 1;
		}
		return check;
	}
	void trans_money() {
		if (login == -1) {
			printf("�α��� �� �̿밡���մϴ�."); printf("\n");
			return;
		}
		int acc = check_acc();
		if (acc == -1) {
			printf("���¹�ȣ�� Ȯ�����ּ���."); printf("\n");
		}
		else {
			int money = 0;
			printf("��ü�� �ݾ��� �Է��ϼ��� : ");
			scanf_s("%d", &money);
			int check = check_money(money);

			if (check == -1) {
				printf("�����ܾ��� �����մϴ�."); printf("\n");
			}
			else {
				c[login].moneys -= money;
				c[acc].moneys += money;
				printf("��ü�� �Ϸ��Ͽ����ϴ�."); printf("\n");
			}
		}
		
	}
	int check_member(int acc) {
		int check = 1;;
		for (int i = 0; i < count; i++) {
			if (c[i].accs == acc) {
				check = -1;
			}
		}
		return check;
	}
	void set_member() {
		int acc = 0;
		printf("������ ���¹�ȣ�� �Է��ϼ��� : ");
		scanf_s("%d", &acc);

		int check = check_member(acc);
		if (check == -1) {
			printf("���¹�ȣ�� �ߺ��˴ϴ�.\n");
		}
		else {
			c[count].accs = acc;
			c[count].moneys = 1000;
			count += 1;
			printf("ȸ�������� �����մϴ�.\n");
		}
	}
	void del_member() {
		if (login == -1) {
			printf("�α��� ��, �̿밡���մϴ�."); printf("\n");
		}
		else {
			for (int i = login; i < count - 1; i++) {
				c[i] = c[i + 1];
			}
			count -= 1;
			login = -1;
			printf("Ż��Ǿ����ϴ�"); printf("\n");
		}
	}
	void run() {
		init();
		while (1){
			show_info();
			print_menu();

			int choice = 0;
			printf("�޴� ���� : ");
			scanf_s("%d", &choice);
			if (choice == 1) {
				login_member();
			}
			else if (choice == 2) {
				logout();
			}
			else if (choice == 3) {
				trans_money();
			}
			else if (choice == 4) {
				set_member();
			}
			else if (choice == 5) {
				del_member();
			}
			else if (choice == 6) {
				printf("���α׷� ����\n");
				break;
			}
		}
	}
};

void main() {
	ATM atm = { 0 };
	atm.run();
}