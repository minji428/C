#include <stdio.h>

int main() {
	//다음 리스트를 이용해서 a의 값중 홀수만 b에 저장(위치는 동일한 위치에 저장)
	int a[5] = { 10,4,5,3,1 };
	int b[5] = { 0,0,0,0,0 };

	int i = 0;
	while (i < 5) {
		if (a[i] % 2 == 1) {
			b[i] = a[i];
		}
		i += 1;
	}
	i = 0;
	while (i < 5) {
		printf("%d ", b[i]);
		i += 1;
	}
}