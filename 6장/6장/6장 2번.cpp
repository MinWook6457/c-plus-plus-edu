#include <iostream>
using namespace std;

class Person {
private:
	int id;
	double weight;
	string name;
public:
	Person(int id = 1, string name = "grace", double weight = 20.5) {
		this->id = id;
		this->weight = weight;
		this->name = name;
	}
	void show() {
		cout << id << ' ' << weight << ' ' << name << endl;
	}
};
int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}