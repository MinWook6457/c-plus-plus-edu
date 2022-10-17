#include <iostream>
#pragma warning(disable:4996)
using namespace std;

class Circle {
private:
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {
		this->name = name;
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	string getName() {
		return name;
	}
};

class CircleManager {
private:
	Circle* p;
	int size;
public:
	CircleManager(int size) {
		this->size = size;
		p = new Circle[size];
		if (p == NULL)
			return;

		string n;
		int r;
		for (int i = 0; i < size; i++) {
			cout << "�� " << i + 1 << "�� �̸��� ������ ";
			cin >> n >> r;
			p[i].setCircle(n, r);
		}
	}
	void searchByName() {
		string search;
		cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
		cin >> search;
		for (int i = 0; i < size; i++) {
			if (search == p[i].getName())
				cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
		}
	}
	void searchByArea() {
		int area;
		cout << "�ּ� ������ ������ �Է��ϼ��� : ";
		cin >> area;
		cout << area << "���� ū ���� �˻��մϴ�." << endl;
		for (int i = 0; i < size; i++) {
			if (area < p[i].getArea())
				cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
		}
		cout << endl;
	}

	~CircleManager() {
		delete[]p;
	}
};

int main() {
	int size;
	cout << "���� ���� >> ";
	cin >> size;
	CircleManager c(size);
	c.searchByName();
	c.searchByArea();
}

