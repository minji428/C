#include <stdio.h>
#include <Windows.h>

struct Node {
	int data;
	Node* next;
};
struct Stack {
	int count;
	Node* top;
};
Stack* create_stack() {
	Stack* stack = new Stack;
	memset(stack, 0, sizeof(Stack));
	return stack;
}
void push(Stack* stack, int data) {
	Node* node = new Node;
	node->data = data;
	node->next = stack->top;
	stack->top = node;
	stack->count += 1;
}
Node* pop(Stack* stack) {
	if (stack->count <= 0) return NULL;
	Node* del = stack->top;
	stack->top = del->next;
	stack->count -= 1;
	return del;
}
Node* peek(Stack* stack) {
	return stack->top;
}
void print_stack(Stack* stack) {
	int count = stack->count;
	Node* top = stack->top;
	for (int i = 0; i < count; i++) {
		printf("%d ", top->data);
		top = top->next;
	}
}

void main() {
	Stack* stack = create_stack();

	push(stack, 10);
	push(stack, 20);
	push(stack, 30);
	Node* del = pop(stack);
	delete del;
	push(stack, 40);
	push(stack, 50);
	print_stack(stack);
}