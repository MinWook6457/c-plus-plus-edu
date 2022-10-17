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
			cout << "원 " << i + 1 << "의 이름과 반지름 ";
			cin >> n >> r;
			p[i].setCircle(n, r);
		}
	}
	void searchByName() {
		string search;
		cout << "검색하고자 하는 원의 이름 >> ";
		cin >> search;
		for (int i = 0; i < size; i++) {
			if (search == p[i].getName())
				cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
		}
	}
	void searchByArea() {
		int area;
		cout << "최소 면적을 정수로 입력하세요 : ";
		cin >> area;
		cout << area << "보다 큰 원을 검색합니다." << endl;
		for (int i = 0; i < size; i++) {
			if (area < p[i].getArea())
				cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
		}
		cout << endl;
	}

	~CircleManager() {
		delete[]p;
	}
};

int main() {
	int size;
	cout << "원의 개수 >> ";
	cin >> size;
	CircleManager c(size);
	c.searchByName();
	c.searchByArea();
}

