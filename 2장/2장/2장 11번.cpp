#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "�� ���� �Է��ϼ��� >>";
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�" << endl;
	return 0;
}