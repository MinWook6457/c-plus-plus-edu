#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() : Circle(1) {} // ���ӻ����� : Circle(int r) ȣ��
	Circle(int r) {
		radius = r;
		cout << "������ " << radius << "�� ����" << endl;
	}
	double getArea() {
		return radius * 3.14 * 3.14;
	}
};

void main() {
	Circle donut;
	double area = donut.getArea();
	cout << "���� : " << area << endl;
}