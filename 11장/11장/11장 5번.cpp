#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	while (true) {
		cout << "종료하려면 exit을 입력하세요 >> ";
		getline(cin, s);
		if (s == "exit")
			break;
	}
	cout << "프로그램을 종료합니다 . . . ";
}