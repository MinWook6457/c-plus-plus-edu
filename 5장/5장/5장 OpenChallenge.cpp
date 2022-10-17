#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;

class Morse {
private:
	string alphabet[26];
	string digit[10];
	string slash, question, comma, period, plus, equal;
public:
	Morse() {
		string alphabet[26] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--." };
		string digit[10] = { "-----",",----","..---","...--","....-",".....","-....","--...","---..","----." };
		for (int i = 0; i < 26; i++) {
			this->alphabet[i] = alphabet[i];
		}
		for (int i = 0; i < 10; i++) {
			this->digit[i] = digit[i];
		}
		slash = "-..-."; question = "..--.."; comma = "--..--"; period = ".-.-.-"; plus = ".-.-."; equal = "-...-";
	}
	void text2Morse(string text, string& morse) {
		int size = text.length();
		morse = "";

		for (int i = 0; i < size; i++) {
			char c = text[i];
			if (c == '/')
				morse += slash + " ";
			else if (c == '?')
				morse += question + " ";
			else if (c == ',')
				morse += comma + " ";
			else if (c == '.')
				morse += period + " ";
			else if (c == '+')
				morse += plus + " ";
			else if (c == '=')
				morse += equal + " ";
			else if (isdigit(c)) {
				morse += digit[c - 48] + " ";
			}
			else if (isalpha(c)) {
				if (isupper(c)) {
					morse += alphabet[c - 65] + " ";
				}
				else if (islower(c)) {
					morse += alphabet[c - 97] + " ";
				}
				else {
					morse += "   ";
				}
			}
		}
	}
};
bool morse2text(string m, string& t) {
	string buf; // 모스부호 버퍼
	morse2text(t, buf);
	if (m == buf) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	Morse m;
	
	string text, morse;
	cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다" << endl;

	getline(cin, text);
	m.text2Morse(text, morse);

	cout << morse << endl;
}