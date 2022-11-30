#include <iostream>
using namespace std;

template <class T>
bool search(T find, T arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (find == arr[i])
			return true;
	}
	return false;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	if (search(3, x, 5))
		cout << "찾음";
	else
		cout << "찾지 못함";
}