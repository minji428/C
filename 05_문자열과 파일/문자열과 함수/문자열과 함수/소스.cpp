#include <stdio.h>
#include <Windows.h>

void main() {
	char name[100] = { 0 };
	printf("�̸��� �Է��ϼ��� "); printf("\n");
	scanf_s("%s", name, 100);

	printf("�̸� : %s", name); printf("\n");
	for (int i = 0; name[i] != '\0'; i++) {
		printf("[%c]", name[i]);
	}
	printf("\n");
}