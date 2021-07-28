#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char data[100];
	FILE* file = NULL;
	fopen_s(&file, "test04.txt", "wt");
	fputs("3,100/20/40", file);
	fclose(file);

	fopen_s(&file, "test04.txt", "rt");
	fgets(data, 100, file);
	fclose(file);
	printf("%s", data); printf("\n");
}