#include <iostream>
using namespace std;
double biggest(double b[],int n) {
	double result = b[0];
	for (int i = 1; i < n; i++) {
		if (result < b[i])
			result = b[i];
	}
	return result;
}
int main() {
	cout << "5���� �Ǽ��� �Է��Ͻÿ� >> ";
	double a[5];

	for (int i = 0; i < 5; i++)
		cin >> a[i];
	cout << "���� ū �� " << biggest(a, 5) << endl;

	return 0;
}