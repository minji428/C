#include <stdio.h>

int main(void)
{
	int n = 1;
	int num;
	int count = 0;
	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &num);

	while (n <= num) {
		if (num % n == 0) {			//�������� 0�̸� ����������
			count = count + 1;		//������������ ī��Ʈ�� ��
		}
		n = n + 1;			//�װ� ����
	}
		if (count == 2){		//���� ī��Ʈ�� 2�� �Ҽ�
			printf("�Ҽ�");
		}
		else {				//2�� �ƴ� �ٸ��Ÿ� �Ҽ��� �ƴ�
			printf("�Ҽ��� �ƴϴ�");
		}

}