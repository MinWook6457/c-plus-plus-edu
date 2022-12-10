#include <iostream>
using namespace std;

class Circle {
private:
	string name;
	int radius;
public:
	Circle(int radius = 1, string name = "") {
		this->radius = radius;
		this->name = name;
	}
	friend istream& operator >> (istream& ins, Circle& c);
	friend ostream& operator << (ostream& os, Circle c);
};

istream& operator >>(istream& ins, Circle& c) {
	string name;

	cout << "반지름 >> ";
	ins >> c.radius;
	cout << "이름 >> ";
	ins >> c.name;
	return ins;
}

ostream& operator <<(ostream& os, Circle c) {
	os << "(반지름" << c.radius << "인 " << c.name << ")";
	return os;
}

int main() {
	Circle d, w;

	cin >> d >> w;
	cout << d << w << endl;
}