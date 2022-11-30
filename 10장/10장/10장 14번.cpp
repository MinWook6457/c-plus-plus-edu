#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#pragma warning(disable:4996)

using namespace std;

class PasswordManager {
	map<string, string> m;
public:
	PasswordManager() {
		//
	}
	void add();
	void check();
};

void PasswordManager::add() {
	string n, p;
	cout << "�̸� ��ȣ >> ";
	cin >> n >> p;
	m[n] = p;
}

void PasswordManager::check() {
	string n, p;
	cout << "�̸� ? ";
	cin >> n;

	while (true) {
		cout << "��ȣ ? ";
		cin >> p;
		if (PasswordManager::m[n] == p) {
			cout << "��� !!" << endl;
			break;
		}
		else
			cout << "����~~" << endl;
	}
}

int main() {
	PasswordManager pm;
	cout << "***** ��ȣ���� ���α׷� WHO�� �����մϴ� *****" << endl;

	while (true) {
		cout << "���� : 1, �˻� : 2, ���� : 3 >> ";
		int n;
		cin >> n;

		if (n == 1) {
			pm.add();
		}
		else if (n == 2) {
			pm.check();
		}
		else {
			cout << "���α׷��� �����մϴ� . . . ";
			return 0;
		}
	}
}