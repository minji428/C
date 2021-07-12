#include <stdio.h>

// 문제2) 아래는 시험결과 이다. 시험에 합격한사람의 번호만 win 에 저장 (60점이상합격)
int main() {
	int num[3] = { 1001,1002,1003 };
	int score[3] = { 50,83,78 };
	int win[3] = { 0,0,0 };

	int k = 0;
	for (int i = 0; i < 3; i++) {
		if (score[i] >= 60) {
			win[k] = num[i];
			k++;
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%d ", win[i]);
	}

}