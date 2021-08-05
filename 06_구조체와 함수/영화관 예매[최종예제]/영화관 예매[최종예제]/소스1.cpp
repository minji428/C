#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	# ��ȭ�� ����
	1. ȸ������
	2. �α���
	3. �α׾ƿ�
	4. ����
	5. �����ϱ�
	6. �������
	0. ����
*/

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

	void print_all() {
		if (log == -1) {
			printf("�α׾ƿ� ����\n");
		}
		else {
			printf("%s �α��� ��...\n", client[log].id);
		}

		for (int i = 0; i < cnt; i++) {
			printf("ID[%s], PW[%s], Money[%d]\n", client[i].id, client[i].pw, client[i].money);
		}
	}

	void init() {
		cnt = 0;
		client = 0;
		seat = 0;
		log = -1;
		seat = new int[10];
		for (int i = 0; i < 10; i++) {
			seat[i] = -1;
		}
	}

	void print_menu() {
		printf("1. ȸ������\n");
		printf("2. �α���\n");
		printf("3. �α׾ƿ�\n");
		printf("4. ����\n");
		printf("5. �����ϱ�\n");
		printf("6. �������\n");
		printf("0. ����\n");
	}

	void member() {
		char id[100] = { 0 };
		printf("ID�� �Է��ϼ��� : ");
		scanf_s("%s", &id[0] , 100);

		char pw[100] = { 0 };
		printf("PW�� �Է��ϼ��� : ");
		scanf_s("%s", &pw[0],100);

		int money = 0;
		printf("������ �ݾ��� �Է��ϼ��� : ");
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
			delete[] tmp;
		}

		int len = strlen(id);
		client[cnt].id = new char[len + 1];
		strcpy_s(client[cnt].id, len + 1, id);

		len = strlen(pw);
		client[cnt].pw = new char[len + 1];
		strcpy_s(client[cnt].pw,len + 1 ,  pw);

		client[cnt].money = money;

		cnt += 1;

		save();
	}

	void login() {
		char id[100] = { 0 };
		printf("ID�� �Է��ϼ��� : ");
		scanf_s("%s", &id[0] , 100);

		char pw[100] = { 0 };
		printf("PW�� �Է��ϼ��� : ");
		scanf_s("%s", &pw[0] ,100);

		for (int i = 0; i < cnt; i++) {
			if (strcmp(id, client[i].id) == 0 && strcmp(pw, client[i].pw) == 0) {
				log = i;
			}
		}

		if (log == -1) {
			printf("ID�� PW�� Ȯ�����ּ���.\n");
		}
		else {
			printf("%s��, ȯ���մϴ�.\n", client[log].id);
		}
	}

	void logout() {
		if (log != -1) {
			log = -1;
			printf("�α׾ƿ� �Ǿ����ϴ�.\n");
		}
	}

	void add_money() {
		if (log != -1) {
			int money = 0;
			printf("������ �ݾ��� �Է��ϼ��� : ");
			scanf("%d", &money);

			client[log].money += money;
			printf("������ �Ϸ��Ͽ����ϴ�.\n");
		}
		save();
	}

	void print_seat() {
		printf("[ ");
		for (int i = 0; i < 10; i++) {
			if (seat[i] == -1) {
				printf("[ ] ");
			}
			else {
				printf("[%s] ", client[seat[i]].id);
			}
		}
		printf("]\n");
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
				printf("������ �Ϸ��Ͽ����ϴ�.\n");
			}
			else {
				printf("�ش� �¼��� ������ �Ϸ�Ǿ����ϴ�.\n");
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
			printf("����� �¼��� �����ϴ�.\n");
		}
		else {
			seat[check] = -1;
			printf("������ ��ҵǾ����ϴ�.\n");
		}
		save();
	}

	void load() {
		char data[100] = { 0 };

		FILE* f = NULL;
		fopen_s(&f, "movie.txt", "rt");
		if (f != NULL) {
			fgets(data, 100, f);

			cnt = atoi(data);

			fgets(data, 100, f);
			char* front = 0;
			char* end = data;
			for (int i = 0; i < 10; i++) {
				front = strtok_s(end, ",", &end);
				seat[i] = atoi(front);
			}

			client = new Client[cnt];
			for (int i = 0; i < cnt; i++) {
				fgets(data, 100, f);

				front = strtok_s(data, ",", &end);
				int len = strlen(front);
				client[i].id = new char[len + 1];
				strcpy_s(client[i].id, len + 1 , front);

				front = strtok_s(end, ",", &end);
				len = strlen(front);
				client[i].pw = new char[len + 1];

				strcpy_s(client[i].pw, len + 1 ,  front);
				client[i].money = atoi(end);
			}
			printf("\n");

			fclose(f);
		}
	}

	void save() {
		FILE* f = NULL;
		fopen_s(&f, "movie.txt", "wt");

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

	void run() {

		init();
		load();

		while (1) {
			print_seat();
			print_all();
			print_menu();

			int sel = 0;
			printf("�޴� ���� : ");
			scanf("%d", &sel);

			if (sel == 1) { member(); }
			else if (sel == 2) { login(); }
			else if (sel == 3) { logout(); }
			else if (sel == 4) { add_money(); }
			else if (sel == 5) { set_seat(); }
			else if (sel == 6) { cancel_seat(); }
			else if (sel == 0) {
				printf("���α׷� ����\n");
				break;
			}
		}
	}

};

void main() {

	Movie mega = { 0 };
	mega.run();

	system("pause");
}


