#include <stdio.h>

// ����2) �Ʒ��� ������ �̴�. ���迡 �հ��ѻ���� ��ȣ�� win �� ���� (60���̻��հ�)
int main() {
	int num[3] = { 1001,1002,1003 };
	int score[3] = { 50,83,78 };
	int win[3] = { 0,0,0 };

	int k = 0;
	for (int i = 0; i < 3; i++) {
		if (score[i] >= 60) {
			win[k] = num[i];
			k++;
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%d ", win[i]);
	}

}