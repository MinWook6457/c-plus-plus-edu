#include <iostream>
#include <string.h>
using namespace std;

class Book {
private:
	string title;
	int price;
public:
	Book(string t, int p) :title(t), price(p) {
		//
	}
	void set(string title,int price) {
		this->title = title;
		this->price = price;
	}
	void show() {
		cout << title << " " << price << "원" << endl;
	}
	~Book() {
		//
	}
};

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}