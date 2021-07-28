#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>

struct User {
	int num; char id[100]; char pw[100];
};
struct User1 {
	int num; char* id; char* pw;
};


void main() {


	int a;
	int ar[3];
	int* p = new int[3];
	delete[] p;

	User1* up1 = new User1[2];
	up1[0].id = new char[100];
	up1[0].pw = new char[100];


	delete[] up1[0].id;
	delete[] up1[0].pw;
	delete[] up1;

	User* up = new User[2];
	delete[] up;


	
}