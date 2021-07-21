#include <Windows.h>
#include <stdio.h>


void main() {

    int num = 10;

    int arr[5] = { 0 };

    int count = 5;
    int* p = new int[count];
    p[2] = 10;
    delete[] p;                

}


