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
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	Book& operator += (int t) {
		this->price = this->price + t;
		return *this;
	}
	friend Book& operator -= (Book& b, int p); // friend ���� �� �ܺ� �Լ��� ����!
	string getTitle() { return title; }
};
// 
Book& operator -= (Book& b, int p) { // ��ü���� �������� �����ϴ� ���̱� ������ (int p, Book &b)�� �Ұ���!
	b.price = b.price - p;
	return b;
}

int main() {
	Book a("û��", 20000, 300);
	Book b("�̷�", 30000, 500);
	Book c;

	a += 500;
	b -= 500;
	a.show();
	b.show();
}
