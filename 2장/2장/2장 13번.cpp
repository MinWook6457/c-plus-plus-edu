#include <iostream> 
using namespace std;

int main() {
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ� *****" << endl;
	int menu, n;
	while (true) {
		cout << "«�� : 1, ¥�� : 2, ������ : 3, ���� : 4>> ";
		cin >> menu;
		if (menu == 4) {
			cout << "���� ������ �������ϴ�" << endl;
			break;
		}
		if (menu > 4) {
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
			continue;
		}
		cout << "�� �κ�? ";
		cin >> n;
		if (menu == 1) {
			cout << "«�� " << n << "�κ� ���Խ��ϴ�" << endl;
		}else if (menu == 2) {
			cout << "¥�� " << n << "�κ� ���Խ��ϴ�" << endl;
		}else if(menu == 3) {
			cout << "������ " << n << "�κ� ���Խ��ϴ�" << endl;
		}
	}


	return 0;
}