#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

void main() {
	FILE* file;
	fopen_s(&file, "test.txt", "wt");

	fputs("��ο쾾���", file);
	fclose(file);

}