#include <stdio.h>

int main() {
	//���� ����Ʈ�� ���� �Է��ϸ� ��ȣ ���

	int a[5] = { 10,4,5,3,1 };

	int value;
	printf("���� �Է��ϼ��� : ");
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