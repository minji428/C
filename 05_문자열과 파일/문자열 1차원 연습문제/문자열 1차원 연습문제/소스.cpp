#include <stdio.h>
#include <Windows.h>
#include <string.h>

void main() {

	char str[100] = "hello,java,android";
	char** pp = 0;

	int count = 0;
	for (int i = 0; str[i] != 0; i++) {
		if (str[i] == ',') {
			count += 1;
		}
	}
	printf("ÄÞ¸¶ÀÇ °³¼ö = %d\n", count);

	int size = count + 1;
	pp = new char* [size];

	int j = 0;
	int k = 0;
	char temp[100] = { 0 };
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ',') {
			temp[j] = '\0';

			int length = strlen(temp);
			pp[k] = new char[length + 1];
			strcpy_s(pp[k], length + 1, temp);
			k += 1;

			j = 0;
			continue;
		}

		if (i == strlen(str) - 1) {
			temp[j] = str[i];
			j += 1;
			temp[j] = '\0';

			int length = strlen(temp);
			pp[k] = new char[length + 1];
			strcpy_s(pp[k], length + 1, temp);
			k += 1;
		}
		temp[j] = str[i];
		j += 1;
	}
	for (int i = 0; i < size; i++) {
		printf("%s\n", pp[i]);
	}
}