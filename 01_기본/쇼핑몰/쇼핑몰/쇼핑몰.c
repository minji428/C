#include <stdio.h>

int main(void)
{
	int n = 1;
	while (n == 1) {
		printf("==========���θ�=========="); printf("\n");
		printf("1.�����Ƿ� 2.�����Ƿ� 3.����"); printf("\n");
		int sel;
		scanf_s("%d", &sel);
		
		if (sel == 1) {
			int n1 = 1;
			while (n1 == 1) {
				printf("==========�����Ƿ�=========="); printf("\n");
				printf("1.Ƽ���� 2.���� 3.�ڷΰ���"); printf("\n");

				int sel1;
				scanf_s("%d", &sel1); 
				if (sel1 == 1) {
					printf("1.Ƽ����");
				}
				if (sel1 == 2) {
					printf("2.����");
				}
				if (sel1 == 3) {
					printf("3.�ڷΰ���"); printf("\n");
				}
				n1 = 0;
			}
			
		}
		else if (sel == 2) {
			int n2 = 1;
			while (n2 == 1) {
				printf("==========�����Ƿ�=========="); printf("\n");
				printf("1.Ƽ���� 2.ġ�� 3.�ڷΰ���"); printf("\n");

				int sel2;
				scanf_s("%d", &sel2);
				if (sel2 == 1) {
					printf("1.Ƽ����");
				}
				if (sel2 == 2) {
					printf("2.ġ��");
				}
				if (sel2 == 3) {
					printf("3.�ڷΰ���"); printf("\n");
				}
				n2 = 0;
			}

		}
		else if (sel == 3) {
			n = 0;
		}
	}
	return 0;
}