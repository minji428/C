#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	int num;
	char* name;
	int score;
};

int Join(Student** p, int size) {
	if (size == 0) {
		*p = new Student[1];
	}
	else {
		Student* temp = *p;
		*p = new Student[size + 1];
		for (int i = 0; i < size; i++) {
			*p[i] = temp[i];
		}
		delete[] temp;
	}
	printf("이름을 입력하세요 ");
	char name[100] = { 0 };
	scanf_s("%s", name, 100);
	int len = strlen(name);
	(*p)[size].name = new char[len + 1];
	strcpy_s((*p)[size].name, len + 1, name);
	printf("점수를 입력하세요 ");
	scanf_s("%d", &(*p)[size].score);
	(*p)[size].num = 1000 + size;
	size += 1;
	return size;
}

void Print(Student* p, int size) {
	for (int i = 0; i < size; i++) {
		printf("[%d] [%s] [%d]", p[i].num, p[i].name, p[i].score);
		printf("\n");
	}
}

void Save(Student* p, int size) {
	FILE* file = 0;
	fopen_s(&file, "student_data.txt", "wt");
	char itoa[100] = { 0 };
	_itoa_s(size, itoa, 10);
	char data[10000] = { 0 };
	strcat_s(data, itoa);
	strcat_s(data, "\n");
	for (int i = 0; i < size; i++) {
		_itoa_s(p[i].num, itoa, 10);
		strcat_s(data, itoa);
		strcat_s(data, "/");
		strcat_s(data, p[i].name);
		strcat_s(data, "/");
		_itoa_s(p[i].score, itoa, 10);
		strcat_s(data, itoa);
		if (i < size - 1) {
			strcat_s(data, "\n");
		}
	}
	fputs(data, file);
	fclose(file);
}

int Load(Student** p) {
	FILE* file = 0;
	fopen_s(&file, "student_data.txt", "rt");
	char data[10000] = { 0 };
	fgets(data, 10000, file);
	int size = atoi(data);
	*p = new Student[size];
	for (int i = 0; i < size; i++) {
		fgets(data, 10000, file);
		char* front;
		char* end;
		front = strtok_s(data, "/", &end);
		(*p)[i].num = atoi(front);
		front = strtok_s(end, "/", &end);
		int len = strlen(front);
		(*p)[i].name = new char[len + 1];
		strcpy_s((*p)[i].name, len + 1, front);
		(*p)[i].score = atoi(end);
	}
	return size;
}

void main() {
	Student* p = 0;
	int size = 0;
	int run = 1;
	while (run == 1) {
		printf("1.회원가입 2.회원탈퇴 3.전체출력 4.저장 5로드"); printf("\n");
		int sel; scanf_s("%d", &sel);
		if (sel == 1) {
			size = Join(&p, size);
		}
		else if (sel == 2) {
		}
		else if (sel == 3) {
			Print(p, size);
		}
		else if (sel == 4) {
			Save(p, size);
		}
		else if (sel == 5) {
			size = Load(&p);
		}
	}
}

