#include <stdio.h>
#include <Windows.h>

struct Game {
	int count;
	int* game;
	int player;

	void init() {
		count = 7;
		player = 3;
		game = new int[count];
		for (int i = 0; i < count; i++) {
			game[i] = 0;
		}
		game[player] = 3;
	}
	void print_game() {
		printf("[ ");
		for (int i = 0; i < count; i++) {
			if (game[i] == 3) {
				printf("ÀÂ");
			}
			else {
				printf("[]");
			}
		}
		printf(" ]"); printf("\n");
	}
	void move_left() {
		if (player - 1 >= 0) {
			game[player] = 0;
			game[player - 1] = 3;
			player -= 1;
		}
	}
	void move_right() {
		if (player + 1 < count) {
			game[player] = 0;
			game[player + 1] = 3;
			player += 1;
		}
	}
	void run() {
		init();
		while (1) {
			print_game();
			int move = 0;
			printf("¿ÞÂÊ(1), ¿À¸¥ÂÊ(2) : ");
			scanf_s("%d", &move);
			if (move == 1) {
				move_left();
			}
			else if (move == 2) {
				move_right();
			}
		}
	}
};

void main() {
	Game g = { 0 };
	g.run();
}