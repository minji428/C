#include <stdio.h>
#include <Windows.h>

int main(void)
{
	int money = 1000;
	int x = 5, y = 5;		//출발지
	int speed = 0;		//속도		0~3
	int dir = 0;		//방향		0북 1동 2남 3서
	int dx = 7, dy = 1;		//목적지
	int run = 1;

	while (run == 1) {
		system("cls");
		printf("[수입] %d", money); printf("\n");
		printf("[현위치] x: %d, y: %d", x, y); printf("\n");
		printf("[속도] %d, [방향] %d", speed, dir); printf("\n");
		printf("[목적지] dx: %d, dy: %d", dx, dy); printf("\n");
		printf("1.전진 2.회전 3.속도조절"); printf("\n");

		int sel;
		scanf_s("%d", &sel);

		if (sel == 1) {
			if (dir == 0) { y = y + speed; }
			else if (dir == 1) { x = x + speed; }
			else if (dir == 2) { y = y - speed; }
			else if (dir == 3) { x = x - speed; }
		}
		
		else if (sel == 2) {
			printf("0)북, 1)동, 2)남, 3)서");
			scanf_s("%d", &dir);
		}

		else if (sel == 3) {
			printf("속도를 입력하세요 (0~3): ");
			scanf_s("%d", &speed);
		}

		if (x == dx && y == dy) {
			system("cls");
			printf("목적지에 도착하였습니다");
			run = 0;
		}

	}
}