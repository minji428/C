#include <stdio.h>

int main() {
	//���ڸ� �ϳ� �Է¹ް� �Ʒ� �迭�� �ڷ� �ϳ��� �о�� �� �տ� ���� 
	int b[5] = { 10,20,30,40,50 };
	int x;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &x);

	/*b[0] = x;
	b[1] = b[0];
	b[2] = b[1];
	b[3] = b[4];
	b[4] = b[3];*/

	for (int i = 4; i > 0; i--) {
		b[i] = b[i - 1];
	}	
	b[0] = x;

	int i = 0;
	while (i < 5) {
		printf("%d ", b[i]);
		i += 1;
	}
}

