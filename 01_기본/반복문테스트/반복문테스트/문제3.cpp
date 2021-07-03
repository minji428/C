#include <stdio.h>

int main() {
	//8로 나누면 5가 남는 수 중 150에 가장 가까운 수를 구하시오
	int i = 0;
	int j = 0;
	while (i < 150) {
		if (i % 8 == 5) {
			j = i;
		}
		i += 1;
	}
	printf("%d", j);
}