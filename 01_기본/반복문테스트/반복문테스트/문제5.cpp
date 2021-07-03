#include <stdio.h>

int main() {
	//28의 배수 중에서 가장 큰 세자리 수를 구하시오
	int i = 0;
	int j = 0;
	while (i < 1000) {
		if (i % 28 == 0) {
			j = i;
		}
		i += 1;
	}
	printf("%d", j);
}