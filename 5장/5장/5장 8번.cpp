#include <iostream>
using namespace std;

class MyIntStack {
private:
	int *p;
	int size;
	int tos;
public:
	MyIntStack(int s) :tos(-1) , size(s) {
		p = new int[size];
	}
	MyIntStack(const MyIntStack& s) {
		int len = s.size;
		this->p = new int[len];
		this->size = len;
		this->tos = s.tos;
		for (int i = 0; i <= tos; i++) {
			this->p[i] = s.p[i];
		}
	}
	bool push(int n) {
		if (tos >= 9)
			return false;
		p[++tos] = n;
		return true;
	}
	bool pop(int& n) {
		if (tos < 0)
			return false;
		n = p[tos--];
		return true;
	}
	~MyIntStack() {
		delete p;
	}
};

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;

	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}