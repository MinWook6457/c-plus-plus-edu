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
			cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
			cin >> n >> r;
			p[i].setCircle(n, r);
		}
	}

	void searchByName() {
		cout << "검색하고자 하는 원의 이름 : ";
		string n;
		cin >> n;
		for (int i = 0; i < size; i++) {
			if (n == p[i].getName()) {
				cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
			}
		}
	}

	void searchByArea() {
		cout << "최소 면적을 정수로 입력하세요 >> ";
		int m;
		cin >> m;
		cout << m << "보다 큰 원을 검색합니다." << endl;
		for (int i = 0; i < size; i++) {
			if (p[i].getArea() > m)
				cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
		}
	}
	

	~CircleManager() {
		delete []p;
	}
};

int main() {
	int n;
	cout << "원의 개수 >> ";
	cin >> n;

	CircleManager c(n);
	c.searchByName();
	c.searchByArea();
}