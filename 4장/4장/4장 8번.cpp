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
	int n;
	cout << "���� ���� >>";
	cin >> n;
	Circle *c = new Circle[n];
	int r;
	for (int i = 0; i < n; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		c[i].setRadius(r);
	}

	int count = 0;
	for (int i = 0; i < n; i++) {
		if (c[i].getArea() > 100)
			count++;
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;
}