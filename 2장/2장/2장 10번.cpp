#include <iostream>
#include <string>
using namespace std;

int main() {
	char s[100];
	cout << "문자열 입력 >>";
	cin >> s;
	int n = strlen(s);
	for (int i = 0; i < n; i++) {
		for(int j = 0 ; j <= i ; j++)
			cout << s[j];
		cout << endl;
	}

	return 0;
}