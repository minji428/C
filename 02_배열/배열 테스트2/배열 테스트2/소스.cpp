#include <stdio.h>

int main() {
	//문제1) 인덱스(방번호)를 입력하면 값 출력
	int a[5] = { 10,20,30,40,50 };
	int index;
	printf("방번호(index)를 입력하세요 : ");
	scanf_s("%d", &index);

	printf("%d", a[index]);
	printf("\n"); printf("\n");

	//문제2) 아래 배열 중 가장 큰 값 출력
	int b[5] = { 12,54,23,87,1 };
	int max = b[0];
	int i = 0;
	while (i < 5) {
		if (b[i] > max) {
			max = b[i];
		}i += 1;
	}
	printf("%d", max);
	printf("\n"); printf("\n");

	//문제3) 아래 배열 중 홀수의 개수 출력
	int c[5] = { 12,54,23,87,1 };
	int count = 0;
	int j = 0;
	while (j < 5) {
		if (c[j] % 2 == 1) {
			count += 1;
		}j += 1;
	}
	printf("홀수의 개수 : %d개", count);
	printf("\n"); printf("\n");

	//문제4) 아래배열을 거꾸로 저장
	int d[5] = { 1,2,3,4,5 };
	int e[5] = { 0,0,0,0,0 };

	int k = 0;
	int back = 4;
	while (k < 5) {
		e[k] = d[back];
		back -= 1;
		k += 1;
	}
	k = 0;
	while (k < 5) {
		printf("[%d]", e[k]);
		k += 1;
	}
	printf("\n");
}