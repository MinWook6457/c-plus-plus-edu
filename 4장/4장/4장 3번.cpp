#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "���ڿ� �Է� >> ";
	getline(cin, s);

	int len = s.length();
	int count = 0;
	for (int i = 0; i < len; i++) {
		if (s.at(i) == 'a')
			count++;
	}

	cout << "a�� ���� : " << count << endl;
}