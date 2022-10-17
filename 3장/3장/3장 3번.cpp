#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Account {
private:
	string name;
	int id, money;
public:
	Account(string n, int id, int m) : name(n), id(id), money(m) {
		//
	}
	string getOwner() {
		return name;
	}
	void deposit() {
		money += 5000;
	}
	int withdraw(int s) {
		money = money - s;
		return money;
	}
	int inquiry() {
		return money;
	}
};
int main() {
	Account a("kitae", 1, 50000);
	a.deposit();

	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;

}