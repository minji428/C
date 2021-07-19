#include <stdio.h>
#include <Windows.h>

void test1() {
	printf("!!"); printf("\n");
}

void test2(int a, int b) {
	printf("%d %d", a, b); printf("\n");
}

int test3(void) {
	int a = 10;
	return a;
}

int test4(int a, int b) {
	int c = a + b;
	return c;
}

void main() {
	test1();
	test2(10, 20);
	int c = test3();
	printf("test3==>%d", c); printf("\n");
	int d = test4(5, 6);
	printf("test4==>%d", d); printf("\n");

}