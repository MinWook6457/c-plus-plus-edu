#include <iostream>
using namespace std;

istream& prompt(istream& ins) {
	cout << "¾ÏÈ£ ?";
	return ins;
}

int main() {
	string pass;
	while (true) {
		cin >> prompt >> pass;
		if (pass == "c++") {
			cout << "login success!!" << endl;
			break;
		}
		else {
			cout << "login fail. try again!!" << endl;
		}
	}
}