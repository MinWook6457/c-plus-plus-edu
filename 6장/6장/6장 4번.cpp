#include <iostream>
using namespace std;

class MyVector {
private:
	int* mem;
	int size;
public:
	MyVector(int n = 100,int val = 0) {
		mem = new int[n];
		size = n;
		for (int i = 0; i < size; i++) {
			mem[i] = val;
		}
	}
	void show() {
		for (int i = 0; i < size; i++) {
			cout << mem[i] << ' ';
		}
		cout << endl;
	}
	~MyVector() {
		delete[]mem;
	}
};
int main() {
	MyVector* p = new MyVector();
	p->show();
	MyVector* s = new MyVector(5, 8);
	s->show();
}