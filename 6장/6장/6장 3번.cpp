#include <iostream>
using namespace std;

int big(int a, int b) {
	int max = 100;
	int r = a > b ? a : b;
	return max > r ? r : max;
}
int big(int a, int b, int c) {
	int max = 50;
	int r = 0;
	if (a > b) {
		if (a > c)
			r = a;
	}
	if (b > a) {
		if (b > c)
			r =  b;
	}
	if (c < a) {
		if (c > b)
			r = c;
	}
	return max > r ? r : max;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << "x : " << x << " y : " << y << " z : " << z;
}