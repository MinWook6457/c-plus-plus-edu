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
		cout << "두 수는 같습니다." << endl;
	else
		cout << a << " 와 " << b << "중에 큰 수는 " << big << "입니다" << endl;
}