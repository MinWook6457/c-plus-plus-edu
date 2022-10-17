#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (true) {
		string s;
		getline(cin, s);
		if (s == "exit") {
			cout << "종료합니다" << endl;
			exit(1);
		}
		srand((unsigned)time(0));
		int n = rand() % s.length();

		int a = rand() % 26;
		char ch = 'a' + a;
		s[n] = ch;
		cout << s << " - 바뀐 인덱스 번호 : " << n << endl;
	}

}