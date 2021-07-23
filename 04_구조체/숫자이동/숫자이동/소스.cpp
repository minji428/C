#include <stdio.h>
#include <Windows.h>

struct Game {
	int count;
	int* game;
	int player;
};

void main() {
	Game g = { 0 };
	g.count = 7;
	g.game = new int[g.count];
	for (int i = 0; i < g.count; i++) {
		g.game[i] = 0;
	}
	g.player = 3;
	g.game[g.player] = 3;

	while (1) {
		printf("[ ");
		for (int i = 0; i < g.count; i++) {
			if (g.game[i] == 3) {
				printf("읓");
			}
			else {
				printf("[]");
			}
		}
		printf(" ]"); printf("\n");

		int move = 0;
		printf("왼쪽(1), 오른쪽(2) : ");
		scanf_s("%d", &move);

		if (move == 1) {
			if (g.player - 1 >= 0) {
				g.game[g.player] = 0;
				g.game[g.player - 1] = 3;
				g.player -= 1;
			}
			else {
				printf("해당위치로는 갈 수 없습니다."); printf("\n");
			}
		}
		else if (move == 2) {
			if (g.player + 1 < g.count) {
				g.game[g.player] = 0;
				g.game[g.player + 1] = 3;
				g.player += 1;
			}
			else {
				printf("해당위치로는 갈 수 없습니다."); printf("\n");
			}
		}
	}
}