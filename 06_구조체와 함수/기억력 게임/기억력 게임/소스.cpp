#include <stdio.h>
#include <Windows.h>
#include <time.h>

struct Memory {
	int count;
	int* front;
	int* back;
	int cnt;

	void set_front() {
		int j = 1;
		for (int i = 0; i < count; i++) {
			if (i % 2 == 0 && i != 0) {
				j += 1;
			}
			front[i] = j;
		}
	}
	void set_back() {
		for (int i = 0; i < count; i++) {
			back[i] = 0;
		}
	}
	void shuffle_front() {
		for (int i = 0; i < 1000; i++) {
			int r = rand() % count;
			int tmp = front[0];
			front[0] = front[r];
			front[r] = tmp;
		}
	}
	void init() {
		count = 10;
		front = new int[count];
		set_front();
		back = new int[count];
		set_back();
		shuffle_front();
	}
	void print_card(int* p) {
		printf("[ ");
		for (int i = 0; i < count; i++) {
			printf("%d ", p[i]);
		}
		printf(" ]"); printf("\n");
	}
	int input_idx() {
		int idx = 0;
		printf("ÀÎµ¦½º ÀÔ·Â[1~10] : ");
		scanf_s("%d", &idx);
		idx -= 1;
		return idx;
	}
	void check_game() {
		int idx1 = input_idx();
		int idx2 = input_idx();

		if (front[idx1] == front[idx2]) {
			back[idx1] = front[idx1];
			back[idx2] = front[idx2];
			cnt += 1;
		}
	}
	void run() {
		init();
		while (1) {
			print_card(front);
			print_card(back);

			check_game();
			if (cnt == 5) {
				break;
			}
		}
	}
};

void main() {
	srand(time(0));

	Memory m = { 0 };
	m.run();
}