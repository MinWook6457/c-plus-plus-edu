#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	T* tmp = new T[sizeSrc + sizeMinus];
	int size = 0;
	int i, j;
	for (i = 0 ; i < sizeSrc; i++) {
		for (j = 0; j < sizeMinus;j++) {
			if (src[i] == minus[j])
				break;
		}
		if (j == sizeMinus)
			tmp[retSize++] = src[i];
	}
	return tmp;
}

int main() {
	double x[] = { 1.1,2.2,3.3,4.4,5.5 };
	double y[] = { -1,3.3,5.5,-4 };

	int ret = 0;
	double* z = remove(x, 5, y, 4, ret);
	for (int i = 0; i < ret; i++) {
		cout << z[i] << ' ';
	}

	delete []z;
}