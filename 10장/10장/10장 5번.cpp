#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizeA, T b[], int sizeB) {
	int sizeNew = sizeA + sizeB;
	T* c = new T[sizeNew];
	for (int i = 0; i < sizeA; i++)
		c[i] = a[i];
	for (int i = 0 ; i < sizeB; i++)
		c[i+sizeA] = b[i];

	return c;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	int y[] = { 9,84,5,6 };
	int* c = new int[9];
	c = concat(x, 5, y, 4);
	for (int i = 0; i < 9; i++) {
		cout << c[i] << ' ';
	}
}