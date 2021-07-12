#include <stdio.h>

// 문제3) 아래는 시험결과 이다 시험에 합격한 사람의 번호만 win2 에 저장 (60점이상 합격)
int main() {
	int data[6] = { 1001,80,1002,23,1003,78 };
	int win[3] = { 0,0,0 };

	int k = 0;
	for (int i = 1; i < 6; i += 2) {
		if (data[i] >= 60) {
			win[k] = data[i-1];
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%d ", win[i]);
	}
}