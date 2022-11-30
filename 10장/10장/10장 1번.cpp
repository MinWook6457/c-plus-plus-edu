#include <iostream>
using namespace std;

template <class T> 
T biggest(T a[], int n) {
	T max = a[0];
	for (int i = 1; i < n; i++) {
		if (max < a[i])
			max = a[i];
	}

	return max;
}

int main() {
	int x[] = { 1,100,10,4,5 };
	cout << biggest(x, 5) << endl;
}