#include <stdio.h>

int main(void)
{
	int db_id1 = 1111, db_id2 = 2222;
	int db_pas1 = 2222, db_pas2 = 1111;
	int db_m1 = 1000, db_m2 = 2000;

	int log = -1;		//�α׾ƿ�
	int run = 1;

	while (run == 1) {
		if (log == -1) {
			printf("�α��� �ϼ���"); printf("\n");

		}
		else {
			printf("[%d] �α�����", log); printf("\n");
		}
		printf("===== mega ATM ====="); printf("\n");
		printf("1.�α��� 2.�α׾ƿ� 3.�ܾ���ȸ"); printf("\n");

		int sel;
		scanf_s("%d", &sel);

		if (sel == 1) {
			printf("���̵� �Է��ϼ���: ");
			int id, pas;
			scanf_s("%d", &id);
			printf("��й�ȣ�� �Է��ϼ���: ");
			scanf_s("%d", &pas);
			if (id == db_id1 && pas==db_pas1) {
				log = db_id1;
			}
			else if (id == db_id2 && pas == db_pas2) {
				log = db_id2;
			}
			else {
				log = -1;
			}
		}
		else if (sel == 2) {
			log = -1;
			printf("�α׾ƿ� �Ǿ����ϴ�"); printf("\n");
		}
		else if (sel == 3) {
			if (log != -1) {
				if (log == db_id1) {
					printf("�ܾ�: %d", db_m1); printf("\n");
				}
				else if (log == db_id2) {
					printf("�ܾ�: %d", db_m2); printf("\n");
				}
			}
			
		}
		

	}
	return 0;
}