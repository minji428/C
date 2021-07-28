#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

void main() {
	FILE* file;
	fopen_s(&file, "test.txt", "wt");

	fputs("Çï·Î¿ì¾¾¾ð¾î", file);
	fclose(file);

}