#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "문자열 입력 >> ";
	getline(cin, s);

	int len = s.length();
	int count = 0;
	for (int i = 0; i < len; i++) {
		if (s.at(i) == 'a')
			count++;
	}

	cout << "a의 개수 : " << count << endl;
}