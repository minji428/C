#include <stdio.h>
#include <Windows.h>

struct Vector {
	int* arr;
	int cnt;

	void print_menu() {
		printf("1.추가하기"); printf("\n");
		printf("2.삭제하기"); printf("\n");
		printf("3.삽입하기"); printf("\n");
		printf("4.정렬하기"); printf("\n");
		printf("5.저장하기"); printf("\n");
		printf("6.로드하기"); printf("\n");
		printf("0.종료하기"); printf("\n");
	}
	void init() {
		arr = 0;
		cnt = 0;
	}
	void show_all() {
		if (cnt != 0) {
			for (int i = 0; i < cnt; i++) {
				printf("%d ", arr[i]);
			}
			printf("\n");
		}
	}
	void add() {
		int add_num = 0;
		printf("추가할 값을 입력하세요 : ");
		scanf_s("%d", &add_num);

		if (cnt == 0) {
			arr = new int[cnt + 1];
		}
		else if (cnt > 0) {
			int* tmp = arr;
			arr = new int[cnt + 1];
			for (int i = 0; i < cnt; i++) {
				arr[i] = tmp[i];
			}
			delete[]tmp;
		}
		arr[cnt] = add_num;
		cnt += 1;
	}
	void del() {
		int del_num = 0;
		printf("삭제할 값을 입력하세요 : ");
		scanf_s("%d", &del_num);

		int check = -1;
		for (int i = 0; i < cnt; i++) {
			if (arr[i] == del_num) {
				check = i;
			}
		}
		if (check == -1) {
			printf("입력하신 값은 존재하지 않습니다."); printf("\n");
			//return;	//리턴을 안쓰려면 밑에있는 문장을 else로 묶기
		}
		else {
			if (cnt == 1) {
				arr = 0;
			}
			else {
				int* tmp = arr;
				arr = new int[cnt - 1];

				int j = 0;
				for (int i = 0; i < cnt; i++) {
					if (i != check) {
						arr[j] = tmp[i];
						j += 1;
					}
				}
				delete[]tmp;
			}
			cnt -= 1;
		}
	}
	void insert() {
		int insert_idx = 0;
		printf("삽입할 위치를 입력하세요 : ");
		scanf_s("%d", &insert_idx);

		if (cnt < insert_idx || insert_idx < 0) {
			printf("해당 위치에는 삽입할 수 없습니다.\n");
			return;
		}

		int insert_num = 0;
		printf("삽입할 값을 입력하세요 : ");
		scanf_s("%d", &insert_num);

		if (cnt == 0) {
			arr = new int[cnt + 1];
		}
		else if (cnt > 0) {
			int* tmp = arr;
			arr = new int[cnt + 1];

			int j = 0;
			for (int i = 0; i < cnt + 1; i++) {
				if (i != insert_idx) {
					arr[i] = tmp[j];
					j += 1;
				}
			}
			delete[]tmp;
		}
		arr[insert_idx] = insert_num;
		cnt += 1;
	}
	void sort() {
		for (int i = 0; i < cnt; i++) {
			int max_num = arr[i];
			int max_idx = i;
		
			for (int j = i; i < cnt; j++) {
				if (max_num < arr[j]) {
					max_num = arr[j];
					max_idx = j;
				}
			}
			int tmp = arr[i];
			arr[i] = arr[max_idx];
			arr[max_idx] = tmp;
		}
	}
	void save() {
		char data[100] = { 0 };

		_itoa_s(cnt, data, 10);
		strcat_s(data, ",");

		for (int i = 0; i < cnt; i++) {
			char tmp[100] = { 0 };
			_itoa_s(arr[i], tmp, 10);
			strcat_s(data, tmp);
			if (i != cnt - 1) {
				strcat_s(data, "/");
			}
		}
		printf(data);

		FILE* f = NULL;
		fopen_s(&f, "ex11.txt", "wt");
		fputs(data, f);
		fclose(f);
		printf("저장을 완료하였습니다.");
	}
	void load() {
		char data[100] = { 0 };

		FILE* f = NULL;
		fopen_s(&f, "ex11.txt", "rt");
		if (f != NULL) {
			fgets(data, 100, f);
			fclose(f);
			
			char* front = 0;
			char* end = 0;

			front = strtok_s(data, ",", &end);
			cnt = atoi(front);

			arr = new int[cnt];
			for (int i = 0; i < cnt; i++) {
				front = strtok_s(end, "/", &end);
				arr[i] = atoi(front);
			}
		}
	}
	void run() {
		init();
		while (1) {
			show_all();
			print_menu();

			int choice = 0;
			printf("메뉴 선택 : ");
			scanf_s("%d", &choice);

			if (choice == 1) {
				add();
			}
			else if (choice == 2) {
				del();
			}
			else if (choice == 3) {
				insert();
			}
			else if (choice == 4) {
				sort();
			}
			else if (choice == 5) {
				save();
			}
			else if (choice == 6) {
				load();
			}
			else if (choice == 0) {
				printf("프로그램 종료"); printf("\n");
				break;
			}
		}
	}
};

void main() {
	Vector v = { 0 };
	v.run();
}