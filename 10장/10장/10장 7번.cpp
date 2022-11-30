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
	cout << "20과 50중 큰 수는 " << c << endl;

	Circle waffle(20), pizza(30);
	
	Circle y = bigger(waffle, pizza);
	cout << "waffle 과 pizza 중 큰 원의 반지름은 " << y.getRadius();
}

