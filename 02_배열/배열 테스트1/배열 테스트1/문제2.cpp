#include <stdio.h>

int main() {
	//다음 리스트를 값을 입력하면 번호 출력

	int a[5] = { 10,4,5,3,1 };

	int value;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &value);
	
	int index = 0;
	int i = 0;
	while (i < 5) {
		if (a[i] == value) {
			index = i;
		}
		i += 1;
	}
	printf("index : %d", index); printf("\n");
}