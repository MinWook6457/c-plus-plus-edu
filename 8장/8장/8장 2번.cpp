#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; };
};

class NamedCircle : public Circle {
private:
	string name;
public:
	NamedCircle(int radius = 0, string name = "nothing") : Circle(radius) {
		this->name = name;
	}
	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	void show() {
		cout << "�������� " << getRadius() << "�� " << name;
	}
};

int main() {
	NamedCircle pizza[5];
	int r;
	string name;
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���." << endl;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> r;
		getline(cin, name);
		pizza[i].setRadius(r);
		pizza[i].setName(name);
	}
	NamedCircle max = pizza[0];
	for (int i = 0; i < 5; i++) {
		if (max.getArea() < pizza[i].getArea())
			max = pizza[i];
	}

	cout << "���� ������ ū ���ڴ� " << max.getName() << "�Դϴ�";
}