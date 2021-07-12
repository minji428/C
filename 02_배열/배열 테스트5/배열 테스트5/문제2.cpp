#include <stdio.h>

// 문제 2) 아래 배열에서 내가 입력한 번호 만 빼고 d 에 저장 
int main() {
	int c[6] = { 1001,40,1002,65,1003,70 };
	int d[6] = { 0,0,0,0,0,0 };

	//int check = -1;
	int idx;
	int k = 0;
	printf("뺄 값을 입력하세요 : ");
	scanf_s("%d", &idx);

	
	for (int i = 0; i < 6; i+=2) {
		if (idx != c[i]) {
			d[k] = c[i];
			d[k + 1] = c[i + 1];
			k += 2;
		}
	}
	for (int i = 0; i < 6; i++) {
		printf("%d ", d[i]);
	}
}