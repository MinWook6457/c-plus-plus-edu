#include <iostream>
#include <cstdlib>
#pragma warning(disable:4996)
using namespace std;

class SelectRandom {
private:
	int x, y;
public:
	SelectRandom() : x(0), y(RAND_MAX) {
		//
	}
	int nextEven() {
		int n;
		do {
			n = rand();
		} while (n % 2 != 0);
		return n;
	}
	int nextOdd() {
		int n;
		do {
			n = rand();
		} while (n % 2 != 1);
		return n;
	}
	int nextEvenInRange(int x, int y) {
		int n;
		do {
			n = rand() % (y - x + 1) + x;
		} while (n % 2 != 0);
		return n;
	}
	int nextOddInRange(int x, int y) {
		int n;
		do {
			n = rand() % (y - x + 1) + x;
		} while (n % 2 != 1);
		return n;
	}
};
int main() {
	SelectRandom r;
	cout << "-- 0에서" << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	srand((unsigned)time(0));
	for (int i = 0; i < 10; i++) {
		int n = r.nextEven();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 9 까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextOddInRange(2, 9);
		cout << n << ' ';
	}
}