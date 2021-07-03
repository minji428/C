#include <stdio.h>

int main() {
	//50에서 100까지 자연수중에서 9의 배수는 모두 몇개입니까?
	int i = 50;
	int count = 0;
	while (i < 100) {
		if (i % 9 == 0) {
			count += 1;
			printf("%d ", i);
		}
		i += 1;
	}
	printf("\n");
	printf("%d개", count);
}