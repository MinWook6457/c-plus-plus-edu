#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while (true) {
		string s;
		getline(cin, s);
		if (s == "exit") {
			cout << "�����մϴ�" << endl;
			exit(1);
		}
		srand((unsigned)time(0));
		int n = rand() % s.length();

		int a = rand() % 26;
		char ch = 'a' + a;
		s[n] = ch;
		cout << s << " - �ٲ� �ε��� ��ȣ : " << n << endl;
	}

}