#include <stdio.h>
#include <Windows.h>

int main(void)
{
	int money = 1000;
	int x = 5, y = 5;		//�����
	int speed = 0;		//�ӵ�		0~3
	int dir = 0;		//����		0�� 1�� 2�� 3��
	int dx = 7, dy = 1;		//������
	int run = 1;

	while (run == 1) {
		system("cls");
		printf("[����] %d", money); printf("\n");
		printf("[����ġ] x: %d, y: %d", x, y); printf("\n");
		printf("[�ӵ�] %d, [����] %d", speed, dir); printf("\n");
		printf("[������] dx: %d, dy: %d", dx, dy); printf("\n");
		printf("1.���� 2.ȸ�� 3.�ӵ�����"); printf("\n");

		int sel;
		scanf_s("%d", &sel);

		if (sel == 1) {
			if (dir == 0) { y = y + speed; }
			else if (dir == 1) { x = x + speed; }
			else if (dir == 2) { y = y - speed; }
			else if (dir == 3) { x = x - speed; }
		}
		
		else if (sel == 2) {
			printf("0)��, 1)��, 2)��, 3)��");
			scanf_s("%d", &dir);
		}

		else if (sel == 3) {
			printf("�ӵ��� �Է��ϼ��� (0~3): ");
			scanf_s("%d", &speed);
		}

		if (x == dx && y == dy) {
			system("cls");
			printf("�������� �����Ͽ����ϴ�");
			run = 0;
		}

	}
}