#include <iostream>
using namespace std;
#pragma warning(disable:4996)

void main() {
	int n;
	cout << "������ ���� : ";
	cin >> n;
	int* p = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	int max = p[0];
	for (int i = 0 ; i < n; i++) {
		if (p[i] > max)
			max = p[i];
	}
	cout << "�ִ밪 : " << max << endl;
	delete [] p;
}