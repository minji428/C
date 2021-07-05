#include <stdio.h>
#include <Windows.h>

int main(void) {

	int id[] = { 7777,4545,0,0,0 };
	int pw[] = { 111,222,0,0,0 };
	int count = 2;

	int run = 1;
	while (run == 1) {
		printf("1.회원가입 2.전체출력 0.종료"); printf("\n");
		int sel = 0;
		scanf_s("%d", &sel);

		if (sel == 0) {
			run = 0;
		}
		else if (sel == 1) {
			if (count < 5) {
				printf("id와 pw를 입력하세요 "); printf("\n");
				int id1 = 0, pw1 = 0;
				scanf_s("%d", &id1);
				scanf_s("%d", &pw1);

				int check = 0;
				for (int i=0; i < 5; i++) {
					if (id[i] == id1) {
						check = 1;
						printf("중복된 아이디 입니다"); printf("\n");
					}
				}
				if (check == 0) {
					id[count] = id1;
					pw[count] = pw1;
					count = count + 1;
				}
			}
			else {
				printf("더이상 회원가입이 불가합니다"); printf("\n");
			}
		}

		else if (sel == 2) {
			for (int i = 0; i < count; i++) {
				printf("[%d 번][%d][%d]", i + 1, id[i], pw[i]); printf("\n");
			}
		}


	}



	return 0;
}