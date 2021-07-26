#include <stdio.h>
#include <Windows.h>

void main() {
	char name[100] = { 0 };
	printf("이름을 입력하세요 "); printf("\n");
	scanf_s("%s", name, 100);

	printf("이름 : %s", name); printf("\n");
	for (int i = 0; name[i] != '\0'; i++) {
		printf("[%c]", name[i]);
	}
	printf("\n");
}