#include <stdio.h>
#include <Windows.h>

int main() {
	int com[3] = { 3,0,7 };
	int me[3] = { 0 };
	int ball = 0;
	int strike = 0;

	int n = 0;


	printf("���� 3���� �Է��ϼ���: ");
	scanf_s("%d %d %d", &me[0], &me[1], &me[2]);
	while (n < 3) {
		int k = 0;
		while (k < 3) {
			if (com[n] == me[k]) {
				if (n == k) {
					strike += 1;
				}
				else{
					ball += 1;
				}
			}
			k += 1;
		}
		n += 1;
	}

	printf("[��Ʈ����ũ]%d", strike); printf("\n");
	printf("[��]%d", ball);
	
}