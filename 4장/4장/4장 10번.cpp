#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;

class Person {
private:
	string name;
public:
	Person(){}
	Person(string n) : name(n) {
		//
	}
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
};
class Family {
private:
	Person* p;
	string familyName;
	int size;
public:
	Family(string name, int s) :familyName(name) , size(s){
		p = new Person[s];
	}
	void setName(int n, string name) {
		p[n].setName(name);
	}
	void show() {
		cout << familyName << "가족은 다음과 같이 " << size << "명 입니다." << endl;
		for (int i = 0; i < size; i++) {
			cout << p[i].getName() << '\t';
		}

	}
	~Family() {
		delete[]p;
	}
};
int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}