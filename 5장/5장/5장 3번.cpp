#include <iostream>
using namespace std;

void combine(string& a, string& b, string& c) {
	c = a + " " + b;
}

int main() {
	string t1("i love you");
	string t2("very much");
	string t3;
	combine(t1, t2, t3);
	cout << t3;
}