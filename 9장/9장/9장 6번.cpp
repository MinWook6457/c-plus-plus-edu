#include <iostream>

using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};

class IntStack : public AbstractStack {
	int top;
	int capacity;
	int* p;

public:
	IntStack(int size) {
		p = new int[size];
		this->capacity = size;
		top = 0;
	}
	bool push(int n) {
		if (top >= capacity) {
			cout << "Stack is full" << endl;
			return false;
		}
		p[top] = n;
		top++;
		return true;
	}
	bool pop(int& n) {
		if (top == 0) {
			cout << "Stack is empty" << endl;
			return false;
		}
		top--;
		n = p[top];
		return true;
	}
	int size() {
		return top;
	}
	void show() {
		cout << "| ";
		for (int i = 0; i < top; i++) {
			cout << p[i] << ' ';
		}
		cout << "|" << endl;
	}
};

int main() {
	IntStack intStack(6);

	intStack.push(1);
	intStack.push(2);
	intStack.push(3);
	intStack.push(4);
	intStack.push(5);
	intStack.push(6);
	intStack.push(6);
	intStack.push(6);
	intStack.push(6);
	intStack.push(6);

	intStack.show();

	int n;
	intStack.pop(n);
	cout << n << " is popped" << endl;
	intStack.pop(n);
	cout << n << " is popped" << endl;
	intStack.pop(n);
	cout << n << " is popped" << endl;
	intStack.pop(n);
	cout << n << " is popped" << endl;
	intStack.pop(n);
	cout << n << " is popped" << endl;
	intStack.pop(n);
	cout << n << " is popped" << endl;
	intStack.pop(n);
	cout << n << " is popped" << endl;
	intStack.pop(n);
	cout << n << " is popped" << endl;
	intStack.pop(n);
	cout << n << " is popped" << endl;

	intStack.show();

	return 0;
}