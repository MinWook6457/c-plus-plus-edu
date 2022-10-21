#include <iostream>
#include <istream>
#include <string.h>
#include <string>
#pragma warning(disable:4996)
using namespace std;

class Book {
	string title;
	int price;
	int pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; 	this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	bool operator == (int price) {
		if (this->price == price)
			return true;
		else
			return false;
	}
	bool operator == (string title) {
		if (this->title == title)
			return true;
		else
			return false;
	}
	friend bool operator !(Book a);
	friend bool operator<(string s, Book& bb);
	friend bool operator == (Book a, Book b);
	string getTitle() { return title; }
};
bool operator !(Book a) {
	if (a.price == 0)
		return true;
	else
		return false;
}
bool operator == (Book a, Book b) {
	if (a.price == b.price && a.pages == b.pages && a.title == b.title)
		return true;
	else
		return false;
}
bool operator<(string s, Book& bb)
{
	return s < bb.title;
}
int main() {
	Book a("명품 C++", 30000, 500), b("명품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl; // price 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if (a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교 
	Book book("벼룩시장,0,50");
	if (!book)
		cout << "공짜다" << endl;

	Book aa("청춘", 20000, 300);

	string bb;
	cout << "책 이름을 입력하세요 >> ";
	getline(cin, bb);
	if (bb < aa) {
		cout << aa.getTitle() << "이 " << bb << "보다 뒤에 있구나!" << endl;
	}
}
