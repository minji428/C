#include <stdio.h>

// ����3) �Ʒ��� ������ �̴� ���迡 �հ��� ����� ��ȣ�� win2 �� ���� (60���̻� �հ�)
int main() {
	int data[6] = { 1001,80,1002,23,1003,78 };
	int win[3] = { 0,0,0 };

	int k = 0;
	for (int i = 1; i < 6; i += 2) {
		if (data[i] >= 60) {
			win[k] = data[i-1];
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%d ", win[i]);
	}
}