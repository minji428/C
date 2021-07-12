#include <stdio.h>

int main() {
	//다음 리스트를 이용해서 a 의 값중 홀수만 c 에 저장(위치는 앞에서 부터  저장)

	int a[5] = { 10,4,5,3,1 };
	int c[5] = { 0,0,0,0,0 };

	int i = 0;
	int i2 = 0;

	while (i < 5) {
		if (a[i] % 2 == 1) {
			c[i2] = a[i];
			i2 += 1;
		}
		i += 1;
	}
	i = 0;
	while (i < 5) {
		printf("[%d]", c[i]);
		i += 1;
	}
}