#include <iostream>
using namespace std;

template <class T>
class MyStack {
	int tos;
	T data[100];
public:
	MyStack() {
		tos = -1;
	}
	void push(T element) {
		if (tos == 99) {
			cout << "스택이 가득참";
			return;
		}
		tos++;
		data[tos] = element;
	}
	T pop() {
		T retData;
		if (tos == -1) {
			cout << "스택이 비었음";
			return 0;
		}
		retData = data[tos--];
		return retData;
	}
};

int main() {
	MyStack<int> iStack;
	iStack.push(3);
	cout << iStack.pop() << endl;
}