#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) {
		this->radius = radius;
	}

	int getRadius() {
		return radius;
	}
};

template <class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <class T>
T add(T a, T b) {
	return a + b;
}

int main() {
	int a = 3, b = 5;
	cout << a << "," << b << endl;
	myswap(a, b);
	cout << a << "," << b << endl;

	int c = a + b;
	cout << c << endl;
}