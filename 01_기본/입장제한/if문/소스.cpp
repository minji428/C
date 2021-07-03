#include <stdio.h>

int main(void)
{
	int tall;

	printf("키를 입력하세요: ");
	scanf_s("%d", &tall);

	if (tall >= 130) {
		printf("입장\n");
	}

	if (120 <= tall && tall < 130) {
		printf("부모님 동반입니까?: 1)Y,2)N\n");
		int ans=0;
		scanf_s("%d", &ans);
		if (ans == 1) {
			printf("입장");
		}
		if (ans == 2) {
			printf("입장불가");
		}
	}

	if (tall < 120) {
		printf("입장불가");
	}
	return 0;
}