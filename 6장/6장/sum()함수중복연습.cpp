#include <iostream>
using namespace std;

int sum(int a, int b) {
	int s = 0;
	if (a > b) {
		for (int i = b; i <= a; i++) {
			s += i;
		}
		
	}
	if (a < b) {
		for (int i = a; i <= b; i++) {
			s += i;
		}
	}
	return s;
}

int sum(int a) {
	int s = 0; 
	for (int i = 0; i <= a; i++) {
		s += i;
	}
	return s;
}
int main() {
	cout << sum(3, 5) << " " << sum(5, 3) << " " << sum(100);
}