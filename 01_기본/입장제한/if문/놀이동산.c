#include <stdio.h>

int main(void)
{
	int tall;
	printf("Ű�� �Է��ϼ���: ");
	scanf_s("%d", &tall);

	if (tall >= 130) {
		printf("����\n");
	}
	if (120 <= tall & tall < 130) {
		printf("�θ�� �����Դϱ�? 1)yes 2)no");
		int ans;
		scanf_s("%d", &ans);
		if (ans == 1) {
			printf("���尡��");
		}
		if (ans == 2) {
			printf("����Ұ�");
		}
	}
	if (tall < 120) {
		printf("����Ұ�");
	}

	return 0;
}