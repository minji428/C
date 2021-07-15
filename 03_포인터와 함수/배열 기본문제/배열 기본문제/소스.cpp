#include <stdio.h>
#include <Windows.h>

void print_arr(int* p, int count) {
	printf("[");
	for (int i = 0; i < count; i++) {
		printf(" %d ", p[i]);
	}
	printf("]");
}
//��ü �� ����
int test1(int* p, int count) {
	int tot = 0;
	for (int i = 0; i < count; i++) {
		tot += p[i];
	}
	return tot;
}

//4�� ����� �迭�� ������ ���� 
int* test2(int* p, int count, int* p_size) {
	int cnt = 0;
	for (int i = 0; i < count; i++) {
		if (p[i] % 4 == 0) {
			cnt += 1;
		}
	}
	p_size[0] = cnt;

	int* tmp = new int[cnt];

	int j = 0;
	for (int i = 0; i < 5; i++) {
		if (p[i] % 4 == 0) {
			tmp[j] = p[i];
			j += 1;
		}
	}
	return tmp;
}


//4�� ����� �� ����
int test3(int* p, int count) {
	int tot = 0;
	for (int i = 0; i < count; i++) {
		if (p[i] % 4 == 0) {
			tot += p[i];
		}
	}
	return tot;
}




//(�ε�����)�� ��ü
void test4(int* p, int idx1, int idx2) {
	int temp = p[idx1];
	p[idx1] = p[idx2];
	p[idx2] = temp;
}


//(������)�� ��ü
void test5(int* p, int count, int value1, int value2) {
	int idx1 = 0;
	int idx2 = 0;
	for (int i = 0; i < count; i++) {
		if (p[i] == value1) {
			idx1 = i;
		}
		if (p[i] == value2) {
			idx2 = i;
		}

		int temp = p[idx1];
		p[idx1] = p[idx2];
		p[idx2] = temp;

	}
}


int t(int a, int b) {
	int total = 0;
	for (int i = a; i <= b; i++) {
		total += i;
	}
	return total;
}

int* tt(int num , int* c) {
	for (int i = 0; i <= num; i++) {
		if (num % 3 == 0) {
			c[0] += 1;
		}
	}
	int* p = new int[c[0]];
	int j = 0;
	for (int i = 0; i <= num; i++) {
		if (num % 3 == 0) {
			p[j] = i;
			j += 1;
		}
	}
	return p;

}
void main() {

	// 1~3������ �հ� 2~6������ �� �� ���� ��� 
	int aa = t(1, 3);
	int bb = t(2, 6);
	printf("%d", aa + bb);
	printf("\n");
	// 1~37�߿��� 3�� ����� �迭�� ��Ƽ� ��� 
	int tnum = 37;
	int c = 0;
	int* tp = tt(tnum , &c);
	for (int i = 0; i < c; i++) {
		printf("%d", tp[i]);
	}

	printf("\n"); printf("\n");
	int count = 5;
	int arr[5] = { 10,20,30,40,50 };

	printf(">>���� 1"); printf("\n");
	int tot = test1(&arr[0], count);
	printf("tot = %d", tot);
	printf("\n");

	printf(">>���� 2"); printf("\n");
	int p_size = 0;
	int* p = test2(&arr[0], count, &p_size);
	print_arr(p, p_size);
	printf("\n");

	printf(">>���� 3"); printf("\n");
	tot = test3(&arr[0], count);
	printf("tot=%d", tot); printf("\n");

	printf(">>���� 4"); printf("\n");
	test4(&arr[0], 0, 4);
	print_arr(&arr[0], 5);
	printf("\n");

	printf(">>���� 5"); printf("\n");
	test5(&arr[0], count, 20, 40);
	print_arr(&arr[0], count); printf("\n");

}