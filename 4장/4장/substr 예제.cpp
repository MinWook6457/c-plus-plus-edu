#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "µ¡¼À ¹®ÀÚ¿­ ÀÔ·Â" << endl;
	getline(cin, s, '\n');

	int sum = 0;
	int startindex = 0;

	while (true) {
		int findex = s.find('+', startindex);
		if (findex == -1) { // ¹ß°ß x
			string part = s.substr(startindex);
			if (part == "")
				break;
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		string part = s.substr(startindex, findex - startindex);
		cout << part << endl;
		sum += stoi(part);
		startindex = findex + 1;
	}
	cout << "ÇÕ : " << sum;
}