#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius) {
		this->radius = radius;
	}
	int getRadius() {
		return radius;
	}
};

template <class T>
T bigger(T a, T b) {
	return a > b ? a : b;
}

Circle bigger(Circle a, Circle b) {
	if (a.getRadius() > b.getRadius())
		return a;
	else
		return b;
}

int main() {
	int a = 20, b = 50, c;

	c = bigger(a, b);
	cout << "20�� 50�� ū ���� " << c << endl;

	Circle waffle(20), pizza(30);
	
	Circle y = bigger(waffle, pizza);
	cout << "waffle �� pizza �� ū ���� �������� " << y.getRadius();
}

