#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b)
		return true;
	else {
		if (a > b)
			big = a;
		else
			big = b;
		return false;
	}
}

int main() {
	int a, b, big;
	a = 3, b = 7;
	if (bigger(a, b, big))
		cout << "�� ���� �����ϴ�." << endl;
	else
		cout << a << " �� " << b << "�߿� ū ���� " << big << "�Դϴ�" << endl;
}