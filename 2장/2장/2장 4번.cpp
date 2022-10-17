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
	cout << "5개의 실수를 입력하시오 >> ";
	double a[5];

	for (int i = 0; i < 5; i++)
		cin >> a[i];
	cout << "제일 큰 수 " << biggest(a, 5) << endl;

	return 0;
}