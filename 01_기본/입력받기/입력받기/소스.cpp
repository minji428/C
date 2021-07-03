#include <stdio.h>

int main(void)
{
	//연봉 출력
	float salary,annual;

	printf("월급:");
	scanf_s("%f", &salary);
	
	annual = salary * 12 * 0.9;
	printf("연봉: %.2f\n\n", annual);

	//삼각형 넓이 출력

	float num1, num2;
	
	printf("길이: ");
	scanf_s("%f", &num1);
	printf("높이: ");
	scanf_s("%f", &num2);

	printf("삼각형의 넓이: %.2f\n\n", num1 * num2);

	//숫자 2개 입력받고 서로 교환

	int x,y,z;

	

	printf("숫자1: ");
	scanf_s("%d", &x);
	printf("숫자2: ");
	scanf_s("%d", &y);

	z = x;
	x = y;
	y = z;

	printf("숫자1:%d ,숫자2:%d ", x, y);


	return 0;
}