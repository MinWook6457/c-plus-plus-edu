#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(){}
	Circle(int r) : radius(r) {
		//
	}
	int getRadius() {
		return radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
	void show() {
		cout << "�������� " << radius << "�� ��" << endl;
	}
};
void increaseBy(Circle& a, Circle& b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}
int main() {
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
}