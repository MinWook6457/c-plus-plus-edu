#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable:4996)


int main() {
	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &���� �Դϴ�." << endl;
	getline(cin, s, '&');
	cin.ignore(1); // ��������

	string f, r; // f : find r : replace
	cout << endl;
	cout << "find : ";
	getline(cin, f, '\n');
	cout << "replace : ";
	getline(cin, r, '\n');

	int start = 0;
	while (true) {
		int findIndex = s.find(f, start);
		if (findIndex == -1) {
			break;
		}
		s.replace(findIndex, f.length(), r);
		start = findIndex + r.length();
	}
	cout << s << endl;
}