#include <Windows.h>
#include <stdio.h>
#include <string.h>

void main() {
	char temp[100] = { 0 };

	printf("�̸��� �Է��ϼ��� ");
	scanf_s("%s", temp, 100);

	int len = strlen(temp);

	char* p = new char[len + 1];

	strcpy_s(p, len + 1, temp);

	printf("���� ���� : %s", p); printf("\n");

}