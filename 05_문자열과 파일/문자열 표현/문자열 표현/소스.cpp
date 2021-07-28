#include <stdio.h>
#include <string.h>

void main() {
	const char* name = "±èÃ¶¼ö";;

	int a = strlen(name);
	printf("%d", a);
	printf("\n");

	char temp[] = "abcdegf";
	a = strlen(temp);
	printf("%d", a);
	printf("\n");

	char* test = new char[a + 1];
	strcpy_s(test, a + 1, temp);
	printf("%s", test);
	printf("\n");
}