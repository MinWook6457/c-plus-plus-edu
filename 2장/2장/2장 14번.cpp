#include <iostream>
using namespace std;

int main() {
	int n;
	string s;
	int sum = 0;
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500�� �Դϴ�" << endl;
	while (true) {
		cout << "�ֹ�>> ";
		cin >> s >> n;
		if (s == "����������") {
			sum += n * 2000;
			cout << n * 2000 << "�� �Դϴ�. ���ְ� �弼��" << endl;
		}else if (s == "�Ƹ޸�ī��") {
			sum += n * 2300;
			cout << n * 2300 << "�� �Դϴ�. ���ְ� �弼��" << endl;
		}else {
			sum += n * 2500;
			cout << n * 2500 << "�� �Դϴ�. ���ְ� �弼��" << endl;
		}
		if (sum > 20000) {
			cout << "���� " << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�~" << endl;
			break;
		}
	}
	return 0;
}