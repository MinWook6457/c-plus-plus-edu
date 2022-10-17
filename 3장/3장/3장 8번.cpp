#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;
class Integer {
private:
	int n;
public:
	Integer(int n) : n(n) {
		//
	}
	Integer(string str) : n(stoi(str)) {
		//
	}
	void set(int n) {
		this->n = n;
	}
	int get() {
		return n;
	}
	bool isEven() {
		if (n % 2 == 0) 
			return true;
		else 
			return false;
	}
};
int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';
	Integer m("600");
	cout << m.get() << ' ';
	cout << m.isEven();
}