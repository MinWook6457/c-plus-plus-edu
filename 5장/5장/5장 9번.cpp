#include <iostream>
using namespace std;

class Accumulator {
private:
	int value;
public:
	Accumulator(int value) {
		this->value = value;
	}

	Accumulator &add(int n) {
		value += n;
		return *this;
	}

	int get() {
		return value;
	}
};
int main() {
	Accumulator ACC(10);
	ACC.add(5).add(6).add(7);
	cout << ACC.get() << endl;
}