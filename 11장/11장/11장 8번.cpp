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

	cout << "������ >> ";
	ins >> c.radius;
	cout << "�̸� >> ";
	ins >> c.name;
	return ins;
}

ostream& operator <<(ostream& os, Circle c) {
	os << "(������" << c.radius << "�� " << c.name << ")";
	return os;
}

int main() {
	Circle d, w;

	cin >> d >> w;
	cout << d << w << endl;
}