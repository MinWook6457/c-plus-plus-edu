#include <iostream>
#include <cstdlib>
#pragma warning(disable:4996)
using namespace std;

class Random {
private:
	int x, y;
public:
	Random() : x(0), y(RAND_MAX) {
		//
	}
	int next() {
		return rand() % (RAND_MAX + 1);
	}
	int nextInRange(int x, int y) {
		return rand() % (y - x + 1) + x;
	}
};
int main() {
	Random r;
	cout << "-- 0에서" << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	srand((unsigned)time(0));
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		if (n % 2 == 0)
			cout << n << ' ';
		else
			i -= 1;
	}
	cout << endl << endl << "-- 2에서 4 까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		if (n % 2 == 0)
			cout << n << ' ';
		else
			i -= 1;
	}
}