#include <iostream>
#pragma warning(disable:4996)

using namespace std;

int main() {
	char ch;
	int c = 0;

	while (true) {
		cin.get(ch);
		if (cin.eof() || ch == '\n')
			break;
		if(ch==' ')
			c++;
	}
	cout << c;
}