#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;

class Histogram {
private:
	string str;
public:
	Histogram(string str) {
		this->str = str;
	}
	void put(string str) {
		this->str += str;
	}
	void putc(char ch) {
		this->str += ch;
	}
	void print() {
		int count = 0;
		int alpha[26];
		for (int i = 0; i < 26; i++) {
			alpha[i] = 0;
		}

		cout << str << endl << endl;
		for (int i = 0; i < str.length(); i++) {
			if (isalpha(str[i])) {
				str[i] = tolower(str[i]);
				alpha[str[i] - 97]++;
				count++;
			}
		}

		cout << "ÃÑ ¾ËÆÄºª ¼ö " << count << endl << endl;

		for (int i = 0; i < 26; i++) {
			cout << char(97+i) << " (" << alpha[i] << ")\t: ";
			for (int j = 0; j < alpha[i]; j++) {
				cout << "*";
			}
			cout << endl;
		}
	}
};

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}