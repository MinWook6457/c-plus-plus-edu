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
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�.";
	while (true) {
		string n, a;
		int y;
		cout << "�⵵ >> ";
		cin >> y;
		if (y == -1)
			break;
		cin.ignore(1, '\n');

		cout << "å �̸� >> ";
		getline(cin, n);
		cout << "���� >>";
		getline(cin, a);

		Book b(n, a, y);
		v.push_back(b);
	}

	cin.ignore(1, '\n');
	cout << "�� �԰�� å�� " << v.size() << "�� �Դϴ�." << endl;

	string s_a;
	cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>> ";
	getline(cin, s_a);

	for (int i = 0; i < v.size(); i++) {
		if (s_a == v[i].getAuthor())
			cout << v[i].getYear() << "�⵵ , " << v[i].getName() << " , " << v[i].getAuthor() << endl;
	}

	int s_y;
	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ��� >> ";
	cin >> s_y;
	for (int i = 0; i < v.size(); i++) {
		if(s_y==v[i].getYear())
			cout << v[i].getYear() << "�⵵ , " << v[i].getName() << " , " << v[i].getAuthor() << endl;
	}
}