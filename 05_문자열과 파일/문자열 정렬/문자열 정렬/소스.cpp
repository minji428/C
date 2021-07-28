#include <stdio.h>
#include <string.h>

void main() {
	int a = strcmp("a", "a");
	printf("%d", a); printf("\n");

	a = strcmp("b", "a");
	printf("%d", a); printf("\n");

	a = strcmp("a", "b");
	printf("%d", a); printf("\n");

	char name[4][100] = {
		{"梯繹熱"},{"檜繹熱"},{"夢繹熱"},{"螃繹熱"},
	};

	for (int i = 0; i < 4; i++) {
		printf("%s ", name[i]);
	}
	printf("\n");

	for (int i = 0; i < 4; i++) {
		int id = i;
		char max[100] = { 0 };
		strcpy_s(max, 100, name[i]);

		for (int j = 0; j < 4; j++) {
			if (strcmp(max, name[j]) == 1) {
				strcpy_s(max, 100, name[j]);
				id = j;
			}
		}
		char temp[100] = { 0 };
		strcpy_s(temp, 100, name[i]);
		strcpy_s(name[i], 100, name[id]);
		strcpy_s(name[id], 100, temp);
	}
	for (int i = 0; i < 4; i++) {
		printf("%s ", name[i]);
	}
	
}