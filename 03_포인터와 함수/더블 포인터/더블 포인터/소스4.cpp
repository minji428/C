#include <stdio.h>
#include <Windows.h>

int main() {
	int arr[4][1000] = { 0 };

	int** pp = 0;
	int count = 4;

	pp = new int* [count];

	pp[0] = new int[2];
	pp[0][0] = 70;
	pp[0][1] = 60;

	pp[1] = new int[3];
	pp[1][0] = 50;
	pp[1][1] = 30;
	pp[1][2] = 20;

	pp[2] = new int[1];
	pp[2][0] = 30;

	pp[3] = new int[10001];
}