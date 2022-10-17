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
		cout << title << " " << price << "��" << endl;
	}
	~Book() {
		//
	}
};

int main() {
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}