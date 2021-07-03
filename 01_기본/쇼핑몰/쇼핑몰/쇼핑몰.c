#include <stdio.h>

int main(void)
{
	int n = 1;
	while (n == 1) {
		printf("==========쇼핑몰=========="); printf("\n");
		printf("1.남성의류 2.여성의류 3.종료"); printf("\n");
		int sel;
		scanf_s("%d", &sel);
		
		if (sel == 1) {
			int n1 = 1;
			while (n1 == 1) {
				printf("==========남성의류=========="); printf("\n");
				printf("1.티셔츠 2.바지 3.뒤로가기"); printf("\n");

				int sel1;
				scanf_s("%d", &sel1); 
				if (sel1 == 1) {
					printf("1.티셔츠");
				}
				if (sel1 == 2) {
					printf("2.바지");
				}
				if (sel1 == 3) {
					printf("3.뒤로가기"); printf("\n");
				}
				n1 = 0;
			}
			
		}
		else if (sel == 2) {
			int n2 = 1;
			while (n2 == 1) {
				printf("==========여성의류=========="); printf("\n");
				printf("1.티셔츠 2.치마 3.뒤로가기"); printf("\n");

				int sel2;
				scanf_s("%d", &sel2);
				if (sel2 == 1) {
					printf("1.티셔츠");
				}
				if (sel2 == 2) {
					printf("2.치마");
				}
				if (sel2 == 3) {
					printf("3.뒤로가기"); printf("\n");
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