#include <Windows.h>
#include <stdio.h>
#include <string.h>

void main() {
	char temp[100] = { 0 };

	printf("이름을 입력하세요 ");
	scanf_s("%s", temp, 100);

	int len = strlen(temp);

	char* p = new char[len + 1];

	strcpy_s(p, len + 1, temp);

	printf("복사 성공 : %s", p); printf("\n");

}