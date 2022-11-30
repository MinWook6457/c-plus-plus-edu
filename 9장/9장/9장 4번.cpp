#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable:4996)

class LoopAdder { // 추상 클래스
	string name; // 루프의 이름
	int x, y, sum;
	void read(); // x, y 값을 읽어 들이는 함수
	void write(); // sum을 출력하는 함수
protected:
	LoopAdder(string name = "") { // 루프의 이름을 받는다. 초깃값은 ""
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0; // 순수 가상 함수. 루프를 돌면서 합을 구하는 함수
public:
	void run(); // 연산을 진행하는 함수
};
void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
	cin >> x >> y;
}
void LoopAdder::write() {
	cout << x << " 에서 " << y << " 까지의 합 = " << sum << "입니다" << endl;
}
void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}
class WhileLoopAdder : public LoopAdder {
public:
	WhileLoopAdder(string name = "") : LoopAdder(name) {

	}
protected:
	virtual int calculate() {
		int sum = 0;
		int i = getX();
		while (i <= getY()) {
			sum += i;
			i++;
		}
		return sum;
	}
};

class doWhileLoopAdder : public LoopAdder {
public:
	doWhileLoopAdder(string name = "") : LoopAdder(name) {

	}
protected:
	virtual int calculate() {
		int sum = 0;
		int i = getX();
		do {
			sum += i;
			i++;
		} while (i <= getY());

		return sum;
	}
};

int main() {
	WhileLoopAdder whileLoop("whileLoop Loop");
	whileLoop.run();

	doWhileLoopAdder doWhileLoop("do While Loop");
	doWhileLoop.run();
}