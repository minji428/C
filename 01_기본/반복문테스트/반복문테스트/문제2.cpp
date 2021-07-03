#include <stdio.h>

int main() {
	//9의 배수중 십의 자리가 6인 첫번째 배수 출력
	int i = 0;
	while (i < 1000) {
		if (i % 9 == 0) {
			if (i / 10 == 6) {
				printf("%d", i);
				i = 1000;
			}
		}
		i += 1;
	}
}