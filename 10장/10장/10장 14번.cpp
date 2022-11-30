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
	cout << "이름 암호 >> ";
	cin >> n >> p;
	m[n] = p;
}

void PasswordManager::check() {
	string n, p;
	cout << "이름 ? ";
	cin >> n;

	while (true) {
		cout << "암호 ? ";
		cin >> p;
		if (PasswordManager::m[n] == p) {
			cout << "통과 !!" << endl;
			break;
		}
		else
			cout << "실패~~" << endl;
	}
}

int main() {
	PasswordManager pm;
	cout << "***** 암호관리 프로그램 WHO를 시작합니다 *****" << endl;

	while (true) {
		cout << "삽입 : 1, 검사 : 2, 종료 : 3 >> ";
		int n;
		cin >> n;

		if (n == 1) {
			pm.add();
		}
		else if (n == 2) {
			pm.check();
		}
		else {
			cout << "프로그램을 종료합니다 . . . ";
			return 0;
		}
	}
}