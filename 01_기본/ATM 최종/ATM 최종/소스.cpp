#include <stdio.h>

int main(void)
{
	int db_id1 = 1111, db_id2 = 2222;
	int db_m1 = 1000, db_m2 = 2000;
	int log = -1;		//�α׾ƿ�
	int run = 1;

	while (run == 1) {
		if (log == -1) {
			printf("�α��� �ϼ��� "); printf("\n");
		}
		else {
			printf("[%d] �α�����", log); printf("\n");
		}
		printf("===== MEGA ATM ====="); printf("\n");
		printf("1.�α��� 2.����"); printf("\n");

		int sel;
		scanf_s("%d", &sel);
		if (sel == 1) {
			printf("���̵� �Է��ϼ���: ");
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
			printf("3.�ܾ���ȸ 4.��� 5.�Ա� 0.�α׾ƿ�"); printf("\n");

			int sel1;
			scanf_s("%d", &sel1);
			if (sel1 == 3) {
				if (log == db_id1) {
					printf("�ܾ��� %d �� �Դϴ�", db_m1);
				}
				else if (log == db_id2) {
					printf("�ܾ��� %d �� �Դϴ�", db_m2); printf("\n");
				
				}
			}

			if (sel1 == 4) {
				if (log == db_id1) {
					printf("��� �� �ݾ��� �Է��ϼ���: ");
					int money;
					scanf_s("%d", &money);
					if (money > db_m1) {
						printf("�ٽ� �Է��ϼ���: ");
						scanf_s("%d", &money);
					}
					else if (money <= db_id1) {
						db_m1 = db_m1 - money;
						printf("�ܾ�: %d", db_m1); printf("\n");
					}
				}
				if (log == db_id2) {
					printf("��� �� �ݾ��� �Է��ϼ���: ");
					int money;
					scanf_s("%d", &money);
					if (money > db_m2) {
						printf("�ٽ� �Է��ϼ���: ");
						scanf_s("%d", &money);
					}
					else if (money <= db_id2) {
						db_m2 = db_m2 - money;
						printf("�ܾ�: %d", db_m2); printf("\n");
					}
				}
			}
			
			if (sel1 == 5) {
				if (log == db_id1) {
					printf("�Ա� �� �ݾ��� �Է��ϼ���: ");
					int money;
					scanf_s("%d",&money);
					db_m1 = db_m1 + money;
					printf("�ܾ�: %d", db_m1); printf("\n");
				}
				if (log == db_id2) {
					printf("�Ա� �� �ݾ��� �Է��ϼ���: ");
					int money;
					scanf_s("%d", &money);
					db_m2 = db_m2 + money;
					printf("�ܾ�: %d", db_m2); printf("\n");
				}
			}

			if (sel1 == 0) {
				log = -1;
				printf("�α׾ƿ� �Ǿ����ϴ�"); printf("\n");
			}
		}
	}

	return 0;
}