#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() : Circle(1) {
		//
	}
	Circle(int radius) {
		this->radius = radius;
	}
	void show() { 
		cout << "¹ÝÁö¸§ : " << radius << endl; 
	}
	void swap(Circle& a, Circle& b) {
		Circle tmp;

		tmp = a;
		a = b;
		b = tmp;
	}
};
int main() {
	Circle a(1), b(2);
	a.show();
	b.show();

	swap(a, b);
	a.show();
	b.show();
}