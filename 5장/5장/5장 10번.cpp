#include <iostream>
using namespace std;

class Buffer {
private:
	string text;
public:
	Buffer(string t) : text(t) {
		//
	}
	void add(string next) {
		text += next;
	}
	void print() {
		cout << text << endl;
	}
};
Buffer& append(Buffer& b, string s) {
	b.add(s);
	return b;
}
int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();
}