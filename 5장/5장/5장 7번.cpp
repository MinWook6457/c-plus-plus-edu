#include <iostream>
using namespace std;

class MyIntStack {
private:
	int p[10];
	int tos;
public:
	MyIntStack():tos(-1){}
	bool push(int n) {
		if (tos >= 9)
			return false;
		p[++tos] = n;
		return true;
	}
	bool pop(int& n) {
		if (tos < 0)
			return false;
		n = p[tos--];
		return true;
	}
};

int main() {
	MyIntStack a; // 기본 생성자 호출
	for (int i = 0; i < 11; i++) {
		if (a.push(i)) cout << i << ' ';
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;

	return 0;
}