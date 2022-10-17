#include <iostream>
using namespace std;

int add(int s[], int size) {
	int r = 0;
	for (int i = 0; i < size; i++) {
		r += s[i];
	}
	return r;
}

int add(int s[], int size,int t[]) {
	int r = 0;
	for (int i = 0; i < size; i++) {
		r += s[i] + t[i];
	}
	return r;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };

	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << ' ' << d << endl;
}