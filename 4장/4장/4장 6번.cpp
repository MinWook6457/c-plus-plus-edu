#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;

int main() {
	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit �Է½� ����)" << endl;
	while (true) {
		string str;
		cin >> str;
		if (str == "exit")
			return 0;
		
		for (int i = str.length() - 1; i >= 0; --i) { 
			printf("%c", str[i]);
		}
		// ���������� �۵��� ������ ������ ������� �߶� ��ȯ��
		// reverse(str.begin(), str.end());
		// cout << str;
		cout << endl;
	}
}
