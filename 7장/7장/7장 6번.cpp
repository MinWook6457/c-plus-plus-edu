#include <iostream>
using namespace std;
#pragma warning(disable:4996)

class Matrix {
private:
	int x[2][2];
public:
	Matrix() : Matrix(0, 0, 0, 0) { // 기본 생성자

	}
	Matrix(int x1, int x2, int x3, int x4) {
		x[0][0] = x1;
		x[0][1] = x2;
		x[1][0] = x3;
		x[1][1] = x4;
	}

	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 2; j++)
				cout << x[i][j] << ' ';
		cout << "}" << endl;
	}
	Matrix operator +(Matrix matrix) {
		Matrix tmp;
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 2; j++)
				tmp.x[i][j] = x[i][j] + matrix.x[i][j];
		return tmp;
	}

	Matrix& operator +=(Matrix matrix) {
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 2; j++)
				x[i][j] += matrix.x[i][j];
		return *this;
	}

	bool operator ==(Matrix m) {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				if (m.x[i][j] != x[i][j])
					return false;
			}
		}
		return true;
	}

};

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;

	return 0;
}