#include <iostream>
using namespace std;

int main() {
	cout << "���� 5�� �Է� >> ";
	int* x = new int[5];
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
		sum += x[i];
	}
	cout << sum / 5.0 << endl;
	delete[] x;

}