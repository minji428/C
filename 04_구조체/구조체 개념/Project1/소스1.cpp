#include <Windows.h>
#include <stdio.h>

struct User {
	int num;
	int score;
};

void main() {
	User user = { 0 };
	user.num = 1001;
	user.score = 10;

	User user2 = { 0 };
	user2.num = 1002;
	user2.score = 20;

	User user3 = { 0 };
	user3.num = 1003;
	user3.score = 30;

	User list[3] = { 0 };
	//int nums[3];
	//int scores[3];
	
	
	list[0].num = 1001;
	list[0].score = 10;

	list[1].num = 1002;
	list[1].score = 20;

	list[2].num = 1003;
	list[2].score = 30;



	for (int i = 0; i < 3; i++) {
		printf("�й�:%d, ����:%d", list[i].num, list[i].score); printf("\n");
	}
}