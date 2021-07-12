#include <stdio.h>

int main() {
	//숫자를 하나 입력받고 아래 배열을 앞으로 하나씩 밀어낸 후 맨 뒤에 저장
	int a[5] = { 10,20,30,40,50 };
	int x;
	int idx = 0;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &x);
	
	/* a[0] = a[1];
	a[1] = a[2];
	a[2] = a[3];
	a[3] = a[4];
	a[4] = x; */

	for (int i = 0; i < 4; i++) {
		a[i] = a[i + 1];
	}
	a[4] = x;


	int i = 0;
	while (i < 5) {
		printf("%d ", a[i]);
		i += 1;
	}
}