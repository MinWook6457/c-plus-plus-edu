#include <iostream>
using namespace std;
int sum(int a, int b) {
	int result = 0;
	for (int i = a; i <= b; i++) {
		result += i;
	}
	return result;
}
int main() {
	int n;
	cout << "�� ���� �Է��ϼ��� >> ";
	cin >> n;
	cout << "1���� " << n << "������ ���� " << sum(1, n) << "�Դϴ�." << endl;
	return 0;
}