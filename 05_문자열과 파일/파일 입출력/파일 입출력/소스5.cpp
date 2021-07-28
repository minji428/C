#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>

struct Student {
	char* name;
	int score;
};

void main() {
	char data[100] = "3\n梯繹熱/20\n檜虜熱/30\n譆團熱/50";
	printf("%s", data); printf("\n");

	char* end;
	char* front;
	front = strtok_s(data, "\n", &end);

	printf("%s", front); printf("\n");
	printf("%s", end); printf("\n");

	int size = atoi(front);
	Student* p = new Student[size];
	for (int i = 0; i < size; i++) {
		front = strtok_s(end, "\n", &end);
		char* end2;
		front = strtok_s(front, "/", &end2);
		int len = strlen(front);
		p[i].name = new char[len + 1];
		strcpy_s(p[i].name, len + 1, front);
		p[i].score = atoi(end2);
	}
	for (int i = 0; i < size; i++) {
		printf("[%s]", p[i].name);
		printf("[%d]", p[i].score); printf("\n");
	}

}