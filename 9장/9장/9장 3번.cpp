#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable:4996)

class LoopAdder { // �߻� Ŭ����
	string name; // ������ �̸�
	int x, y, sum;
	void read(); // x, y ���� �о� ���̴� �Լ�
	void write(); // sum�� ����ϴ� �Լ�
protected:
	LoopAdder(string name = "") { // ������ �̸��� �޴´�. �ʱ갪�� ""
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0; // ���� ���� �Լ�. ������ ���鼭 ���� ���ϴ� �Լ�
public:
	void run(); // ������ �����ϴ� �Լ�
};
void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}
void LoopAdder::write() {
	cout << x << " ���� " << y << " ������ �� = " << sum << "�Դϴ�" << endl;
}
void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}
class ForLoopAdder : public LoopAdder {
public:
	ForLoopAdder(string name = "") : LoopAdder(name) {

	}
protected:
	virtual int calculate() {
		int sum = 0;
		for (int i = getX(); i <= getY(); i++) {
			sum += i;
		}
		return sum;
	}
};
int main() {
	ForLoopAdder forLoop("For Loop");
	forLoop.run();
}