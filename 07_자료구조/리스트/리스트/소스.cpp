//가변배열 종류 => vector, list
// === [파일 이름] ===
// list.h
//===================
#include<stdio.h>
#include <Windows.h>
struct Node {
	int data;
	Node* next;
};
struct List {
	int count;
	Node* head;
};
List* create_list() {
	List* list = new List();
	memset(list, 0, sizeof(list));
	return list;
}
void print_data(List* list) {
	int count = list->count;
	Node* pre = list->head;
	for (int i = 0; i < count; i++) {
		printf("출력 : %d", pre->data);
		printf("\n");
		pre = pre->next;
	}
}
void push_back(List* list, int data) {
	Node* node = new Node;
	node->data = data;
	node->next = 0;
	int count = list->count;
	Node* pre = list->head;
	if (count == 0) {
		list->head = node;
	}
	else if (count == 1) {
		/*for (int i = 0; i < count - 1; i++) {
			pre = pre->next;
		}*/
		pre->next = node;
	}
	else if (count > 1) {
		for (int i = 0; i < count - 1; i++) {
			pre = pre->next;
		}
		pre->next = node;
	}
	list->count += 1;
}
void remove_index(List* list, int pos) {
	if (list->count <= 0) return;
	if (pos >= list->count) return;
	Node* pre = list->head;
	Node* del = 0;
	if (pos == 0) {
		del = pre;
		list->head = del->next;
	}
	else if (pos > 0) {
		for (int i = 0; i < pos - 1; i++) {
			pre = pre->next;
		}
		del = pre->next;
		pre->next = del->next;
	}
	list->count -= 1;
	delete del;
}
void sort_list(List* list) {
	int count = list->count;
	Node* head = list->head;
	for (int i = 0; i < count; i++) {
		int max = head->data;
		Node* temp = head;
		Node* max_node = temp;
		for (int n = i; n < count; n++) {
			if (temp->data < max) {
				max = head->data;
				max_node = temp;
			}
			temp = temp->next;
		}
		int data;
		data = max_node->data;
		max_node->data = head->data;
		head->data = data;
		head = head->next;
	}
}

void main() {
	List* list = create_list();
	int run = 1;
	while (run == 1) {
		print_data(list);
		printf("==== 링크드 리스트 ====");
		printf("\n");
		printf("1.추가 2.삭제 3.정렬 0.종료");
		printf("\n");
		int sel; scanf_s("%d", &sel);
		if (sel == 0)break;
		if (sel == 1) {
			printf("값을 입력하세요 >> ");
			int data; scanf_s("%d", &data);
			push_back(list, data);
		}
		else if (sel == 2) {
			printf("인덱스를 입력하세요 >> ");
			int index; scanf_s("%d", &index);
			remove_index(list, index);
		}
		else if (sel == 3) {
			sort_list(list);
		}
	}
}

