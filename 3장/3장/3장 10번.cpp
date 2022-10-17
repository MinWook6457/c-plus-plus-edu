#include <iostream>
using namespace std;

class Add {
private:
	int x, y;
public:
	void setValue(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int calculate() {
		return x + y;
	}
};

class Sub {
private:
	int x, y;
public:
	void setValue(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int calculate() {
		return x - y;
	}
};

class Mul {
private:
	int x, y;
public:
	void setValue(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int calculate() {
		return x * y;
	}
};

class Div {
private:
	int x, y;
public:
	void setValue(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int calculate() {
		return x / y;
	}
};

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int x, y;
	char op;
	while (true) {
		cout << "두 정수와 연산자를 입력하세요 >> ";
		cin >> x >> y >> op;
		switch (op)
		{
		case '+':
			a.setValue(x, y);
			cout << a.calculate() << endl;
			break;
		case '-':
			s.setValue(x, y);
			cout << s.calculate() << endl;
			break;
		case '*':
			m.setValue(x, y);
			cout << m.calculate() << endl;
			break;
		case '/':
			d.setValue(x, y);
			cout << d.calculate() << endl;
			break;
		default:
			cout << "종료합니다" << endl;
			return 0;
		}
	}
}