#include <stdio.h>

// 문제 1) 아래 배열 a 에서 내가 입력한 값만 빼고 b 에 저장 
int main() {
	int a[5] = { 10,20,30,40,50 };
	int b[5] = { 0,0,0,0,0 };

	int check = -1;
	int idx;
	int k = 0;
	printf("뺄 값을 입력하세요 : ");
	scanf_s("%d", &idx);

	for (int i = 0; i < 5; i++) {
		if (idx == a[i]) {
			check = i;
		}
		else {
			b[k] = a[i];
			k++;
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", b[i]);
	}

}