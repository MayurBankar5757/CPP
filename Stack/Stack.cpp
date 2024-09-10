#include"Stack.h"

Stack::Stack() {
	top = -1;
	size = 3;
	arr = new int[size];

}
Stack::Stack(int s) {
    size = s;
	top = -1;
	arr = new int[s];

}

void Stack::push(int no) {


	if (top == (size - 1)) {
		cout << "\n\tStack OverFlow !!!";

	}
	else {
		top++;
		arr[top] = no;
	}

}
int Stack::pop() {
	int data = 0;
	if (top == -1) {
		cout << "\n\t Stack is Empty";
	}
	else {

		data = arr[top];
		top--;

	}
	return data;
}
void Stack::Display() {
	

	for (int i = 0; i < top; i++) {

		cout << "\n\t" << arr[i];
	}
}

