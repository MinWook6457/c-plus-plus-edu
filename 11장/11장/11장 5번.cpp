#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	while (true) {
		cout << "�����Ϸ��� exit�� �Է��ϼ��� >> ";
		getline(cin, s);
		if (s == "exit")
			break;
	}
	cout << "���α׷��� �����մϴ� . . . ";
}