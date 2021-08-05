#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Client {
	char* id;
	char* pw;
	int money;
};
struct Movie {
	int cnt;
	Client* client;
	int* seat;

	int log;

	void print_menu() {
		printf("1.ȸ������"); printf("\n");
		printf("2.�α���"); printf("\n");
		printf("3.�α׾ƿ�"); printf("\n");
		printf("4.����"); printf("\n");
		printf("5.�����ϱ�"); printf("\n");
		printf("6.�������"); printf("\n");
		printf("0.����"); printf("\n");
	}
	void print_all() {
		if (log == -1) {
			printf("�α׾ƿ� ����"); printf("\n");
		}
		else {
			printf("%s �α�����...",client[log].id); printf("\n");
		}

		for (int i = 0; i < cnt; i++) {
			printf("ID[%s], PW[%s], Money[%d]", client[log].id, client[log].pw, client[log].money); printf("\n");
		}
	}
	void init() {
		cnt = 0;
		seat = 0;
		client = 0;
		log = -1;
		seat = new int[10];
		for (int i = 0; i < 10; i++) {
			seat[i] = -1;
		}
	}
	void member() {
		char id[100] = { 0 };
		char pw[100] = { 0 };
		printf("ID�� �Է��ϼ��� : ");
		scanf("%s", &id[0]);
		printf("PW�� �Է��ϼ��� : ");
		scanf("%s", &pw[0]);

		int money = 0;
		printf("������ �ݾ����� �Է��ϼ��� : ");
		scanf_s("%d", &money);

		if (cnt == 0) {
			client = new Client[cnt + 1];
		}
		else {
			Client* tmp = client;
			client = new Client[cnt + 1];
			for (int i = 0; i < cnt; i++) {
				client[i] = tmp[i];
			}
			delete[]tmp;
		}
		
		int len = strlen(id);
		client[cnt].id = new char[len + 1];
		strcpy(client[cnt].id, id);

		len = strlen(pw);
		client[cnt].pw = new char[len + 1];
		strcpy(client[cnt].pw, pw);

		client[cnt].money = money;

		cnt += 1;

		save();
	}
	void login() {
		char id[100] = { 0 };
		char pw[100] = { 0 };

		printf("ID�� �Է��ϼ��� : ");
		scanf_s("%s", &id[0]);
		printf("PW�� �Է��ϼ��� : ");
		scanf_s("%s", &pw[0]);
		
		for (int i = 0; i < cnt; i++) {
			if (strcmp(id, client[i].id) == 0 && strcmp(pw, client[i].pw) == 0) {
				log = i;
			}
		}
		if (log == -1) {
			printf("ID�� PW�� Ȯ�����ּ���."); printf("\n");
		}
		else {
			printf("%s��, ȯ���մϴ�.", client[log].id); printf("\n");
		}
	}
	void logout() {
		if (log != -1) {
			log = -1;
			printf("�α׾ƿ� �Ǿ����ϴ�."); printf("\n");
		}
	}
	void add_money() {
		if (log != -1) {
			int money = 0;
			printf("������ �ݾ��� �Է��ϼ��� : ");
			scanf_s("%d", &money);
			client[log].money += money;
			printf("������ �Ϸ��Ͽ����ϴ�."); printf("\n");
		}
		save();
	}
	void print_seat() {
		printf("[ ");
		for (int i = 0; i < cnt; i++) {
			if (seat[i] == -1) {
				printf("[] ");
			}
			else {
				printf("[&s]", client[seat[i]].id);
			}
		}
		printf("]");
	}
	void set_seat() {
		if (log != -1) {
			print_seat();
			int sel = 0;
			printf("�¼���ȣ�� �Է��ϼ���[1~10] : ");
			scanf_s("%d", &sel);
			sel -= 1;

			if (seat[sel] == -1) {
				seat[sel] = log;
				client[log].money -= 12000;
				printf("������ �Ϸ��Ͽ����ϴ�."); printf("\n");
			}
			else {
				printf("�ش� �¼��� ������ �Ϸ�Ǿ����ϴ�."); printf("\n");
			}
		}
		save();
	}
	void cancel_seat() {
		int check = -1;
		if (log != -1) {
			for (int i = 0; i < 10; i++) {
				if (seat[i] == log) {
					check = i;
				}
			}
		}
		if (check == -1) {
			printf("����� �¼��� �����ϴ�."); printf("\n");
		}
		else {
			seat[check] = -1;
			printf("������ ��ҵǾ����ϴ�."); printf("\n");
		}
		save();
	}
	void load() {
		char data[100] = { 0 };
		FILE* f = NULL;
		fopen_s(&f, "movie2.txt", "rt");
		if (f != NULL) {
			fgets(data, 100, f);
			cnt = atoi(data);

			fgets(data, 100, f);
			char* front = 0;
			char* end = data;
			for (int i = 0; i < cnt; i++) {
				fgets(data, 100, f);

				front = strtok_s(data, ",", &end);
				int len = strlen(front);
				client[i].id = new char[len + 1];
				strcpy(client[i].id, front);

				front = strtok_s(end, ",", &end);
				len = strlen(front);
				client[i].pw = new char[len + 1];

				strcpy(client[i].pw, front);
				client[i].money = atoi(end);
			}
			printf("\n");
			fclose(f);
		}
	}
	void save() {
		FILE* f = NULL;
		fopen_s(&f, "movie2.txt", "wt");

		char data[100] = { 0 };
		_itoa_s(cnt, data, 10);
		strcat(data, "\n");

		for (int i = 0; i < 10; i++) {
			char tmp[100] = { 0 };
			_itoa_s(seat[i], tmp, 10);
			strcat(data, tmp);
			if (i != 9) {
				strcat(data, ",");
			}
			strcat(data, "\n");

			for (int i = 0; i < cnt; i++) {
				strcat(data, client[i].id);
				strcat(data, ",");
				strcat(data, client[i].pw);
				strcat(data, ",");
				char tmp[100] = { 0 };
				_itoa_s(client[i].money, tmp, 10);
				strcat(data, tmp);
				if (i != cnt - 1) {
					strcat(data, "\n");
				}
			}
			fputs(data, f);
			fclose(f);
		}
	}
	void run() {
		init();
		load();

		while (1) {
			print_seat();
			print_all();
			print_menu();

			int sel = 0;
			printf("�޴� ���� : ");
			scanf_s("%d", &sel);

			if (sel == 1) { member(); }
			else if (sel == 2) { login(); }
			else if (sel == 3) { logout(); }
			else if (sel == 4) { add_money(); }
			else if (sel == 5) { set_seat(); }
			else if (sel == 6) { cancel_seat(); }
			else if (sel == 0) {
				printf("���α׷� ����"); printf("\n");
				break;
			}
		}
	}
};

void main() {
	Movie mega = { 0 };
	mega.run();

}
