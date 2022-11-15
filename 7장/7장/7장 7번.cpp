#include <iostream>
using namespace std;
#pragma warning(disable:4996)

class Matrix {
private:
	int x[4];;
public:
	Matrix() : Matrix(0, 0, 0, 0) { // 기본 생성자

	}
	Matrix(int x1, int x2, int x3, int x4) {
		x[0] = x1;
		x[1] = x2;
		x[2] = x3;
		x[3] = x4;
	}

	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++)
			cout << x[i] << " ";
		cout << "}" << endl;
	}
	
	void operator >> (int a[4]) {
		for (int i = 0; i < 4; i++)
			x[i] = a[i];
	}

	Matrix& operator <<(int a[4]) {
		for (int i = 0; i < 4; i++)
			x[i] = a[i];
		return *this;
	}

};

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) cout << x[i] << " ";
	cout << endl;
	b.show();
}