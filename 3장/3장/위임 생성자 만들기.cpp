#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() : Circle(1) {} // 위임생성자 : Circle(int r) 호출
	Circle(int r) {
		radius = r;
		cout << "반지름 " << radius << "원 생성" << endl;
	}
	double getArea() {
		return radius * 3.14 * 3.14;
	}
};

void main() {
	Circle donut;
	double area = donut.getArea();
	cout << "면적 : " << area << endl;
}