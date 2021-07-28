#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

void main() {
	FILE* file;
	fopen_s(&file, "test01.txt", "wt");

	fputs("100/34/65/2", file);
	fclose(file);


}