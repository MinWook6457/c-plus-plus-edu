#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;

int main() {
	cout << "아래에 한 줄을 입력하세요. (exit 입력시 종료)" << endl;
	while (true) {
		string str;
		cin >> str;
		if (str == "exit")
			return 0;
		
		for (int i = str.length() - 1; i >= 0; --i) { 
			printf("%c", str[i]);
		}
		// 정상적으로 작동을 하지만 공백이 만날경우 잘라서 반환함
		// reverse(str.begin(), str.end());
		// cout << str;
		cout << endl;
	}
}
