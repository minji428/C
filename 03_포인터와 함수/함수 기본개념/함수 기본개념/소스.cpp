#include <stdio.h>
#include <Windows.h>

void test() {
	printf("����� test"); printf("\n");
}

int main(void) {
	int a = 10;
	test();
	test();
	test();

	return 0;
}