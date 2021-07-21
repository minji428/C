#include <stdio.h>
#include <Windows.h>


int get_player(int* p, int count) {
	int player = 0;
	for (int i = 0; i < count; i++) {
		if (p[i] == 3) {
				player = i;
		}
	}
	return player;
}

void printf_game(int* p, int count) {
	printf("[ ");
	for (int i = 0; i < count; i++) {
		if (p[i] == 3) {
			printf("ÀÂ");
		}
		else {
			printf("[]");
		}
	}
	printf("]"); printf("\n");
}

int move_left(int* p, int player, int count) {
	if (player - 1 >= 0) {
		p[player] = 0;
		p[player - 1] = 0;
		p[player - 1] = 3;
		player -= 1;
	}
	return player;
}

int move_right(int* p, int player, int count) {
	if (player + 1 < count) {
		p[player] = 0;
		p[player + 1] = 0;
		p[player + 1] = 3;
		player += 1;
	}
	return player;
}

void run(int* p, int count) {
	int player = get_player(p, count);

	while (1) {
		printf_game(p, count);
		int move = 0;
		printf("¿ŞÂÊ(1), ¿À¸¥ÂÊ(2) : ");
		scanf_s("%d", &move);
		if (move == 1) { player = move_left(p, player, count); }
		else if (move == 2) { player = move_right(p, player, count); }
	}
}



void main() {
	int count = 7;
	int game[7] = { 0,0,0,3,0,0,0 };

	run(&game[0], count);


}