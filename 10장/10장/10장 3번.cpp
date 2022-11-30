#include <iostream>
using namespace std;

template <class T>
void reverseArray(T arr[], int size) { // 중간값은 그대로, 나머지 인덱스만 교환
	T tmp;
	for (int i = 0; i < size / 2; i++) {
		tmp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = tmp;
	}
}

int main() {
	int x[] = { 1,10,100,5,4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) {
		cout << x[i] << ' ';
	}
}