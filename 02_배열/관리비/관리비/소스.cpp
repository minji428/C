#include <stdio.h>
#include <Windows.h>

int main() {
	int apt[3][4] = {
		{101,102,103,104},
		{201,202,203,204},
		{301,302,303,304}
	};
	int pay[3][4] = {
		{1000,1100,1200,1300},
		{2000,2100,12200,2300},
		{3000,3100,3200,3300}
	};

	//각 층별 관리비 합계
	int n = 0;
	int total[3] = { 0 };
	while (n < 3) {
		int k = 0;
		while (k < 4) {
			total[n] = total[n] + pay[n][k];
			k += 1;
		}
		n += 1;
	}


	//주소를 입력하면 관리비 출력
	printf("주소를 입력하세요: ");
	int _dong;
	scanf_s("%d", &_dong);
	n = 0;
	while (n < 3) {
		int k = 0;
		while (k < 4) {
			if (_dong == apt[n][k]) {
				printf("%d", pay[n][k]);
			}
			k += 1;
		}
		n += 1;
	}printf("\n"); printf("\n");

	//주소를 2개 입력하면 관리비 교환
	int _dong1 = 0;
	int _dong2 = 0;
	int in1 = 0;
	int in2 = 0;
	int in3 = 0;
	int in4 = 0;
	printf("주소1를 입력하세요: ");
	scanf_s("%d", &_dong1);
	printf("주소2를 입력하세요: ");
	scanf_s("%d", &_dong2);

	n = 0;
	while (n < 3) {
		int k = 0;
		while (k < 4) {
			if (_dong1 == apt[n][k]) {
				in1 = n;
				in2 = k;
				
			}
			if (_dong2 == apt[n][k]) {
				in3 = n;
				in4 = k;
				
			}
			k += 1;
		}
		n += 1;
	}
	int temp = pay[in1][in2];
	pay[in1][in2] = pay[in3][in4];
	pay[in3][in4] = temp;
	printf("%d", pay[in1][in2]); printf("\n");
	printf("%d", pay[in3][in4]);
	printf("\n"); printf("\n");

	//관리비 가장 많이 나온 집 출력

	int max_num = pay[0][0];
	in1 = 0;
	in2 = 0;

	n = 0;
	while (n < 3) {
		int k = 0;
		while (k < 4) {
			if (max_num < pay[n][k]) {
				max_num = pay[n][k];
				in1 = n;
				in2 = k;
			}
			k = k + 1;
		}
		n = n + 1;
	}
	printf("관리비가 가장 많이 나온 집은 %d호 %d원 입니다", apt[in1][in2], pay[in1][in2]);





}