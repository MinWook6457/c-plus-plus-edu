#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable:4996)


int main() {
	string s;
	cout << "여려 줄의 문자열을 입력하세요. 입력의 끝은 &문자 입니다." << endl;
	getline(cin, s, '&');
	cin.ignore(1); // 버퍼제거

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