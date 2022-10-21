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
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
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
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl; // price ��
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� �� 
	Book book("�������,0,50");
	if (!book)
		cout << "��¥��" << endl;

	Book aa("û��", 20000, 300);

	string bb;
	cout << "å �̸��� �Է��ϼ��� >> ";
	getline(cin, bb);
	if (bb < aa) {
		cout << aa.getTitle() << "�� " << bb << "���� �ڿ� �ֱ���!" << endl;
	}
}
