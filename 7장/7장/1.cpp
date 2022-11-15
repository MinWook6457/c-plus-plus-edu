#include <iostream>
#include <string>

using namespace std;

class Circle {
private:
	int radius;
	string name;
public:
	Circle() {
		//
	}
	void setCircle(string name, int radius) {
		this->name = name;
		this->radius = radius;
	}

	double getArea() {
		return radius * radius * 3.14;
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
		string n;
		int r;
		p = new Circle[size];

		if (p == NULL) {
			return;
		}

		for (int i = 0; i < size; i++) {
			cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
			cin >> n >> r;
			p[i].setCircle(n, r);
		}
	}

	void searchByName() {
		cout << "�˻��ϰ��� �ϴ� ���� �̸� : ";
		string n;
		cin >> n;
		for (int i = 0; i < size; i++) {
			if (n == p[i].getName()) {
				cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
			}
		}
	}

	void searchByArea() {
		cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
		int m;
		cin >> m;
		cout << m << "���� ū ���� �˻��մϴ�." << endl;
		for (int i = 0; i < size; i++) {
			if (p[i].getArea() > m)
				cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
		}
	}
	

	~CircleManager() {
		delete []p;
	}
};

int main() {
	int n;
	cout << "���� ���� >> ";
	cin >> n;

	CircleManager c(n);
	c.searchByName();
	c.searchByArea();
}