#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;

class Person {
private:
	string name, tel;
public:
	Person() {
		//
	}
	string getName() {
		return name;
	}
	string getTel() {
		return tel;
	}
	void set(string name, string tel) {
		this->name = name;
		this->tel = tel;
	}
};
int main() {
	Person p[3];
	string search;
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	for (int i = 0; i < 3;i++) {
		string n, t;
		cout << "��� " << i + 1 <<" : ";
		cin >> n >> t;
		p[i].set(n, t);
	}
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << p[i].getName() << ' ';
	}
	cout << endl;

	cout << "��ȭ��ȣ �˻��մϴ� . �̸��� �Է��ϼ��� : ";
	cin >> search;
	for (int i = 0; i < 3; i++) {
		if (search == p[i].getName())
			cout << p[i].getTel();
	}
}