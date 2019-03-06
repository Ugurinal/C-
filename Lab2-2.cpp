#include <iostream>
#include <stdlib.h>
#define SIZE 10
using namespace std;

class stack {
	char array[SIZE];
	int tos;
public:
	stack();
	void push(char ch);
	char pop();

};

stack::stack() {
	cout << "Constructing a stack\n";
	tos = 0;
}
void stack::push(char ch) {
	if (tos == SIZE) {
		cout << "Stack is full\n";
		return;
	}
	array[tos] = ch;
	tos++;
}
char stack::pop() {
	if (tos == 0) {
		cout << "Stack is empty";
		return 0;
	}
	tos--;
	return array[tos];
}


int main()
{

	stack s1, s2;
	s1.push('a');
	s1.push('b');
	s1.push('c');
	s2.push('a');
	s2.push('b');
	s2.push('c');

	for (int i = 0; i < 3; i++) {
		cout << "Pop s1:" << s1.pop() << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout << "Pop s2:" << s2.pop() << endl;
	}
	
	system("pause");
}
