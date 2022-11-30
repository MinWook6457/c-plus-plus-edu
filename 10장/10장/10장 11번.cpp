#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
	string name, author;
	int year;
public:
	Book(string name, string author, int year) {
		this->name = name;
		this->author = author;
		this->year = year;
	}
	string getName() {
		return name;
	}
	string getAuthor() {
		return author;
	}
	int getYear() {
		return year;
	}
};

int main() {
	vector<Book> v;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다.";
	while (true) {
		string n, a;
		int y;
		cout << "년도 >> ";
		cin >> y;
		if (y == -1)
			break;
		cin.ignore(1, '\n');

		cout << "책 이름 >> ";
		getline(cin, n);
		cout << "저자 >>";
		getline(cin, a);

		Book b(n, a, y);
		v.push_back(b);
	}

	cin.ignore(1, '\n');
	cout << "총 입고된 책은 " << v.size() << "권 입니다." << endl;

	string s_a;
	cout << "검색하고자 하는 저자 이름을 입력하세요>> ";
	getline(cin, s_a);

	for (int i = 0; i < v.size(); i++) {
		if (s_a == v[i].getAuthor())
			cout << v[i].getYear() << "년도 , " << v[i].getName() << " , " << v[i].getAuthor() << endl;
	}

	int s_y;
	cout << "검색하고자 하는 년도를 입력하세요 >> ";
	cin >> s_y;
	for (int i = 0; i < v.size(); i++) {
		if(s_y==v[i].getYear())
			cout << v[i].getYear() << "년도 , " << v[i].getName() << " , " << v[i].getAuthor() << endl;
	}
}