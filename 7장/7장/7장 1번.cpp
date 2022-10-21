#include <iostream>
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
	Book& operator += (int t) {
		this->price = this->price + t;
		return *this;
	}
	friend Book& operator -= (Book& b, int p); // friend 선언 시 외부 함수로 정의!
	string getTitle() { return title; }
};
// 
Book& operator -= (Book& b, int p) { // 객체에서 정수형을 연산하는 것이기 때문에 (int p, Book &b)는 불가능!
	b.price = b.price - p;
	return b;
}

int main() {
	Book a("청춘", 20000, 300);
	Book b("미래", 30000, 500);
	Book c;

	a += 500;
	b -= 500;
	a.show();
	b.show();
}
