#include <stdio.h>
#include <Windows.h>

//int test() {
//	return 1;
//}
//void test2() {
//}

void odd_even(int num) {
	if (num % 2 == 1) {
		printf("È¦¼ö"); printf("\n");
	}
	else {
		printf("Â¦¼ö"); printf("\n");
	}
}
void swap(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
void main() {

	//int a = test();
	//a = test2();

	odd_even(10);
	odd_even(1);
	odd_even(15);

	int a = 10;
	int b = 20;
	printf("%d %d", a, b); printf("\n");

	swap(a, b);
	printf("%d %d", a, b); printf("\n");
}