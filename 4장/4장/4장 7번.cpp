#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;

class Circle {
private:
	int radius;
public:
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return radius * radius * 3.14;
	}
};

int main() {
	Circle c[3];
	int r;
	for (int i = 0; i < 3; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		c[i].setRadius(r);
	}

	int count = 0;
	for (int i = 0; i < 3; i++) {
		if (c[i].getArea() > 100)
			count++;
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;
}