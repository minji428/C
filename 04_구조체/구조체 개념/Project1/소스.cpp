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
	printf("학번:%d, 성적:%d\n", user.num, user.score);

	User user2 = { 0 };
	user2.num = 1002;
	user2.score = 20;
	printf("학번:%d, 성적:%d\n", user2.num, user2.score);
}