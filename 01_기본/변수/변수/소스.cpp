#include <stdio.h>

int main(void)
{  // 사각형 넓이 출력
	float garo, sero, rect;
	garo = 7;
	sero = 3;
	rect = garo * sero;

	printf("가로: %f, 세로:%f, 넓이: %f\n", garo, sero, rect);

	// 시험 평균 출력
	float sc1, sc2, sc3, total, avg;
	sc1 = 20;
	sc2 = 43;
	sc3 = 71;
	total = sc1 + sc2 + sc3;
	avg = total / 3;

	printf("시험점수: %.2f,%.2f,%.2f\n합: %.2f\n평균: %.2f\n", sc1, sc2, sc3, total, avg);

	//화폐매수 출력
	int money=186800;
	int n1 = money / 50000;
	int n2 = money % 50000 / 10000;
	int n3 = money % 50000 % 10000 / 5000;
	int n4 = money % 50000 % 10000 % 5000 / 500;
	int n5 = money % 50000 % 10000 % 5000 % 500 / 100;

	printf("5만원:%d\n1만원:%d\n5천원:%d\n500원:%d\n100원:%d\n",n1,n2,n3,n4,n5);

	//x,y의 값 교환
	int x, y, z;
	x = 10;
	y = 20;

	z = x;
	x = y;
	y = z;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	//연봉계산
	float salary;
	salary = 100;

	printf("월급:%f\n연봉:%f", salary, salary*0.9*12);

	return 0;
}