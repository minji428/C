#include <stdio.h>

int main(void)
{
	int n = 1;
	int num;
	int count = 0;
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &num);

	while (n <= num) {
		if (num % n == 0) {			//나머지가 0이면 나눠진거임
			count = count + 1;		//나눠질때마다 카운트를 셈
		}
		n = n + 1;			//그걸 더함
	}
		if (count == 2){		//최종 카운트가 2면 소수
			printf("소수");
		}
		else {				//2가 아닌 다른거면 소수가 아님
			printf("소수가 아니다");
		}

}